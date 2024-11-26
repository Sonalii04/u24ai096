//Write a C program to find the product of 2 matrics using pointer and using dynamic memory alocation.

#include<stdio.h>

int main() {

    int n;
    printf("Enter dimension (n*n) : ");
    scanf("%d", &n);
    
    int n1[n][n], n2[n][n], n3[n][n], i, j, k;
    
    printf("Enter elements of first array : \n");
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            scanf("%d", &n1[i][j]);
        }
    }
    
    printf("Enter elements of second array : \n");
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            scanf("%d", &n2[i][j]);
        }
    }

    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            n3[i][j]=0;
            for(k=0; k<n; k++) {
                n3[i][j]+=n1[i][k]*n2[k][j];
            }
        }
    }

    printf("Multiply of two array elements is : \n");
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            printf("%d \t",n3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
