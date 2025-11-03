#include <stdio.h>

void inputMatrix(int a[3][3]) {
    printf("Enter elements of 3x3 matrix:\n");
    for (int i=0;i<3;i++)
        for (int j=0;j<3;j++)
            scanf("%d", &a[i][j]);
}

void displayMatrix(float a[3][3]) {
    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++)
            printf("%8.2f", a[i][j]);
        printf("\n");
    }
}

int determinant(int a[3][3]) {
    int det;
    det = a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1])
        - a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0])
        + a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);
    return det;
}

void transpose(int a[3][3], int t[3][3]) {
    for (int i=0;i<3;i++)
        for (int j=0;j<3;j++)
            t[j][i] = a[i][j];
}

void cofactor(int a[3][3], int c[3][3]) {
    c[0][0]= (a[1][1]*a[2][2]-a[1][2]*a[2][1]);
    c[0][1]=-(a[1][0]*a[2][2]-a[1][2]*a[2][0]);
    c[0][2]= (a[1][0]*a[2][1]-a[1][1]*a[2][0]);

    c[1][0]=-(a[0][1]*a[2][2]-a[0][2]*a[2][1]);
    c[1][1]= (a[0][0]*a[2][2]-a[0][2]*a[2][0]);
    c[1][2]=-(a[0][0]*a[2][1]-a[0][1]*a[2][0]);

    c[2][0]= (a[0][1]*a[1][2]-a[0][2]*a[1][1]);
    c[2][1]=-(a[0][0]*a[1][2]-a[0][2]*a[1][0]);
    c[2][2]= (a[0][0]*a[1][1]-a[0][1]*a[1][0]);
}

int main() {
    int a[3][3], t[3][3], cof[3][3];
    float adj[3][3], inv[3][3];
    int det;

    inputMatrix(a);

    printf("\nMatrix:\n");
    for(int i=0;i<3;i++){ for(int j=0;j<3;j++) printf("%4d",a[i][j]); printf("\n"); }

    det = determinant(a);
    printf("\nDeterminant = %d\n", det);

    transpose(a,t);
    printf("\nTranspose:\n");
    for(int i=0;i<3;i++){ for(int j=0;j<3;j++) printf("%4d",t[i][j]); printf("\n"); }

    cofactor(a,cof);
    printf("\nCofactor Matrix:\n");
    for(int i=0;i<3;i++){ for(int j=0;j<3;j++) printf("%4d",cof[i][j]); printf("\n"); }

    // Adjoint = transpose of cofactor
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            adj[i][j] = cof[j][i];

    printf("\nAdjoint:\n");
    displayMatrix(adj);

    if(det==0)
        printf("\nInverse not possible (Determinant is 0)\n");
    else {
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                inv[i][j] = adj[i][j]/det;

        printf("\nInverse:\n");
        displayMatrix(inv);
    }
    return 0;
}
