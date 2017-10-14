/**
 *  naken_asm assembler.
 *  Author: Michael Kohn
 *   Email: mike@mikekohn.net
 *     Web: http://www.mikekohn.net/
 * License: GPLv3
 *
 * Copyright 2010-2017 by Michael Kohn
 *
 */

#ifndef _ASM_AVR8_H
#define _ASM_AVR8_H

#include "common/assembler.h"

int parse_instruction_avr8(struct _asm_context *asm_context, char *instr);

#endif


