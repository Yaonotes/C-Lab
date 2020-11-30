#include <stdio.h>
#include <stdlib.h>

int strLength(char s[]) {
  int i = 0;
  while (s[i] != '\0') {
    i++;
  }
  return i;
}

int firstUpper(char s[]) {
  for (int i = 0; i < strLength(s); i++) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      return i;
    }
  }
  return -1;
}

int recursiveFirstUpper(char s[], int pos) {
  if (s[pos] == '\0') {
    return -1;
  }
  if (s[pos] >= 'A' && s[pos] <= 'Z') {
    return pos;
  }
  return recursiveFirstUpper(s, pos + 1);
}

int main() {
  printf("Please enter a string: ");
  char s[1000];
  scanf("%[^\n]s", s);
  printf("Result From Iterative Function: %d\n", firstUpper(s));
  printf("Result From Recursive Function: %d\n", recursiveFirstUpper(s, 0));
}