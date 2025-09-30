#include <stdio.h>

int main() {
    int i;
    char c;
    float f;
    char str[100]; 

    printf("Enter an integer: ");
    scanf("%d", &i);

    printf("Enter a character: ");
    scanf(" %c", &c);

    printf("Enter a float: ");
    scanf("%f", &f);

    printf("Enter a string (single word): ");
    scanf("%s", str);

    printf("\nYou entered:\n");
    printf("Integer: %d\n", i);
    printf("Character: %c\n", c);
    printf("Float: %f\n", f);
    printf("String: %s\n", str);

    return 0;
}