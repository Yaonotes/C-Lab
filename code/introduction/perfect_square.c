#include <stdbool.h>
#include <stdio.h>

bool isPerfectSquare(int num) {
  for (int i = 2; i < num; i++) {
    if (i * i == num) {
      return true;
    }
  }
  return false;
}

int main() {
  bool primeCheck;

  int num;

  printf("Please enter an integer to check if it is perfect square number: ");
  scanf("%d", &num);
  primeCheck = isPerfectSquare(num);

  if (primeCheck) {
    printf("Result string: %s\n", "TRUE");
  } else {
    printf("Result string: %s\n", "FALSE");
  }
  return 0;
}