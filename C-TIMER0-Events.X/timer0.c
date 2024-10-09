#include <xc.h>
#include "timer0.h"

/* Config Timer0 */
void TIMER0_Initialize(void)
{
    /* T0CKI signal is mapped to RA4 */
	T0CKIPPS = 0x04;
         
    /* Timer0 output is on RF3 */
    RF3PPS=0x39;
    
    /* Timer0 disabled; 8-bit; no postscaler */
    T0CON0 = 0x00; 
    
    /* When TMR0L matches TMR0H, TMR0L resets */
    TMR0H = 0x0A;
    	
    /* T0CKI (non inverted: rising edge) as clock source; counter not synchronized; prescaler 1:1 */
	T0CON1 = 0x10;   
	
    /* Timer0 enabled */
	T0CON0 |= 0x80; 
}