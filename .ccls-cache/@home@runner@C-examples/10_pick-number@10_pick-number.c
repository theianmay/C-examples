#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void pickNumbers(int);

int main () {
   int numCnt = 6;
   pickNumbers(numCnt);
   return 0;
}

void pickNumbers(int num) {
  srand(time(0));
  int select = 0;
  for (int i = 0; i < num; ++i) {
     select = random()%52;
     printf("%d, ", select);
  }
}