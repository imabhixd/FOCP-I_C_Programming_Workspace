//to find the greatest number 
#include<stdio.h>
int main()
{
    int a, b, c, condition;
    printf("Enter num :");
    scanf("%d", &a);
    if (a < 10 || a > 50){
        printf("This number is not between 10 and 50");
    }
    else{
        printf("This number is between 10 and 50");
    }
}