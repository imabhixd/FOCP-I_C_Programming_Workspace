//avg marks pass or fail
#include<stdio.h>
int main()
{
    float a, b, c, avg;
    printf("Enter Marks 1 :");
    scanf("%f", &a);
    printf("Enter Marks 2 :");
    scanf("%f", &b);
    printf("Enter Marks 3 :");
    scanf("%f", &c);
    avg = (a+b+c)/3;
    printf("Average is : %.2f\n", avg);
    if (avg > 40) {
        printf("Pass");
    }
    else{
        printf("Fail");
    }
    return 0;
}