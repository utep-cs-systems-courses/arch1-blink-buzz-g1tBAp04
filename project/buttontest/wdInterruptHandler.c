#include <msp430.h>
#include "buttonstate.h"

void
__interrupt_vec(WDT_VECTOR) WDT(){	/* 250 interrupts/sec */
  static char blink_count = 0;
  if (++blink_count == 125) {
    switchstates();
    blink_count = 0;
  }
}
