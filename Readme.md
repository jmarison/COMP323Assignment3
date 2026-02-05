# Week 3 Example — Input + Control Feel

This example supports the Week 3 slides.

## Learning goals
- Use events for discrete actions (dash/jump/toggles)
- Use key-state for continuous movement intent
- Normalize 8-direction movement to avoid diagonal speed bugs
- Tune feel with small parameter presets

## Run
From this folder:

- `python3 -m pip install pygame`
- `python3 main.py`

## Controls
- Arrow keys / WASD: move (top-down)
- `P`: toggle platformer mode (jump + gravity)
- `Up` / `W` / `Space`: jump (platformer mode)
- `S` / `K` / `Down Arrow`: Slam (platformer mode)
- `Left Shift` / `Right Shift`: dash (cooldown)
- `1` / `2` / `3` / `4` / `5` : feel preset (tight/floaty/heavy)
- `C`: cycle control scheme (WASD / arrows / IJKL)
- `F1`: toggle debug overlay
- `Tab`: cycle boundary mode (clamp/wrap/bounce)
- `R`: reset
- `Space`: start (from title)
- `Esc`: quit


## What to change first
- Try editing preset values in `input_control_feel/game.py`:
  - accel / friction / max speed
  - gravity / jump speed
- Try changing dash cooldown or dash impulse

## Additions
- Discrete Slam Action (in platformer mode) which allows the player to slam back to the ground.
- The player must be off ground, in platformer mode, and meeting the SLAM_FALL_REQUIREMENT
- The constant "SLAM_FALL_REQUIREMENT" is the minimum y velocity that the player must have in order to slam. I initially had it as just 0 but this felt clunky where often times if slam pressed too early nothing happens. This is to prevent the use of slam during most of the rise of the jump. 
- During the slam, the player becomes thinner and taller to give some visual feedback that the player is slamming down fast
- Added a multi-jump feature, the amount of jumps is controlled by "JUMPS" constant. Multi jumps give less height compared to grounded jumps this is controlled by "MULTI_JUMP_DIMINISH" factor
- Multi jump count resets upon touching the ground. Multi jump count also added to HUD

## New Presets
- Icey (Use `4` to toggle preset) 
    - The Main parameter changed here is the friction.  This gives a more slippery feel. I was aiming for how Luigi feels particularly in Super Smash Bros Melee with the really floaty jump and low friction. 
- Sharp (Use `5` to toggle preset)
    - This preset has high speed and acceleration values alongside a high friction value. This gives the player a large amount of speed, but remains controllable. From testing this preset is most similar to the movement of Super Meat Boy(High speed but still requires precise movements to avoid obstacles). The high acceleration allows for quick adjustments to help avoid hazards. This also has high jump accel and gravity for the purpose of precise platforming. 

