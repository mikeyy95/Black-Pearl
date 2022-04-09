#include<stdio.h>
#include <stdlib.h> 
int sum(int a, int b)
{
    return a+b;
}
void greet(){
    printf("Hello User");
}
int main(){
    printf("The sum of 1 and 2 is %d\n",sum(1,2));
    int(*fptr) (int, int); // declaring a function pointer
    fptr=&sum; // creating a function pointer
    int d = (*fptr)(4,6);// dereferencing a function pointer
    printf("The sum in D is %d\n",d);

    return 0;
}
