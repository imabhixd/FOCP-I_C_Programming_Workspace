//student profile generator
#include<stdio.h>
int main(){
    char Name[20];
    char Grade;
    int Age;
    float Height;
    printf("Enter Name :");
    scanf("%19s", &Name);
    printf("Enter Age : ");
    scanf("%d", &Age);
    printf("Enter Height :");
    scanf("%f", &Height);
    printf("Enter Grade :");
    scanf(" %c", &Grade);
    printf("Name : %s \nAge : %d \nHeight : %.2f \nGrade : %c", Name, Age, Height, Grade);
    return 0;
}