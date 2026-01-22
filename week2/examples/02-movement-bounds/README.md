# Week 2 Example — Movement + Boundaries

This example supports the Week 2 slides.

## Learning goals
- Define a playfield separate from the HUD
- Update movement with dt and a velocity vector
- Implement boundary rules (clamp/wrap/bounce)
- Add a simple goal loop (reach target) + a second object (teleporter)

## Run
From this folder:

- `python3 -m pip install pygame`
- `python3 main.py`

## Controls
- Arrow keys / WASD: move
- `Tab`: cycle boundary mode
- `P`: toggle platformer mode (jump + gravity)
- `Up` / `W`: jump (platformer mode)
- `R`: reset level
- `Space`: start (from title)
- `Esc`: quit

## What to change first
- `PLAYFIELD_PADDING`, `PLAYER_MAX_SPEED`, `TIMER_SECONDS`
- Try swapping boundary mode defaults
- Try making the teleporter a hazard instead
