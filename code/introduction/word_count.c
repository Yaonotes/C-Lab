#include <stdio.h>

int strLength(char s[]) {
  int i = 0;
  while (s[i] != '\0') i++;
  return i;
}

int count_character(char c, char s[]) {
  int total = 0;
  for (int i = 0; i < strLength(s); i++) {
    if (s[i] == c) {
      total++;
    }
  }
  return total;
}

void word_count(char s[]) {
  for (char letter = 'a'; letter <= 'z'; letter++) {
    printf("%c\t %d \n", letter, count_character(letter, s));
  }
}

int main() {
  char filepath[100];
  char filecontent[10000];
  FILE *fp;
  printf("Please enter a path to your file: ");
  scanf("%[^\n]s", filepath);
  if ((fp = fopen(filepath, "r")) == NULL) {
    printf("Error! opening file");

    // Program exits if the file pointer returns NULL.
    return 1;
  }
  fread(filecontent, 10000, 1, fp);
  fclose(fp);
  word_count(filecontent);

  return 0;
}