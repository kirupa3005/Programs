#include<stdio.h>
int main()
{
    int side1,side2,side3;
    printf("Enter the length of side 1:");
    scanf("%d",&side1);

    printf("Enter the length of side 2:");
    scanf("%d",&side2);

    printf("Enter the length of side 3:");
    scanf("%d",&side3);

    if(side1==side2&&side2==side3){
        printf("Triangle is a Equilateral.\n");
    }
    else if(side1==side2||side1==side3||side2==side3){
        printf("Triangle is a Isosceles.\n");
    }
    else{
       printf("Triangle is a Scalene.\n"); 
    }

    return 0;




} 