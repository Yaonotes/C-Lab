#include <stdio.h>
#include <stdlib.h>

int sequence(int n) {
  if (n == 1) {
    return 1;
  }
  if (n == 2) {
    return 2;
  }
  int past_one = sequence(n - 1);
  int past_two = sequence(n - 2);
  if (past_one % 3 == 0) {
    past_one = past_one / 3;
  }
  return past_one + past_two;
}

int main() {
  int n;

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  printf("Sequence: ");
  for (int i = 1; i <= n; i++) {
    printf("%d ", sequence(i));
  }
  printf("\n");
  return 0;
}