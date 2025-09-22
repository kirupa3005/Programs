//conversion of hours and mintues into total minutes
#include<stdio.h>
int main()
{
    int minutes;
    int hours;
    int total_minutes;
    printf("Enter the minutes :");
    scanf("%d",&minutes);
    printf("Enter the hours :");
    scanf("%d",&hours);
    total_minutes=hours*60+minutes;
    printf("Total minutes: %d",total_minutes);
    return 0;
    
}