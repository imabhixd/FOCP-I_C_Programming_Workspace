//calculator
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter num1 :");
    scanf("%d", &a);
    printf("Enter num2 :");
    scanf("%d", &b);
    printf("The First num is : %d \nThe Second num is : %d", a, b);
    printf("\nSum is : %d", a+b);
    printf("\nDifference is : %d", a-b);
    printf("\nProduct is : %d", a*b);
    printf("\nQuotient is : %d", a/b);
}