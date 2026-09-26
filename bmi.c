//bmi calculator 
#include<stdio.h>
int main()
{
    float weight, height;
    printf("Enter Weight in Kg :");
    scanf("%f", &weight);
    printf("Enter Height in m :");
    scanf("%f", &height);
    printf("BMI : %.2f", (weight)/(height*height));
    return 0;
}