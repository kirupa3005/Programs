#include<stdio.h>

int main()
{
    int kilometers;
    float miles;

    printf("Enter the speed in km/h: ");
    scanf("%d", &kilometers);
    miles = kilometers * 0.621371;

    printf("\n--- Result ---\n");
    printf("Speed in mp/h : %f\n", miles);
    return 0;
}