#include<stdio.h>
#include<string.h>

int main()
{
    int a = 5136;
    float b = 6415.944;
    void *ptr;
    ptr = &a;
    printf("the value of a is %d\n ",*((int*)ptr));
    ptr = &b;
    printf("the value of b is %f\n ",*((float*)ptr));
    return 0;
}
