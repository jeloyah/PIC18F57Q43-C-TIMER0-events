
#include <xc.h>
#include "main.h"
#include "clock.h"
#include "gpio.h"
#include "timer0.h"

void main(void) {
    
    /* System Clock Initialization */
	CLOCK_Initialize();
    
    /* Config PortA */
    PortA_Initialize();
    
    /* Config PortB */
    PortB_Initialize();

    /* Config PortC */
    PortC_Initialize();
    
    /* Config PortD */
    PortD_Initialize();
    
    /* Config PortE */
    PortE_Initialize();
    
    /* Config PortF */
    PortF_Initialize();
    
    /* Config TIMER0 */
    TIMER0_Initialize();
       
    /* infinite loop */
    while(1)
    {
       
        /* Wait for TMR0IF = 1 */
        while ((PIR3 & 0x80) != 0x80)
          ;
        
        /* Clear TMR0IF bit */
        PIR3 &= 0x7F;
        
        /* Toggle LED in RF3 */
        //LATF ^= 0x08;
       
     } /* while */
        
    
    return;
} /* main*/
