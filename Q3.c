#include <stdio.h>

int main() {
    int A[3][3], B[3][3], C[3][3];
    int r1,c1,r2,c2,i,j,k;

    printf("Enter rows and cols of first matrix: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter rows and cols of second matrix: ");
    scanf("%d%d",&r2,&c2);

    if(c1!=r2) {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }

    printf("Enter elements of first matrix:\n");
    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
            scanf("%d",&A[i][j]);

    printf("Enter elements of second matrix:\n");
    for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
            scanf("%d",&B[i][j]);

    for(i=0;i<r1;i++)
        for(j=0;j<c2;j++){
            C[i][j]=0;
            for(k=0;k<c1;k++)
                C[i][j]+=A[i][k]*B[k][j];
        }

    printf("\nResult Matrix:\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++)
            printf("%4d",C[i][j]);
        printf("\n");
    }
    return 0;
}
