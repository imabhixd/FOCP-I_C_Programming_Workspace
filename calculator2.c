//calculator
#include<math.h>
#include<stdio.h>
int main()
{
    float a, b;
    int choice;
    float remainder = fmodf(a, b);
    printf("Enter num1 :");
    scanf("%f", &a);
    printf("Enter num2 :");
    scanf("%f", &b);
    printf("\t1 --> Add\n 2 --> Sub\n 3 --> Multiply\n 4 --> Divide\n 5 --> Rem\n");
    printf("Enter Choice :");
    scanf("%d", &choice);
    if (choice == 1)
        {
            printf("Result %f", a+b);
        }
    else
        {
            if (choice == 2)
                {
                    printf("Result %f", a-b);
                }
            else
            {
                if (choice == 3)
                {
                    printf("Result %f", a*b);
                }
                else
                {
                    if (choice == 4)
                    {
                        printf("Result %f", a/b);
                    }
                    else
                    {
                        if (choice == 5)
                        {
                            printf("%f", remainder);
                        }
                        else{
                            printf("Invalid Choice");
                        }
                    }
                }
            }
        }
}