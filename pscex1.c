#include<stdio.h>
int main()
{
    float salary, bonus;
    char sex;

    printf("Enter salary: ");
    scanf("%f", &salary);
    printf("Enter sex (M/F): ");
    scanf(" %c", &sex);

    if (sex == 'M' || sex == 'm'){
        bonus = 0.05 * salary;
    }
    else if (sex == 'F' || sex == 'f'){
        bonus = 0.10 * salary;
    }
    else if(salary< 10000&&sex=='M'||sex=='m'){

    }
       
    

    if (salary < 10000)
        bonus += 0.02 * salary;

    
    return 0;
}