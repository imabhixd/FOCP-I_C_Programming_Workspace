//to swap two numbers
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter first num :");
    scanf("%d", &a);
    printf("Enter second num :");
    scanf("%d", &b);
    printf("Before Swapping : %d, %d", a, b);
    c = a;
    a = b;
    b = c;
    printf("\nAfter Swapping : %d, %d", a, b);
    return 0;
}