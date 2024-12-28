//Write an AVR C programming to send hex values for ASCII characters of 0,1,2,3,4,A,B,C and D to portB.

#include<avr/io.h>
int main (void)
{
  unsigned char mylist[] = "012345ABCD";
  unsigned char z;
  DDrB = 0xFF;
  for(z=0; z<10; z++)
  PORTB = mylist[z];
while(1);
return 0;
}
