//Program to convert the temperature from centigrade to fahrenheit
#include<stdio.h>
int main()
{
    int centigrade,fahrenheit;
    printf("Enter the temperature in centigrade:");
    scanf("%d",&centigrade);
    fahrenheit=(centigrade*9/5)+32;
    printf("Temperature in fahrenheit is: %d",fahrenheit);
    return 0;
}