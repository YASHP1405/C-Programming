/* 7. Count positive and negative numbers */
#include<stdio.h>
int main(){
    int a[5],i,positive=0,negative=0;
    for(i=0;i<5;i++){
        printf("Enter 5 integers:\n");
        scanf("%d",&a[i]);
        if(a[i]>=0){
            positive++;
            printf("Positive numbers: %d\n",positive);
        }
        else{
            negative++;
            printf("Negative numbers: %d\n",negative);
    }
}
return 0;
}