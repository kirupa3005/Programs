#include <stdio.h>

int main() 
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = num >> 1;

    printf("%d divided by 2 = %d\n", num, result);

    return 0;
}