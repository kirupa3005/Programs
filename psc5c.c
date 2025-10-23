#include <stdio.h>

int main()
{
    int i, n;
    
    printf("Enter the number: ");
    scanf("%d", &n);
    
    printf("Number\tCube\n");
    
    for(i = 1; i <= n; i++)
    {
        printf("%d\t%d\n", i, i * i * i);
    }
    
    return 0;
}