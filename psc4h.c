#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,discriminant,root1,root2;
    printf("Enter the num a:");
    scanf("%2f",&a);

    printf("Enter the num b:");
    scanf("%2f",&b);

    printf("Enter the num c:");
    scanf("%2f",&c);

    discriminant=b*b-4*a*c;

    if(discriminant>0){
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);
        printf("Roots are real and distinct:\n");
        printf("root1=%2f\n",root1);
        printf("root2=%2f\n",root2);
    }
    else if (discriminant==0){
        root1=root2=-b/(2*a);
        printf("Roots are real and equal:\n");
        printf("root1=root2=%2f\n",root1);
    }
    else{
        float realpart=-b/(2*a);
        float imaginarypart=sqrt(-discriminant)/(2*a);
        printf("root are complex and imaginary:\n");
        printf("root1=%2f+%2f\n",realpart,imaginarypart);
        printf("root2=%2f+%2f\n",realpart,imaginarypart);
    }
    return 0;

}