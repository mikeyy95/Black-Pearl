#include <stdio.h>

int main(void)
{   
    int a =10;    
    if (a)
    {
        a+=5;
        int a = 20;
        a+=10;
        printf("%d\n",a);
    }
    
    printf("%d",a);
    return 0;
}
