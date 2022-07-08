#include <stdio.h>

unsigned int sumInts(unsigned int, unsigned int);

int main () {
 unsigned int x = 128;
 unsigned int y = 4294967;
 unsigned int z = sumInts(x,y);
 printf("Sum is %u\n", z); 
 return 0;
}

unsigned int sumInts(unsigned int val1, unsigned int val2) {
  unsigned int valsum = val1 + val2;
  return valsum;
}