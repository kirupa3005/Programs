#include <stdio.h>

int main() 
{
    char name[100];
    int age;
    char gender;
    char address[200];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);
    getchar();

    printf("Enter your gender (M/F): ");
    scanf("%c", &gender);
    getchar();

    printf("Enter your address: ");
    fgets(address, sizeof(address), stdin);

    printf("\n--- User Details ---\n");
    printf("Name    : %s", name);
    printf("Age     : %d\n", age);
    printf("Gender  : %c\n", gender);
    printf("Address : %s", address);

    return 0;
}