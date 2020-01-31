/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "../gcode.h"
#include "../../inc/MarlinConfig.h"

/**
 * M116: Machine Size string
 */
void GcodeSuite::M116() {

  SERIAL_ECHOPAIR("x_min_bed:", X_MIN_BED, " x_max_bed:", X_MAX_BED, " y_min_bed:", Y_MIN_BED, " y_max_bed:", Y_MAX_BED);
  SERIAL_ECHOPAIR(" x_min_pos:", X_MIN_POS, " x_max_pos:", X_MAX_POS);
  SERIAL_ECHOPAIR(" y_min_pos:", Y_MIN_POS, " y_max_pos:", Y_MAX_POS);
  SERIAL_ECHOLNPAIR(" z_min_pos:", Z_MIN_POS, " z_max_pos:", Z_MAX_POS);
  
}
