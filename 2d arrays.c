#include <stdio.h>
int main()
{
    int arr[5][3];
    int r, c, sum = 0;
    printf("Enter Vals :\n");
    for(r = 0; r <5; r++)
    {
        printf("Enter value for row %d :", r);
        for(c = 0; c < 3; c++)
        {
            scanf("%d", &arr[r][c]);
        }
    }
    printf("The array is :");
    for(r = 0; r < 5; r++)
    {   printf("\n");
        for(c = 0; c <3; c++)
        {
            printf("%d \t", arr[r][c]);
        }
    }
    //to print sum of all elements of matrix
    for(r = 0; r < 5; r++)
    {   printf("\n");
        for(c = 0; c <3; c++)
        {
            sum = sum + arr[r][c];
        }
    }
    printf("Sum of all elements is %d", sum);
    //rowise sum
    for(r = 0; r < 5; r++)
    {   
        int s = 0;
        printf("\n");
        for(c = 0; c <3; c++)
        {
            s = s + arr[r][c];
        }
        printf("The sum of row %d : %d", r, s);
    }
}