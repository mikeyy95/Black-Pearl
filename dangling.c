#include<stdio.h>
#include <stdlib.h>
int *funcdangle(){
    int a,b,sum;
    a=34;
    b=364;
    sum=a+b;
    return &sum;
}

int main()
{
    //case 1 deallocation of memory block
    int* ptr = (int *)malloc(7*sizeof(int));
    ptr[0]=34;
    ptr[1]=64;
    ptr[3]=36;
    ptr[4]=56;
    free(ptr);//ptr is dangling
    printf("%d\n", ptr);

    //case 2 function returning local variable address
    int*dangptr = funcdangle();//ptr is dangling

    //case 3 variable out of scope
    int*dangptr3;
    {
        int a = 12;
        dangptr3 = &a;
    }// variable a out of scope
    return 0;
}


