#include <stdio.h>

int main() {
    int arr[10], search, i, count = 0;

    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    printf("Enter number to search: ");
    scanf("%d", &search);

    for(i = 0; i < 10; i++)
        if(arr[i] == search)
            count++;

    if(count > 0)
        printf("The number %d occurred %d time(s).\n", search, count);
    else
        printf("Number not found.\n");

    return 0;
}
