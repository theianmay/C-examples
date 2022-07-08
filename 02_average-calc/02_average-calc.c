#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int fa, fb, fc, fd;
    float avg, a,b,c,d;

    //data entry
    printf("Enter four numbers to get the average: ");
    scanf("%d %d %d %d", &fa, &fb, &fc, &fd);

    a = (float)fa;
    b = (float)fb;
    c = (float)fc;
    d = (float)fd;

    //calculate average
    avg = (float) ( a + b + c + d ) / ( 4 )  ;

    printf("The average is %g \n", avg);

 return EXIT_SUCCESS;
}