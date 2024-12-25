//Write an AVR C program to send values 00-FF to PORTB
#include <avr/io.h>
int main (void)
{
  unsigned char z;
  DDRB = OxFF;
  for(z=0; z<=255; z++)
  return 0;
}
