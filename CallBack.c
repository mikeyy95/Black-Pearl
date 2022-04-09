#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b){
    return a+b;
}

void greetHelloandExecute(int (*fptr)(int,int)){
    printf("Hi user\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5,7));

}

void greetGmAndExecute(int (*fptr)(int,int)){
    printf("Good morning user\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5,7));
}

int main(){
    int (*ptr)(int,int);
    ptr = &sum;
    greetHelloandExecute(ptr);
    greetGmAndExecute(ptr);
    return 0;
}