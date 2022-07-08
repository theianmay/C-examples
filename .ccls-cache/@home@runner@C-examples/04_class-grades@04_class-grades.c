#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void str_uppercase(char* str, int len) {
  int i;
  for (i = 0; i < len; ++i) {
    str[i] = toupper(str[i]);
  }
} 

int main(){
    int fa, fb, fc, fd;
    int sum_a=0,sum_b=0,sum_c=0,sum_d=0;
    int n=0;
    float avg, a,b,c,d;
    float sum_a_avg;
    float sum_b_avg;
    float sum_c_avg;
    float sum_d_avg;

    while (1){

     //name entry
     printf("Enter a student name: ");
     char name[32];
     char output[115];
     scanf("%s", name);
     name[strlen(name)] = '\0';
     if (strcmp(name,"Unknown")==0){break;}
     
     //data entry
     printf("Enter quiz grade 1: ");
     scanf("%d", &fa);
     printf("Enter quiz grade 2: ");
     scanf("%d", &fb);
     printf("Enter quiz grade 3: ");
     scanf("%d", &fc);
     printf("Enter quiz grade 4: ");
     scanf("%d", &fd);

     sum_a=sum_a+fa;
     sum_b=sum_b+fb;
     sum_c=sum_c+fc;
     sum_d=sum_d+fd;

     n=n+1;

     a = (float)fa;
     b = (float)fb;
     c = (float)fc;
     d = (float)fd;

     //calculate average
     avg = (float) ( a + b + c + d ) / ( 4 )  ;

     str_uppercase(name, strlen(name));

     sprintf(output,"Average Quiz calculation for %s, with grades of %d, %d, %d, and %d is %g.\n", name,fa,fb,fc,fd,avg);
     printf("%s", output);
     printf("STRLEN = %lu \n", strlen(output));
    }

    sum_a_avg = (float) (sum_a ) / ( n )  ;
    sum_b_avg = (float) (sum_b ) / ( n )  ;
    sum_c_avg = (float) (sum_c ) / ( n )  ;
    sum_d_avg = (float) (sum_d ) / ( n )  ;

    printf("Thanks for using the program.\n");
    printf("The average quiz scores for the class are:\n");
    printf("Quiz 1: %g \n", sum_a_avg);
    printf("Quiz 2: %g \n", sum_b_avg);
    printf("Quiz 3: %g \n", sum_c_avg);
    printf("Quiz 4: %g \n", sum_d_avg);
    printf("Bye.");

    return EXIT_SUCCESS;
}