#include<stdio.h>

int main()
{
int dividend, divisor,remainder;
int quotient = 0;

printf("Enter dividend: ");
scanf("%d", &dividend);

printf("Enter divisor: ");
scanf("%d", &divisor);

while (dividend >= divisor)
{
dividend -= divisor;
quotient++;
remainder = dividend;
}

printf("Quotient: %d\n", quotient);
printf("Remainder: %d\n", remainder);
return 0;
}