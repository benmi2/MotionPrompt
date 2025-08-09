
# MotionPrompt — JSON-Driven Animation from LLM Prompts (UE5)

MotionPrompt is an Unreal Engine 5 plugin for authoring animations by editing JSON—ideal for **hard-surface rigs** like **tanks, helicopters, ships, cranes, turrets, hatches, doors, radars/sensors**, and other mechanical setups. The workflow is semi-manual (copy/paste to an LLM) unless you wire in an API key for automation.

> TL;DR: Export a T-pose/base JSON ➜ ask an LLM to generate keyframed **rotations** ➜ Load JSON ➜ Override/Create a UE animation with editable keyframes.

## Status & Scope

* ✅ **Best for hard-surface/mechanical rigs** (rigid joints, hinges, pistons, rotors, turrets).
* 🧪 **Humanoids are experimental**: it works but is currently **inaccurate/rough**; expect improvements in future versions.
* ❌ Not intended for soft-body/IK/physics-driven motion out of the box.

## Features

* Export **base pose** (bone hierarchy + transforms) as JSON.
* Import **rotation-driven** animation JSON (per-frame bone rotations).
* **Override** an existing UE animation (or create a new one).
* Resulting sequences have **editable keyframes** in the UE editor.
* Designed for iterative authoring with LLMs (e.g., ChatGPT-5).

## Prerequisites

* UE 5.x, MotionPrompt plugin enabled
* A skeletal rig suitable for **mechanical articulation**
* (Optional) LLM access (ChatGPT-5). API automation is possible but not required.

## Recommended Workflow (Step-by-Step)

1. **Pick an Override Target**

   * Create/choose an **empty 1-second animation** (no motion).
     *Reason:* the importer references the base pose of the target; a neutral clip avoids bias.

2. **Set the In-Project Path**

   * Copy the animation path (e.g., `/Game/Vehicles/Tank/Anim/Empty_1s`).
   * Paste it into MotionPrompt as the **Override Target**.

3. **Export Base (T-Pose) JSON**

   * `Window → MotionPrompt` → select your **skeletal mesh/skeleton**.
   * Choose an **export location** and click **Export T-Pose**.

4. **Author with an LLM**

   * Paste the exported JSON into your LLM.
   * Ask it to generate an animation by editing **rotations** per frame.
   * Example tasks (hard-surface):

     * *Helicopter*: main rotor spin, tail rotor spin, pilot door open/close, sensor head slow 360° scan (loop).
     * *Tank*: turret 0→45° traverse, gun −10→+15° elevation, commander hatch open.
     * *Crane*: boom luffing 0→30°, trolley travel, hook raise/lower.
   * Save the LLM’s output as `YourAnim.json`.

5. **Load & Create**

   * In MotionPrompt: set **Override Target** and select your `YourAnim.json`.
   * Click **Load From JSON** → **Create / Override Animation**.
   * Open the generated sequence and tweak keyframes as needed.

## JSON Format (FPromptAnimation)

* `SequenceLength` (seconds), `Frames[]`, each with `TPoseBonesAndRotations` (all bones recommended).
* Rotations are **UE degrees**: `Pitch`, `Yaw`, `Roll`. Z-up.

```json
{
  "SequenceLength": 3.0,
  "Frames": [
    {
      "TPoseBonesAndRotations": {
        "root": {
          "Parent": null,
          "Transform": {
            "Location": { "X": 0, "Y": 0, "Z": 0 },
            "Rotation": { "Pitch": 0, "Yaw": 0, "Roll": 0 },
            "Scale":    { "X": 1, "Y": 1, "Z": 1 }
          }
        }
        // ...all mechanical bones with updated rotations
      }
    }
  ]
}
```

## Example LLM Prompts (Hard-Surface)

**Helicopter sensor slow scan (loop, 6s)**

```
Using the base pose JSON I pasted, create a 6.0s loop:
- No root motion.
- Rotate bone "sensor_head" Yaw from 0° to 360° linearly over 6s; Pitch, Roll stay near 0°.
- Keep all other bones unchanged.
- Output complete Frames[] with Pitch/Yaw/Roll in degrees, Z-up, no gimbal flips.
```

**Tank turret traverse + gun elevation**

```
From the base JSON, make a 4.0s sequence:
- Turret Yaw: 0°→45° from 0–2s, then hold.
- Gun Pitch (elevation): 0°→+10° from 1–3s, then settle.
- Root stays fixed. Output full Frames[] with all bones preserved.
```

**Helicopter rotor spin + pilot door open**

```
3.0s clip:
- main_rotor Yaw spins at constant speed (e.g., 0→1080° over 3s).
- pilot_door swings open around its hinge from 0–1.2s, then holds.
- No location changes; rotations only; use the exact bone names from the JSON.
```

## Best Practices (Mechanical Rigs)

* **Hinges/Rotors:** animate primarily **one axis** (avoid multi-axis drift).
* **Limits:** keep angles within plausible mechanical ranges.
* **Frames vs. Size:** large files? Lower FPS (e.g., 20–30) or segment animations.
* **Consistency:** exact bone names + parenting as in exported JSON.
* **No IK/physics**: bake simple rotations; layer complex behavior in UE later.

## Humanoids (Experimental)

* Works, but **not accurate** yet (natural gait, balance, micro-motion are limited).
* Expect future updates improving biomechanical realism.
* For now, prefer **mechanical** use cases.

## Troubleshooting

* **File too large** → reduce FPS/duration; animate only necessary bones.
* **Weird offsets** → ensure the target clip is truly neutral; avoid root rotation.
* **Flips** → request smaller per-frame deltas; avoid 180° jumps.
* **Bone name errors** → keep names identical to the exported JSON (case-sensitive).

## Optional: API Automation

Manual copy/paste by default. You can add an API key + bridge to:

* Send base JSON to your LLM, receive the edited JSON, and auto-import.
* This is off by default for safety/cost. Contributions welcome.

## Roadmap

* Better humanoid fidelity (smoothing, constraints, counter-rotation).
* Optional location curves + per-bone inclusion masks.
* Sample bridges for common LLM APIs.

## License

Add your chosen license (MIT, Apache-2.0, BSD-3-Clause) and include a `LICENSE` file.

## Acknowledgements

Built for rapid **hard-surface** animation prototyping with clean JSON + LLMs.
