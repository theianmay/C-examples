#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


struct Storage
{
  char name[32];
  float num1;
  float num2;
};

 int main(){
    char name[32];
    float num1;
    float num2;
    float sum;

    struct Storage s1 = {"NAME", 100, 200};

  printf("Hello %s, your numbers are %.2f and %.2f.\n", s1.name,s1.num1,s1.num2);
  
  sum = (float) (s1.num1 + s1.num2);

  printf("The sum of your numbers is: %.2f.",sum);

  return 0;
}