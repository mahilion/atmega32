#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
DDRB |= 1 << PINB0; //data direction for pin b0 to make it as output
while (1)
{
PORTB ^= 1 << PINB0; //on and off 
_delay_ms(100);  //add a small delay
}
}
