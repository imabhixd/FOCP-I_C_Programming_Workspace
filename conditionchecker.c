#include<stdio.h>
int main()
{
    int x = 5, y = 10;
    if (x>0)
        if (y > 15)
            printf("Both conditions are true");
    else //dangling else; else is always associated with the nearest if
        printf("X is not positive");
    return 0;
}