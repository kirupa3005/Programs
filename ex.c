#include <stdio.h>

int main() {
    char item[50];
    int quantity;
    float price, total;

    // Get input from user
    printf("Enter Food Item: ");
    scanf("%s", item);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("Enter Price per Item: ");
    scanf("%f", &price);

    // Calculate total
    total = quantity * price;

    // Display the bill
    printf("\nBill Details:\n");
    printf("Item: %s\n", item);
    printf("Quantity: %d\n", quantity);
    printf("Price per Item: %.2f\n", price);
    printf("Total Amount = %.2f\n", total);

    return 0;
}