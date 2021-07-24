#ifndef LCD_H
#define LCD_H

#ifndef F_CPU
#define F_CPU 16000000UL // 16 MHz clock speed
#endif 

#include <util/delay.h>			/* Include Delay header file */
#include <stdint.h>
#include <avr/io.h>			/* Include AVR std. library file */

// LCD interface 
//   make sure that the LCD RW pin is connected to GND
#define lcd_D7_port     PORTD                   // Replace the definitions with the pins that you are using
#define lcd_D7_bit      PORTD7
#define lcd_D7_ddr      DDRD


// LCD module information
// Starting cursor location for line one and line two

// LCD instructions
// Useful commands (hint: refer to page 6 of the datasheet)



// Function Prototypes
// Useful functions could be writing to the screen, clearing screen, initialization, etc.

#endif