//simple code to calculate bill
#include<stdio.h>
int main()
{
    int price, qty;
    printf("Enter Price :");
    scanf("%d", &price);
    printf("Enter Quantity Purchased :");
    scanf("%d", &qty);
    printf("The Bill is : %d", price*qty);
    return 0;
}