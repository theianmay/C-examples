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
    float productS1;
    float halfS2;

    struct Storage s1 = {"Bob", 2, 3};
    struct Storage s2 = {"Alice", 4, 5};

  printf("Hello %s, your numbers are %.2f and %.2f.\n", s1.name,s1.num1,s1.num2);
  printf("Hello %s, your numbers are %.2f and %.2f.\n", s2.name,s2.num1,s2.num2);
  
  productS1 = (float) (s1.num1 * s1.num2);

  halfS2 = (float) ((s2.num1 + s2.num2) / 2);

  printf("%s, the product of your numbers is: %.2f.\n",s1.name,productS1);
  printf("%s, half of the sum of your numbers is: %.2f.",s2.name,halfS2);

  return 0;
}