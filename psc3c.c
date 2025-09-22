// Conversion from kilometers per hour to miles per hour
#include<stdio.h>

int main()
{
    int kilometers;
    float miles;
    printf("Enter the speed in km/h: ");
    scanf("%d", &kilometers);
    miles = kilometers * 0.621371;
    printf("Speed in miles per hour is: %.2f\n", miles);
    return 0;
}