#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
DDRB |= 1 << PINB0;  //data direction to make pinB0 as output



while (1)
{
PORTB ^= 1 << PINB0;  //on and off

_delay_ms(1000); //add 1 second delay
}
}

