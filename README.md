# Pineapple
## A 3d Printed Mechanical Keyboard
![example](https://i.imgur.com/QSNU3y5.jpg)

**Designer's Note:** This project is an exploration of the theme *Information as a Weapon*. 

## Intro
It's a keyboard shaped like a pineapple grenade! What more do you need to know?

After the (explosive?) popularity of my [F-Bomb keyboard](https://github.com/dbostian/fbomb), I was inspired to create another novelty keyboard/macropad with a similar theme. And so, here we are.

What have I done?


I couldn't resist making the lever functional, so there's an extra switch in the top. If you pull the pin and squeeze the lever, it activates this switch:

![example](https://i.imgur.com/Q5l1pZU.jpg)


## Project Structure
**/stls** - STL files for 3d Printing

**/qmk/keyboards/pineapple** - QMK project folder, for customizing your own keymap. 

**pineapple_default.hex** - Default Firmware


## Construction

### Printed Parts
- [ ] 1x front half
- [ ] 1x back half
- [ ] 1x top
- [ ] 1x lever
- [ ] 1x pin
- [ ] 1x ring

### Hardware
- [ ] 24x Keycaps - I used twelve 1u, and twelve 1.25u caps from a variety of sets.
- [ ] 25x Switches, cherry MX or compatible.
- [ ] 25x 1N4148 Diodes
- [ ] 1x Pro Micro
- [ ] 6x M3 Heatset Inserts (holes for inserts are 4mm)
- [ ] 4x M3 x 8mm Socket Cap Machine Screw
- [ ] 2x M3 x 8mm Countersunk Cap Machine Screw
- [ ] 1x M3 x 25mm Socket Cap Cap Machine Screw
- [ ] 1x M3 Nylock Nut
- [ ] Wire
- [ ] Heat Shrink Tubing

### Tools / Misc
- [ ] 3d Printer + Filament
- [ ] Soldering Iron + Solder
- [ ] Multimeter
- [ ] Wire Cutters / Strippers / Flush Cutters / Pliers
- [ ] Hex Drivers

### Printing Notes
I printed mine in PLA at 0.2mm. Everything needs support except the pin and ring. Be gentle removing the support material.

### Assembly
Install six m3 heatset inserts into the shell halves. Insert switches, and wire into a two 4x3 grids. I used the diode legs for the rows, and solid wire - stripped into segments - for the columns. The excellent [QMK handwiring guide](https://beta.docs.qmk.fm/using-qmk/guides/keyboard-building/hand_wire) should be of some help here.

![example](https://i.imgur.com/aUI9oo0.jpg)

Join the halves with short lengths of stranded wire to make a single 4x6 grid. Attach a diode and some long lengths of wire to the 25th switch - it will be in row 1, column 7 by itself.

![example](https://i.imgur.com/SHfpmGW.jpg)

Solder the Pro Micro to the rows and columns.  The rows are wired to D1, D0, D4, and C6 pins... columns to F4, F5, F6, F7, B1, B3, and D7. Thread the wires for the last switch through the top, and solder this in as well. Don't snap this switch into the top yet, as you need to screw the top to the body shells first. Attach the row side of the 25th switch to row 1, and the column side directly to D7. This is a good time to flash the firmware and test each switch.

![example](https://i.imgur.com/jBpvN2m.jpg)

Trim wires flush with the bottom of the PCB. Slot the pro micro into its place in the bottom of the shells, gently guide the wiring inside, and screw the halves together with m3x8 socket cap screws. Then screw the top on with m3x8 countersinks. Now you can snap the 25th switch in.

![example](https://i.imgur.com/iU7rBnp.jpg)

Finishing touches: Attach the lever to the top with the m3x25 socket cap screw and nylock nut. Keep this loose so it can pivot freely. The pin and ring just snap together. Add your favorite keycaps, and you're done!

![example](https://i.imgur.com/CMQH5ZL.jpg)


### Firmware
The included firmware is a starting point, but if you want to flash your own (more useful) firmware, you can RESET the pro micro by tapping the 25th key twice.

I've included my customized QMK folder as a starting point for creating your own keymap. Most changes are in the default keymap.c. Follow [this guide](https://beta.docs.qmk.fm/tutorial/newbs_building_firmware) to build your custom firmware.


Fin!
![example](https://i.imgur.com/ngPP8eN.jpg)
