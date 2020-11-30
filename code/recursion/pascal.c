#include <stdio.h>

int pascal(int row, int column) {
  if (column == -1) {
    return 0;
  }
  if (row == 0 && column == 0) {
    return 1;
  }
  if (column > row) {
    return 0;
  }
  return pascal(row - 1, column) + pascal(row - 1, column - 1);
}

void printPascal(int n) {
  for (int row = 0; row < n; row++) {
    printf("Row %d: ", row);
    for (int column = 0; column < row; column++) {
        printf("%d ", pascal(row, column));
    }
    printf("\n");
  }
}

int main() {
  int row;
  int column;

  printf("Please enter the row: ");
  scanf("%d", &row);
  printf("Please enter the column: ");
  scanf("%d", &column);
  printf("The result is: %d\n", pascal(row, column));

  return 0;
}