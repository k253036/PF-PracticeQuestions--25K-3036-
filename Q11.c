#include <stdio.h>

int main() {
    char str[100];
    int i = 0, vowels = 0, consonants = 0;
    char ch;

    printf("Enter a word: ");
    scanf("%[^\n]", str);

    while(str[i] != '\0') {
        ch = str[i];
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if(ch >= 'A' && ch <= 'Z')
                ch += 32; // convert to lowercase
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
            else
                consonants++;
        }
        i++;
    }

    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}
