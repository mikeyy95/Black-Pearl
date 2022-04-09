#include <stdio.h>


//int myVar; 
int myfunc(int a, int b)
{
    //auto int myVar;
    static int myVar;
    printf("the myVar is %d\n", myVar);
    myVar++;
    //myVar = a + b;
    return myVar;
}

int main()
{
     register int myVar = myfunc(3, 5);
     myVar = myfunc(3, 5);
     myVar = myfunc(3, 5);
     myVar = myfunc(3, 5);
    //printf("the myVar is %d\n", myVar);  
    return 0;
} 