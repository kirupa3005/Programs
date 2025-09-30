#include <stdio.h>

int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n>=18) 
        printf("%d is Eligible for casting vote\n", n);
    else
        printf("%d is Not Eligible for casting vote\n", n);

    return 0;
}