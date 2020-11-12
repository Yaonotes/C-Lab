#include <stdio.h>
const int MAX_LENGTH = 1000;

int strLength(char s[])
{
    int i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}

void reverse(char s[])
{
    int strlen = strLength(s);
    int i = 0;
    char reversedString[strlen];
    while (s[i] != '\0')
    {
        reversedString[strlen - i - 1] = s[i];
        i++;
    }
    printf("Result string: %s\n", reversedString);
}

int main()
{
    char s[MAX_LENGTH + 1];
    int length;

    printf("Please enter a string: ");
    scanf("%[^\n]s", s);
    reverse(s);
    return 0;
}