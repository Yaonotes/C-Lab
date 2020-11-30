#include <stdio.h>

int exponent(int base, int power) {
  if (power == 0) {
    return 1;
  } else {
    return base * exponent(base, power - 1);
  }
}

int main() {
  int base;
  int power;

  printf("Please enter the base: ");
  scanf("%d", &base);
  printf("Please enter the power: ");
  scanf("%d", &power);
  printf("The result is: %d\n", exponent(base, power));
  return 0;
}