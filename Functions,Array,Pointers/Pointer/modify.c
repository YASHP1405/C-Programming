#include<stdio.h>
void modifyvalue(int *x){
    *x = *x *2;
}
int main(){
    int num =5;
    modifyvalue(&num);
    printf("Modified value: %d", num);
    return 0;
}