//simple intrest calculator 
#include<stdio.h>
int main()
{
    float P, R, T, SI;
    printf("Enter Principal Amount :");
    scanf("%f", &P);
    printf("Enter Rate of Intrest :");
    scanf("%f", &R);
    printf("Enter Time Period :");
    scanf("%f", &T);
    SI = (P*R*T)/100;
    printf("%f", SI);
    return 0;
}