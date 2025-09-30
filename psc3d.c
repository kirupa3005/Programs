#include<stdio.h>
int main()
{
    int hours;
    int minutes;
    int total_minutes;
    printf("Enter the hours :");
    scanf("%d",&hours);
    printf("Enter the minutes :");
    scanf("%d",&minutes);
    total_minutes=hours*60+minutes;

    printf("\n--- Result ---\n");
    printf("Total minutes: %d\n",total_minutes);
    return 0;
    
}