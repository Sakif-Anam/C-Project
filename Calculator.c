#include<stdio.h>
int main()
{
double a, b;
char s;
printf("Enter the 1st number: ", a);
scanf("%lf", &a);
printf("Enter an operator(+, -, *, /): ", s);
scanf(" %c", &s);//space before %c to consume any leftover newline
printf("Enter the 2nd number: ", b);
scanf("%lf", &b);
printf("---------------------------------------------------------------\n");
if(s=='+') printf("Sum: %lf + %lf = %lf\n", a, b, a+b);
else if(s=='-') printf("Difference; %lf - %lf = %lf\n", a, b, a-b);
else if(s=='*') printf("Product: %lf * %lf = %lf\n", a, b, a*b);
else if(s=='/') printf("Quotient: %lf / %lf = %lf\n",a, b, a/b);
else printf("Invalid Operator!\nPlease Give the Valid Ones\n");
printf("----------------------------------------------------------------\n");
return 0;
}
