#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL)); // srand takes seed as an input and is defined inside stdlib.h
    return rand() % n;
}

// Create Rock, Paper & Scissors Game
//  Player 1: rock
//  Player 2 (computer): scissors -->player 1 gets 1 point

// rock vs scissors - rock wins
// paper vs scissors - scissors wins
// paper vs rock - paper wins
// Write a C program to allow user to play this game three times with computer. Log the scores of computer and the player. Display the name of the winner at the end
// Notes: You have to display name of the player during the game. Take users name as an input from the user.

int greater(char c1, char c2)
{ // returns 1 if c1>c2 and 0 otherwise and -1 if c1=c2
    if (c1 == c2)
    {
        return -1;
    }
    else if ((c1 == 'r') && (c2 == 's'))
    {
        return 1;
    }
    else if  ((c2 == 'r') && (c1 == 's'))
    {
        return 0;
    }
    else if ((c1 == 'p') && (c2 == 'r'))
    {
        return 1;
    }
    else if ((c2 == 'p') && (c1 == 'r'))
    {
        return 0;
    }
    else if ((c1 == 's') && (c2 == 'p'))
    {
        return 1;
    }
    else if ((c2 == 's') && (c1 == 'p'))
    {
        return 0;
    }
}
int main()
{
    // int a,b,times,i;
    // char name;
    // printf("Welcome to rock paper scissor game\n");
    // printf("Enter how many times u want to play\n");
    // scanf("%d\n",&times);
    // do
    // {
    // b=generateRandomNumber(3);
    // printf("The choice of Computer is %d\n",b);
    // if (a==0 && b==0)
    // {
    //     printf("A is zero\n");
    // }
    // else if (a==1)
    // {
    //     printf("A is one\n");
    // }
    // else if (a==2)
    // {
    //     printf("A is two\n");
    // }
    // } while (i=0,i<times,i++);
    int pscore = 0, computer = 0, temp;
    char playerChar, compChar, compScore = 0, playerScore = 0;
    char dict[] = {'r', 'p', 's'};
    printf("Wlecome To Rock Paper Scissor Game\n");
    for (int i = 0; i < 3; i++)
    {
        // Take player input
        printf("Player 1 Turn\n");
        printf("Choose 1 for Rock 2 for Paper 3 for Scissors\n");
        scanf("%d\n", &temp);
        
        playerChar = dict[temp - 1];
        printf("You chose %c\n\n", playerChar );

        // Computer input
        printf("Computer Turn\n");
        printf("Choose 1 for Rock 2 for Paper 3 for Scissors\n");
        temp = generateRandomNumber(3) + 1;
        compChar = dict[temp - 1];
        printf("Computer chose %c\n", compChar);

        // Compare The score
        if (greater(compChar, playerChar) == 1)
        {
            compScore += 1;
            printf("Computer got it!\n");
        }
        else if (greater(compChar, playerChar) == -1)
        {
            compScore += 1;
            playerScore += 1;
            printf("DRAW\n");
        }
        else
        {
            playerScore += 1;
            printf("U got it!\n\n");
        }
        printf("YOU: %d\nComputer: %d\n\n", playerScore, compScore);
    }
    if (playerScore>compScore)
    {
        printf("U win\n");
    }
    else if (playerScore<compScore)
    {
        printf("Computer Won\n");
    }
    else
    {
        printf("DRAW\n");
    }
    
    return 0;
}