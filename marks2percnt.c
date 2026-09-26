//to calculate total marks and percentage from marks entered of 5 subjects 
#include<stdio.h>
int main()
{
    int m1, m2, m3, m4, m5;
    float prct;
    float total;
    printf("Enter marks of sub1 :");
    scanf("%d", &m1);
    printf("Enter marks of sub2 :");
    scanf("%d", &m2);
    printf("Enter marks of sub3 :");
    scanf("%d", &m3);
    printf("Enter marks of sub4 :");
    scanf("%d", &m4);
    printf("Enter marks of sub5 :");
    scanf("%d", &m5);
    printf("The Total Marks Are : %d", m1+m2+m3+m4+m5);
    total = m1+m2+m3+m4+m5;
    prct = total/5;
    printf("\nThe Percentage is : %.1f", prct);
    return 0;
}
