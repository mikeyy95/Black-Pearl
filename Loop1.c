#include <stdio.h>

int main()
{
    int m, s;
    printf("Enter yuor marks in maths subject out of 100: \n");
    scanf("%d", &m);

    printf("Enter your marks in science subject out of 100: \n");
    scanf("%d", &s);

    if(m >= 33 && s >= 33)
    {
        printf("You have passed in both the subject so you get 500 points!!");
    }
    else if(m >= 33 && s <33)
    {
        printf("You have passed in Maths but failed in Science so you get only 150 points!! ");
    }
    else if(m <33 && s>= 33)
    {
        printf("You have passed in Science but failed in Maths so you will only get 150 points!! ");
    }
    else 
    {
        printf("You have failed in both the subject so you get 0 points!");
    }    
}    