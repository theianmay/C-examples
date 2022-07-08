#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int fa, fb, fc, fd;
    float avg, a,b,c,d;
   
   //name entry
   printf("Enter a student name: ");
   char name[32];
   fgets(name, 32, stdin);
   name[strlen(name)-1] = '\0';

    //data entry
    printf("Enter quiz grade 1: ");
    scanf("%d", &fa);
    printf("Enter quiz grade 2: ");
    scanf("%d", &fb);
    printf("Enter quiz grade 3: ");
    scanf("%d", &fc);
    printf("Enter quiz grade 4: ");
    scanf("%d", &fd);

    a = (float)fa;
    b = (float)fb;
    c = (float)fc;
    d = (float)fd;

    //calculate average
    avg = (float) ( a + b + c + d ) / ( 4 )  ;

    printf("The average is %g. \n", avg);
    printf("Average Quiz calculation for %s, with grades of %d, %d, %d, and %d is %g. \n", name,fa,fb,fc,fd,avg);
   
 return EXIT_SUCCESS;
}