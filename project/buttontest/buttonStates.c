#include "led.h"
#include "switches.h"
#include "buttonstate.h"
#include <msp430.h>
#include "switches.h"

void switchstates(){
   static int B1 = 0;
   static int B2 = 0;
   static int B3 = 0;
   static int B4 = 0;

   if (!switch_a_down && !switch_b_down &&! switch_c_down && !switch_d_down){
     red_on = 0;
     green_on = 0;}
   
   if(switch_a_down){ 
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
    red_on = 0; green_on = 1; B1 = 0;break;
    }
   }
   
    if(switch_b_down){
  switch(B2){ 
   case 0:
      red_on = 1; green_on = 0; B2++;break;
  case 1:
    red_on = 0; green_on = 1; B2++;break;
  case 2:
    red_on = 1; green_on = 0; B2++;break;
  case 3:
    red_on = 0; green_on = 1; B2++;break;
  case 4:
    red_on = 0; green_on = 0; B2 = 0;break;
    }
   }
   
  if(switch_c_down){
  switch(B3){ 
   case 0:
      red_on = 1; green_on = 1; B3++;break;
  case 1:
    red_on = 0; green_on = 0; B3++;break;
  case 2:
    red_on = 1; green_on = 1; B3++;break;
  case 3:
    red_on = 0; green_on = 0; B3++;break;
  case 4:
    red_on = 0; green_on = 1; B3 = 0;break;
    }
  }
   
 if(switch_d_down){
  switch(B4){ 
   case 0:
      red_on = 1; green_on = 0; B4++;break;
  case 1:
    red_on = 1; green_on = 1; B4++;break;
  case 2:
    red_on = 0; green_on = 1; B4++;break;
  case 3:
    red_on = 1; green_on = 1; B4++;break;
  case 4:
    red_on = 0; green_on = 0; B4 = 0;break;
    }
     }
  led_changed = 1;
  led_update();
}
