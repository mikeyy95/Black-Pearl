#include<stdio.h>
int main()
{
    char a = '9';
    char *ptra=&a;
    printf("address of a is %d\n",&ptra);
    printf("address of a is %d\n",&ptra+3
    );
}
