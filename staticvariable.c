#include<stdio.h>
int b = 108;
int func1(int b1 )
{
    static int myvar = 721782
    ; 
    myvar++;
    printf("the value of myvar is %d\n",myvar);
    //printf("the value of b inside func1 is %d", b);
    //printf("the address of b inside func1 is %d\n", &b);
    return b1+myvar ;
}
int main()
{   
    int b = 344;
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr = &val;
    //printf("the value of func1 is %d\n",val);
   // printf("the address of b inside main is %d\n", &b);
    return 0;
}    