/*            15. Remove duplicates from an array */

#include <stdio.h>
int main(){
    int i,j,a[5];
    for(i=0;i<5;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<4;i++){
        for(j=i+1;j<=4;j++){
            if(a[i] == a[j])
            {
                a[j] = 0;
            }
        }
    }
    printf("Array after removing duplicates: ");
    for(i=0;i<5;i++){
            printf("%d ",a[i]);
        
    }
    return 0;
}