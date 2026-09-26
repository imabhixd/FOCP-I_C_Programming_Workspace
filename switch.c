//calculator using switch case
#include<stdio.h>
int main()
{
    float a, b;
    int choice;
    printf("Enter num1 :");
    scanf("%f", &a);
    printf("Enter num2 :");
    scanf("%f", &b);
    printf(" 1 --> Add\n 2 --> Sub\n 3 --> Multiply\n 4 --> Divide\n 5 --> Rem\n");
    printf("Enter Choice :");
    scanf("%d", &choice);
    switch(choice)
    {
    case 1:
    printf("Result %f", a+b);
    break;
    case 2:
    printf("Result %f", a-b);
    break;
    case 3:
    printf("Result %f", a*b);
    break;
    case 4:
    printf("Result %f", a/b);
    break;
    default:
    printf("Invalid Choice");
    }
    return 0;
}