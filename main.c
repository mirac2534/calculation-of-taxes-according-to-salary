#include <stdio.h>
#include <stdlib.h>

float calculate_tax(float);

int main()
{
float income,tax;
printf("yearly income:");
scanf("%f",&income);
tax=calculate_tax(income);
printf("your yearly income is %.2f and your related tax is %.2f",income,tax);
    return 0;
}

float calculate_tax(float income)
{
float tax=0.0;
if(income>0 && income<15000.0)
{
tax=income*15;
}
else if (income<30000.0)
{
tax=(income-15000)*18+2250;
}
else if (income<50000.0)
 {
tax=(income-30000.0)*2+5400;
 }
else if (income<80000.0)
 {
tax=(income-50000.0)*27+11000;
 }
 else if (income>=80000.0)
 {
tax=(income-80000.0)*33+21600;
 }
 return tax;
}
