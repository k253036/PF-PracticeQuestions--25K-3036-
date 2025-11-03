#include <stdio.h>

int main() {
    int arr[3][3][3];
    int i,j,k,layerSum,total=0;

    printf("Enter elements of 3x3x3 array:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            for(k=0;k<3;k++)
                scanf("%d",&arr[i][j][k]);

    for(i=0;i<3;i++){
        layerSum=0;
        for(j=0;j<3;j++)
            for(k=0;k<3;k++)
                layerSum+=arr[i][j][k];

        printf("Total of Layer %d = %d\n", i+1, layerSum);
        total+=layerSum;
    }

    printf("\nOverall total of all elements = %d\n", total);
    printf("Average value = %.2f\n", (float)total/27);
    return 0;
}
