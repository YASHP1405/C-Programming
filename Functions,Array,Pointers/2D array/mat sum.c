#include<stdio.h>
int main(){
    int a[3][2];
    int i,j;
    for (i=0;i<3;i++){
        for (j=0;j<2;j++){
            printf("Enter the element in array :");
            scanf("%d",&a[i][j]);
        }
    }
    printf("The elements in the array are:\n");

    int sumr = 0;
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%d ",a[i][j]);
            sumr = sumr + a[i][j];
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("the sum of matrix %d is %d\n", i, sumr);
        }
        printf("\n");
    }
    return 0;
}