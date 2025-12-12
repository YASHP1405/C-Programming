/*Reverse on an Array*/
#include <stdio.h>
int main(){
    int a[5], b[5],i;
    for (i=0;i<5;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for (i=5;i>5;i--){
        b[i]=a[i];
    }
        printf("%d\n",b[i]);
    
    return 0;
}
