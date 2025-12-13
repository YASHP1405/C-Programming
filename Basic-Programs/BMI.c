/* 
10. BMI Calculator – Enter your height and weight to calculate your Body Mass Index. */
#include<stdio.h>
int main(){
    float weight, height, bmi;
    printf("Enter weight in kg: ");
    scanf("%f", &weight);
    printf("Enter height in meters: ");
    scanf("%f", &height);
    bmi = weight / (height * height);
    printf("Your BMI is: %.2f\n", bmi);
    return 0;
}