#include <stdio.h>

int main() {
    int arr[3][3][3];
    int i,j,k,identical;

    printf("Enter elements for 3x3x3 matrix:\n");
    for(i=0;i<3;i++){
        printf("\n--- Layer %d ---\n", i+1);
        for(j=0;j<3;j++)
            for(k=0;k<3;k++)
                scanf("%d",&arr[i][j][k]);
    }

    printf("\nLayer Comparison Results:\n");
    for(i=0;i<3;i++){
        for(j=i+1;j<3;j++){
            identical=1;
            for(int r=0;r<3;r++){
                for(int c=0;c<3;c++){
                    if(arr[i][r][c]!=arr[j][r][c]){
                        identical=0;
                        break;
                    }
                }
                if(!identical) break;
            }
            if(identical)
                printf("Layer %d and Layer %d are IDENTICAL.\n", i+1, j+1);
            else
                printf("Layer %d and Layer %d are DIFFERENT.\n", i+1, j+1);
        }
    }
    return 0;
}
