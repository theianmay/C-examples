#include <stdio.h>
int main () {
   int count=0;
   int guess = 0;
   for( count = 0 ; count <5; count++ ) {
    printf("Enter square of 4: ");
   scanf("%d", &guess);
    if (guess==16) {
        printf ("Excellent. You earned an A\n");
        break;
    }
    if (count == 4 ) {
        printf("Sorry. You ran out of time. The solution is 16.\n");
        break;
    }
   }
  return 0;
}
