/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2022 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

#include "../../fontdata.h"

#if HAS_GRAPHICAL_TFT && TFT_FONT == UNIFONT

// Unifont ASCII 32pt, capital 'A' height: 20px, width: 100%, range: 0x0020-0x007e
extern const uint8_t Unifont_ASCII_20[3770] = {
  129,20,32,0,126,0,28,252, // unifont_t
  // 0x0020 " "
  0,0,0,16,0,0,
  // 0x0021  !
  2,20,20,16,8,0,192,192,192,192,192,192,192,192,192,192,192,192,192,192,0,0,192,192,192,192,
  // 0x0022  "
  10,8,16,16,4,16,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,
  // 0x0023  #
  12,20,40,16,2,0,12,48,12,48,12,48,12,48,12,48,12,48,255,240,255,240,48,192,48,192,48,192,48,192,255,240,255,240,195,0,195,0,195,0,195,0,195,0,195,0,
  // 0x0024  $
  14,20,40,16,2,0,3,0,3,0,63,240,63,240,195,12,195,12,195,0,195,0,63,0,63,0,3,240,3,240,3,12,3,12,195,12,195,12,63,240,63,240,3,0,3,0,
  // 0x0025  %
  14,20,40,16,2,0,60,12,60,12,195,48,195,48,195,48,195,48,60,192,60,192,3,0,3,0,3,0,3,0,12,240,12,240,51,12,51,12,51,12,51,12,192,240,192,240,
  // 0x0026  &
  14,20,40,16,2,0,15,192,15,192,48,48,48,48,48,48,48,48,12,192,12,192,15,0,15,0,51,12,51,12,192,204,192,204,192,48,192,48,192,240,192,240,63,12,63,12,
  // 0x0027  '
  2,8,8,16,8,16,192,192,192,192,192,192,192,192,
  // 0x0028  (
  6,24,24,16,6,254,12,12,48,48,48,48,192,192,192,192,192,192,192,192,192,192,192,192,48,48,48,48,12,12,
  // 0x0029  )
  6,24,24,16,4,254,192,192,48,48,48,48,12,12,12,12,12,12,12,12,12,12,12,12,48,48,48,48,192,192,
  // 0x002a  *
  14,14,28,16,2,2,3,0,3,0,195,12,195,12,51,48,51,48,15,192,15,192,51,48,51,48,195,12,195,12,3,0,3,0,
  // 0x002b  +
  14,14,28,16,2,2,3,0,3,0,3,0,3,0,3,0,3,0,255,252,255,252,3,0,3,0,3,0,3,0,3,0,3,0,
  // 0x002c  ,
  4,8,8,16,6,252,240,240,48,48,48,48,192,192,
  // 0x002d  -
  8,2,2,16,4,8,255,255,
  // 0x002e  .
  4,4,4,16,6,0,240,240,240,240,
  // 0x002f  /
  12,20,40,16,2,0,0,48,0,48,0,48,0,48,0,192,0,192,3,0,3,0,3,0,3,0,12,0,12,0,12,0,12,0,48,0,48,0,192,0,192,0,192,0,192,0,
  // 0x0030  0
  12,20,40,16,2,0,15,0,15,0,48,192,48,192,192,48,192,48,192,240,192,240,195,48,195,48,204,48,204,48,240,48,240,48,192,48,192,48,48,192,48,192,15,0,15,0,
  // 0x0031  1
  10,20,40,16,4,0,12,0,12,0,60,0,60,0,204,0,204,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,255,192,255,192,
  // 0x0032  2
  12,20,40,16,2,0,63,192,63,192,192,48,192,48,192,48,192,48,0,48,0,48,3,192,3,192,12,0,12,0,48,0,48,0,192,0,192,0,192,0,192,0,255,240,255,240,
  // 0x0033  3
  12,20,40,16,2,0,63,192,63,192,192,48,192,48,192,48,192,48,0,48,0,48,15,192,15,192,0,48,0,48,0,48,0,48,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x0034  4
  12,20,40,16,2,0,0,192,0,192,3,192,3,192,12,192,12,192,48,192,48,192,192,192,192,192,192,192,192,192,255,240,255,240,0,192,0,192,0,192,0,192,0,192,0,192,
  // 0x0035  5
  12,20,40,16,2,0,255,240,255,240,192,0,192,0,192,0,192,0,192,0,192,0,255,192,255,192,0,48,0,48,0,48,0,48,0,48,0,48,192,48,192,48,63,192,63,192,
  // 0x0036  6
  12,20,40,16,2,0,15,192,15,192,48,0,48,0,192,0,192,0,192,0,192,0,255,192,255,192,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x0037  7
  12,20,40,16,2,0,255,240,255,240,0,48,0,48,0,48,0,48,0,192,0,192,0,192,0,192,0,192,0,192,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,
  // 0x0038  8
  12,20,40,16,2,0,63,192,63,192,192,48,192,48,192,48,192,48,192,48,192,48,63,192,63,192,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x0039  9
  12,20,40,16,2,0,63,192,63,192,192,48,192,48,192,48,192,48,192,48,192,48,63,240,63,240,0,48,0,48,0,48,0,48,0,48,0,48,0,192,0,192,63,0,63,0,
  // 0x003a  :
  4,14,14,16,6,2,240,240,240,240,0,0,0,0,0,0,240,240,240,240,
  // 0x003b  ;
  4,18,18,16,6,254,240,240,240,240,0,0,0,0,0,0,240,240,48,48,48,48,192,192,
  // 0x003c  <
  10,18,36,16,4,0,0,192,0,192,3,0,3,0,12,0,12,0,48,0,48,0,192,0,192,0,48,0,48,0,12,0,12,0,3,0,3,0,0,192,0,192,
  // 0x003d  =
  12,10,20,16,2,4,255,240,255,240,0,0,0,0,0,0,0,0,0,0,0,0,255,240,255,240,
  // 0x003e  >
  10,18,36,16,2,0,192,0,192,0,48,0,48,0,12,0,12,0,3,0,3,0,0,192,0,192,3,0,3,0,12,0,12,0,48,0,48,0,192,0,192,0,
  // 0x003f  ?
  12,20,40,16,2,0,63,192,63,192,192,48,192,48,192,48,192,48,0,48,0,48,0,192,0,192,3,0,3,0,3,0,3,0,0,0,0,0,3,0,3,0,3,0,3,0,
  // 0x0040  @
  12,20,40,16,2,0,15,192,15,192,48,48,48,48,195,48,195,48,204,240,204,240,204,48,204,48,204,48,204,48,204,48,204,48,195,240,195,240,48,0,48,0,15,240,15,240,
  // 0x0041  A
  12,20,40,16,2,0,15,0,15,0,48,192,48,192,48,192,48,192,192,48,192,48,192,48,192,48,255,240,255,240,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,
  // 0x0042  B
  12,20,40,16,2,0,255,192,255,192,192,48,192,48,192,48,192,48,192,48,192,48,255,192,255,192,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,255,192,255,192,
  // 0x0043  C
  12,20,40,16,2,0,63,192,63,192,192,48,192,48,192,48,192,48,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x0044  D
  12,20,40,16,2,0,255,0,255,0,192,192,192,192,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,192,192,192,255,0,255,0,
  // 0x0045  E
  12,20,40,16,2,0,255,240,255,240,192,0,192,0,192,0,192,0,192,0,192,0,255,192,255,192,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,255,240,255,240,
  // 0x0046  F
  12,20,40,16,2,0,255,240,255,240,192,0,192,0,192,0,192,0,192,0,192,0,255,192,255,192,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,
  // 0x0047  G
  12,20,40,16,2,0,63,192,63,192,192,48,192,48,192,48,192,48,192,0,192,0,192,0,192,0,195,240,195,240,192,48,192,48,192,48,192,48,192,240,192,240,63,48,63,48,
  // 0x0048  H
  12,20,40,16,2,0,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,255,240,255,240,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,
  // 0x0049  I
  10,20,40,16,4,0,255,192,255,192,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,255,192,255,192,
  // 0x004a  J
  14,20,40,16,2,0,15,252,15,252,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,192,192,192,192,192,192,192,192,63,0,63,0,
  // 0x004b  K
  12,20,40,16,2,0,192,48,192,48,192,192,192,192,195,0,195,0,204,0,204,0,240,0,240,0,240,0,240,0,204,0,204,0,195,0,195,0,192,192,192,192,192,48,192,48,
  // 0x004c  L
  12,20,40,16,2,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,255,240,255,240,
  // 0x004d  M
  12,20,40,16,2,0,192,48,192,48,192,48,192,48,240,240,240,240,240,240,240,240,207,48,207,48,207,48,207,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,
  // 0x004e  N
  12,20,40,16,2,0,192,48,192,48,240,48,240,48,240,48,240,48,204,48,204,48,204,48,204,48,195,48,195,48,195,48,195,48,192,240,192,240,192,240,192,240,192,48,192,48,
  // 0x004f  O
  12,20,40,16,2,0,63,192,63,192,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x0050  P
  12,20,40,16,2,0,255,192,255,192,192,48,192,48,192,48,192,48,192,48,192,48,255,192,255,192,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,
  // 0x0051  Q
  14,22,44,16,2,254,63,192,63,192,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,207,48,207,48,240,240,240,240,63,192,63,192,0,60,0,60,
  // 0x0052  R
  12,20,40,16,2,0,255,192,255,192,192,48,192,48,192,48,192,48,192,48,192,48,255,192,255,192,195,0,195,0,192,192,192,192,192,192,192,192,192,48,192,48,192,48,192,48,
  // 0x0053  S
  12,20,40,16,2,0,63,192,63,192,192,48,192,48,192,48,192,48,192,0,192,0,60,0,60,0,3,192,3,192,0,48,0,48,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x0054  T
  14,20,40,16,2,0,255,252,255,252,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,
  // 0x0055  U
  12,20,40,16,2,0,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x0056  V
  14,20,40,16,2,0,192,12,192,12,192,12,192,12,192,12,192,12,48,48,48,48,48,48,48,48,48,48,48,48,12,192,12,192,12,192,12,192,3,0,3,0,3,0,3,0,
  // 0x0057  W
  12,20,40,16,2,0,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,207,48,207,48,207,48,207,48,240,240,240,240,240,240,240,240,192,48,192,48,192,48,192,48,
  // 0x0058  X
  12,20,40,16,2,0,192,48,192,48,192,48,192,48,48,192,48,192,48,192,48,192,15,0,15,0,15,0,15,0,48,192,48,192,48,192,48,192,192,48,192,48,192,48,192,48,
  // 0x0059  Y
  14,20,40,16,2,0,192,12,192,12,192,12,192,12,48,48,48,48,48,48,48,48,12,192,12,192,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,3,0,
  // 0x005a  Z
  12,20,40,16,2,0,255,240,255,240,0,48,0,48,0,48,0,48,0,192,0,192,3,0,3,0,12,0,12,0,48,0,48,0,192,0,192,0,192,0,192,0,255,240,255,240,
  // 0x005b  [
  6,24,24,16,8,254,252,252,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,252,252,
  // 0x005c "\"
  12,20,40,16,2,0,192,0,192,0,192,0,192,0,48,0,48,0,12,0,12,0,12,0,12,0,3,0,3,0,3,0,3,0,0,192,0,192,0,48,0,48,0,48,0,48,
  // 0x005d  ]
  6,24,24,16,2,254,252,252,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,252,252,
  // 0x005e  ^
  12,6,12,16,2,18,15,0,15,0,48,192,48,192,192,48,192,48,
  // 0x005f  _
  14,2,4,16,2,254,255,252,255,252,
  // 0x0060  `
  6,6,6,16,4,20,192,192,48,48,12,12,
  // 0x0061  a
  12,16,32,16,2,0,63,192,63,192,192,48,192,48,0,48,0,48,63,240,63,240,192,48,192,48,192,48,192,48,192,240,192,240,63,48,63,48,
  // 0x0062  b
  12,22,44,16,2,0,192,0,192,0,192,0,192,0,192,0,192,0,207,192,207,192,240,48,240,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,240,48,240,48,207,192,207,192,
  // 0x0063  c
  12,16,32,16,2,0,63,192,63,192,192,48,192,48,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,48,192,48,63,192,63,192,
  // 0x0064  d
  12,22,44,16,2,0,0,48,0,48,0,48,0,48,0,48,0,48,63,48,63,48,192,240,192,240,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,240,192,240,63,48,63,48,
  // 0x0065  e
  12,16,32,16,2,0,63,192,63,192,192,48,192,48,192,48,192,48,255,240,255,240,192,0,192,0,192,0,192,0,192,48,192,48,63,192,63,192,
  // 0x0066  f
  10,22,44,16,2,0,3,192,3,192,12,0,12,0,12,0,12,0,12,0,12,0,255,192,255,192,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,
  // 0x0067  g
  12,22,44,16,2,252,0,48,0,48,63,48,63,48,192,192,192,192,192,192,192,192,192,192,192,192,63,0,63,0,48,0,48,0,63,192,63,192,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x0068  h
  12,22,44,16,2,0,192,0,192,0,192,0,192,0,192,0,192,0,207,192,207,192,240,48,240,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,
  // 0x0069  i
  10,22,44,16,4,0,12,0,12,0,12,0,12,0,0,0,0,0,60,0,60,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,255,192,255,192,
  // 0x006a  j
  10,26,52,16,2,252,0,192,0,192,0,192,0,192,0,0,0,0,3,192,3,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,195,0,195,0,60,0,60,0,
  // 0x006b  k
  12,22,44,16,2,0,192,0,192,0,192,0,192,0,192,0,192,0,192,192,192,192,195,0,195,0,204,0,204,0,240,0,240,0,204,0,204,0,195,0,195,0,192,192,192,192,192,48,192,48,
  // 0x006c  l
  10,22,44,16,4,0,60,0,60,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,255,192,255,192,
  // 0x006d  m
  14,16,32,16,2,0,252,240,252,240,195,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,
  // 0x006e  n
  12,16,32,16,2,0,207,192,207,192,240,48,240,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,
  // 0x006f  o
  12,16,32,16,2,0,63,192,63,192,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,63,192,63,192,
  // 0x0070  p
  12,20,40,16,2,252,207,192,207,192,240,48,240,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,240,48,240,48,207,192,207,192,192,0,192,0,192,0,192,0,
  // 0x0071  q
  12,20,40,16,2,252,63,48,63,48,192,240,192,240,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,240,192,240,63,48,63,48,0,48,0,48,0,48,0,48,
  // 0x0072  r
  12,16,32,16,2,0,207,192,207,192,240,48,240,48,192,48,192,48,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,192,0,
  // 0x0073  s
  12,16,32,16,2,0,63,192,63,192,192,48,192,48,192,0,192,0,60,0,60,0,3,192,3,192,0,48,0,48,192,48,192,48,63,192,63,192,
  // 0x0074  t
  10,20,40,16,2,0,12,0,12,0,12,0,12,0,12,0,12,0,255,192,255,192,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,3,192,3,192,
  // 0x0075  u
  12,16,32,16,2,0,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,240,192,240,63,48,63,48,
  // 0x0076  v
  12,16,32,16,2,0,192,48,192,48,192,48,192,48,192,48,192,48,48,192,48,192,48,192,48,192,48,192,48,192,15,0,15,0,15,0,15,0,
  // 0x0077  w
  14,16,32,16,2,0,192,12,192,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,195,12,60,240,60,240,
  // 0x0078  x
  12,16,32,16,2,0,192,48,192,48,192,48,192,48,48,192,48,192,15,0,15,0,15,0,15,0,48,192,48,192,192,48,192,48,192,48,192,48,
  // 0x0079  y
  12,20,40,16,2,252,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,192,48,48,240,48,240,15,48,15,48,0,48,0,48,0,48,0,48,63,192,63,192,
  // 0x007a  z
  12,16,32,16,2,0,255,240,255,240,0,48,0,48,0,192,0,192,3,0,3,0,12,0,12,0,48,0,48,0,192,0,192,0,255,240,255,240,
  // 0x007b  {
  8,26,26,16,4,252,15,15,48,48,48,48,12,12,12,12,48,48,192,192,48,48,12,12,12,12,48,48,48,48,15,15,
  // 0x007c  |
  2,28,28,16,8,252,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,192,
  // 0x007d  }
  8,26,26,16,4,252,240,240,12,12,12,12,48,48,48,48,12,12,3,3,12,12,48,48,48,48,12,12,12,12,240,240,
  // 0x007e  ~
  14,6,12,16,2,16,60,12,60,12,195,12,195,12,192,240,192,240,
};

#endif // HAS_GRAPHICAL_TFT
