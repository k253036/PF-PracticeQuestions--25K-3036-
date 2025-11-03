#include <stdio.h>

int main() {
    int pass[10], fail[10];
    int i;
    float sumPass = 0, sumFail = 0;
    int countPass = 0, countFail = 0;
    int mark;

    printf("Enter quiz marks for 10 students (-1 to stop):\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &mark);
        if(mark == -1)
            break;

        if(mark >= 5 && mark <= 10) {
            pass[i] = mark;
            sumPass += mark;
            countPass++;
        } else if(mark >= 0 && mark < 5) {
            fail[i] = mark;
            sumFail += mark;
            countFail++;
        }
    }

    printf("\nPassed students marks:\n");
    for(i = 0; i < countPass; i++)
        printf("%d ", pass[i]);
    if(countPass > 0)
        printf("\nAverage of passed students: %.2f\n", sumPass / countPass);

    printf("\nFailed students marks:\n");
    for(i = 0; i < countFail; i++)
        printf("%d ", fail[i]);
    if(countFail > 0)
        printf("\nAverage of failed students: %.2f\n", sumFail / countFail);

    return 0;
}
