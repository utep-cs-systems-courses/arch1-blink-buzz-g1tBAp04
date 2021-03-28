#ifndef switches_included
#define switches_included

#define SW4 BIT3
#define SW3 BIT2
#define SW2 BIT1
#define SW1 BIT0		/* switch1 is p1.3 */
#define SWITCHES (SW1 | SW2 | SW3 | SW4)      	/*switches on board */


void switch_init();
void switch_interrupt_handler();
void switchstates();

extern char switch_a_down, switch_b_down, switch_c_down, switch_d_down, switch_state_changed; /* effectively boolean */

#endif // included
