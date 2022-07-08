#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  printf("Enter your birthday month: ");
  char bday[32];
  fgets(bday, 32, stdin);
  bday[strlen(bday)-1] = '\0';
  printf("Happy Birthday in the month of %s!\n", bday);
 return EXIT_SUCCESS;
}