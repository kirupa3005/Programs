
#include <stdio.h>

int main()
 {
    int dividend, divisor;
    int quotient, remainder;
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);
    quotient = dividend / divisor;
    remainder = dividend % divisor;

    printf("\n--- Result ---\n");
    printf("Quotient : %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}