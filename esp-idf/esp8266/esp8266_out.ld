/* Copyright (C) 1991-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
/* This header is separate from features.h so that the compiler can
   include it implicitly at the start of every compilation.  It must
   not itself include <features.h> or any other header that includes
   <features.h> because the implicit include comes before any feature
   test macros that may be defined in a source file before it first
   explicitly includes a system header.  GCC knows the name of this
   header in order to preinclude it.  */
/* glibc's intent is to support the IEC 559 math functionality, real
   and complex.  If the GCC (4.9 and later) predefined macros
   specifying compiler intent are available, use them to determine
   whether the overall intent is to support these features; otherwise,
   presume an older compiler has intent to support these features and
   define these macros by default.  */
/* wchar_t uses Unicode 10.0.0.  Version 10.0 of the Unicode Standard is
   synchronized with ISO/IEC 10646:2017, fifth edition, plus
   the following additions from Amendment 1 to the fifth edition:
   - 56 emoji characters
   - 285 hentaigana
   - 3 additional Zanabazar Square characters */
/* ESP8266 Linker Script Memory Layout

   This file describes the memory layout (memory blocks).

   esp8266.project.ld contains output sections to link compiler output
   into these memory blocks.

   ***

   This linker script is passed through the C preprocessor to include
   configuration options.

   Please use preprocessor features sparingly! Restrict
   to simple macros with numeric values, and/or #if/#endif blocks.
*/
/*
 * Automatically generated file. DO NOT EDIT.
 * Espressif IoT Development Framework (ESP-IDF) Configuration Header
 */
       
/* List of deprecated options */
MEMORY
{
  /* All these values assume the flash cache is on, and have the blocks this uses subtracted from the length
  of the various regions. */
  /* IRAM for cpu. The length is due to the cache mode which is able to be set half or full mode. */
  iram0_0_seg (RX) : org = 0x40100000, len = 0xC000
  /* Even though the segment name is iram, it is actually mapped to flash and mapped constant data */
  iram0_2_seg (RX) : org = 0x40200010 + (0x10000 & (0x100000 - 1)),
                                     len = 0xf0000 - 0x10
  /*
    (0x18 offset above is a convenience for the app binary image generation. The .bin file which is flashed
    to the chip has a 0x10 byte file header. Setting this offset makes it simple to meet the flash cache.)
  */
  /* Length of this section is 96KB */
  dram0_0_seg (RW) : org = 0x3FFE8000, len = 0x18000
  /* (See iram0_2_seg for meaning of 0x10 offset in the above.) */
  /* RTC memory. Persists over deep sleep */
  rtc_data_seg(RW) : org = 0x60001200, len = 0x200
}
