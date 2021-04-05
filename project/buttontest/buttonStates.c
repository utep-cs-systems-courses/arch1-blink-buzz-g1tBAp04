#include "led.h"
#include "switches.h"
#include "buttonstate.h"
#include <msp430.h>

void switchstates(){
  static int B1 = 0;
  switch(B1){ 
   case 0:
      red_on = 1; green_on = 0; B1++;break;
  case 1:
    red_on = 1; green_on = 1; B1++;break;
  case 2:
    red_on = 0; green_on = 0; B1++;break;
  case 3:
    red_on = 1; green_on = 1; B1++;break;
  case 4:
    red_on = 0; green_on = 0; B1 = 0;break;
  }
  led_changed = 1;
  led_update();
}
