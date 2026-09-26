#include <stdio.h>

int main()
{
    char productID[50];
    float price;
    int quantity;
    float discountPercentage;
    float subtotal;
    float discountAmount;
    float finalAmount;

    printf("Enter Product ID: ");
    scanf("%49s", productID);

    printf("Enter Product Price: ");
    scanf("%f", &price);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("Enter Discount Percentage: ");
    scanf("%f", &discountPercentage);

    subtotal = price * quantity;
    discountAmount = subtotal * discountPercentage / 100.0;
    finalAmount = subtotal - discountAmount;

    printf("\nInvoice Details\n");
    printf("--------------------------------------------------\n");
    printf("%-20s %s\n", "Product ID:", productID);
    printf("%-20s %.2f\n", "Subtotal:", subtotal);
    printf("%-20s %.2f\n", "Discount Amount:", discountAmount);
    printf("%-20s %.2f\n", "Final Payable Amount:", finalAmount);
    printf("--------------------------------------------------\n");

    return 0;
}
