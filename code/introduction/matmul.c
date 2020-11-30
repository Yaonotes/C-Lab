#include <stdio.h>

int calculate_row_column(int row, int column, int a[][3], int b[][3]) {
  int total = 0;
  for (int i = 0; i < 3; i++) {
    total += a[row][i] * b[i][column];
  }
  return total;
}

void matmul(int a[][3], int b[][3]) {
  int result[3][3];
  for (int row = 0; row < 3; row++) {
    for (int column = 0; column < 3; column++) {
      result[row][column] = calculate_row_column(row, column, a, b);
    }
  }
  // now prints the result
  for (int row = 0; row < 3; row++) {
    printf("Row %d of the result: ", row);
    for (int column = 0; column < 3; column++) {
      printf("%d ", result[row][column]);
    }
    printf("\n");
  }
}

int main() {
  int mat_a[3][3];
  int mat_b[3][3];
  for (int row = 0; row < 3; row++) {
    printf("Please enter row %d matrix A: ", row);
    for (int column = 0; column < 3; column++) {
      scanf("%d", &mat_a[row][column]);
    }
  }
  for (int row = 0; row < 3; row++) {
    printf("Please enter row %d matrix B: ", row);
    for (int column = 0; column < 3; column++) {
      scanf("%d", &mat_b[row][column]);
    }
  }
  matmul(mat_a, mat_b);
  return 0;
}