//to accept the following details using scanf
#include<stdio.h>
int main()
{
    int age;
    float height;
    char grade;
    printf("Enter Age :");
    scanf("%d", &age);
    printf("Enter Height :");
    scanf("%f", &height);
    printf("Enter Grade :");
    scanf(" %c", &grade);
    printf("Age : %d \nHeight : %f Metres \nGrade : %c", age, height, grade);
    return 0;
}