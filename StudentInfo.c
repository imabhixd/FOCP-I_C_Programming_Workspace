//Code to store and display Student Information
#include<stdio.h>
int main()
{
    int Student_ID, age;
    float Percentage;
    char Grade;
    printf("Enter Student ID :");
    scanf("%d", &Student_ID);
    printf("Enter Age :");
    scanf("%d", &age);
    printf("Enter Percentage :");
    scanf("%f", &Percentage);
    printf("Enter Grade :");
    scanf(" %c", &Grade);
    printf("ID : %d \nAge : %d \nPercentage : %f \nGrade : %c", Student_ID, age, Percentage, Grade);
    return 0;

}