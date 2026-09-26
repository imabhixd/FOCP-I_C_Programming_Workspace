//to calculate quotient and remainder
#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the Dividend :");
    scanf("%d", &a);
    printf("Enter the Divisor :");
    scanf("%d", &b);
    printf("The Quotient is : %d", a/b);
    printf("\nThe Remainder is : %d", a%b);
    return 0;
}