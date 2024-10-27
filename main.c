#include <stdio.h>
#include <stdlib.h>

float calculate_tax(float); // Calculates tax according to your yearly income

int main()
{
float income,tax; // I defined income and tax 
printf("yearly income:"); // Enter your yearly income
scanf("%f",&income);
tax=calculate_tax(income); // Call the function
printf("your yearly income is %.2f and your related tax is %.2f",income,tax);
    return 0;
}

float calculate_tax(float income)
{
float tax=0.0;
if(income>0 && income<15000.0) // If your income is bigger than zero and smaller than 15000$
{
tax=income*15; // 15 percent of your income
}
else if (income<30000.0) // If your income is smaller than 30000$
{
tax=(income-15000)*18+2250; 
}
else if (income<50000.0) // If your income is smaller than 50000$
 {
tax=(income-30000.0)*2+5400;
 }
else if (income<80000.0) // If your income is smaller than 80000$
 {
tax=(income-50000.0)*27+11000;
 }
 else if (income>=80000.0) // If your income is equal or bigger than 80000$
 {
tax=(income-80000.0)*33+21600;
 }
 return tax; // Returns tax 
}
