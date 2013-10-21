#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
DDRB |= 1 << PINB0;
//PORTB ^= 1 << PINB0;
DDRB |= 1 << PINB2;
DDRB &= ~(1 << PINB1);
PORTB |= 1 << PINB1;
int pressed=0;

while (1)
{
PORTB &= ~(1 << PINB2);
PORTB &= ~(1 << PINB0);
if (bit_is_clear(PINB, 1))
{
PORTB |= 1 << PINB2;

 
}
else
{
PORTB |= 1 << PINB0;

}

}
}
