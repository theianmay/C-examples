#include <stdio.h>

#define COLS 5
#define ROWS 7
static int data[ROWS][COLS];
void init_matrix(int);

int main () {
   init_matrix(4);
  // Print results
  for (int i = 0; i < COLS; i++) {
    for (int j = 0; j < ROWS; j++) {
      printf ("%d", data[i][j]);
      printf (" ");
    }
    printf("\n");

return 0;
}
}

void init_matrix(int x) {
  for (int i = 0; i < COLS; i++) {
    for (int j = 0; j < ROWS; j++) {
      data[i][j] = x;
    }
  }
}