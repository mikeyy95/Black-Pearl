#include<stdio.h>

long factorial_r(int n)
{
    if (n==1 || n==0)   
    {
        return 1;
    }
    else
    {
        return n*factorial_r(n-1);
    }
return 0;    
}

long factorial_i(int n)
{
    int i , factorial_i=1;
    do
    {
        factorial_i=factorial_i*i;
    } 
    while (i=1,i<=n,i++);
    
}
int main()
{
    int number;
    printf("enter the number you want factorial of\n");
    scanf("%d", &number);
    printf("The factorial of %d using recursive approach is %d\n", number, factorial_r(number));
    printf("The factorial of %d using iterative approach is %d\n", number, factorial_i(number));
}