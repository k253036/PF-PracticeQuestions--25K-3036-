#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    char ch;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    while(str[i] != '\0') {
        ch = str[i];
        if(ch >= 'a' && ch <= 'z')
            str[i] = ch - 32;
        else if(ch >= 'A' && ch <= 'Z')
            str[i] = ch + 32;
        i++;
    }

    printf("Converted message: %s\n", str);
    return 0;
}
