#include <stdio.h>

int main() {
    char str[100];

    printf("Enter characters (alphabets will stop input): ");
    scanf("%[^A-Za-z]", str);

    printf("Non-alphabetic characters entered: %s\n", str);
    return 0;
}
