#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10;
    int *ptr ; 
    int c = 34;
    if (ptr != NULL){
    printf("The adress of a is %d\n", ptr);
    }  
    else{
        printf("The pointer is a null pointer and cannot be deref.\n");
    }
    return 0;
}
