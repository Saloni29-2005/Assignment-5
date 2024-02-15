#include<stdio.h>
int main()
{
    int a,rem,sum=0, count = 0;
    printf("Enter any number");
    scanf("%d", &a);
    while (a!=0)
    {
        a=a/10;
        count++;
    }
     printf("\n The number of digits is %d",count);
    printf("enter the number you entered earlier :");
    scanf("%d", &a);
        while (a != 0)
    {
        rem = a % 10;
        sum = sum + rem;
        a = a / 10;
    }
   
    printf("The sum of digits is %d", sum);
    return 0;
}