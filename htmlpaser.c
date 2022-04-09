#include <stdio.h>
#include<string.h>
void parser(char *string)
{
    int in = 0; // variable to track if we are inside tags
    int index = 0;

    for (size_t i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';

    // removing spaces from start
    while (string[0] == ' ')
    {   //shift string to left
        for (int i = 0; i < strlen(string); i++)
        {
            string[i] = string[i + 1];
        }
    }
    // remove spaces from end
    while (string[strlen(string)-1]==' ')   
    {
        string[strlen(string) - 1] = '\0';
    }
    

}
int main()
{
    char string[] = "<h1>           this is a heading           </h1>\n";
    parser(string);
    printf("The parsed string is %s", string);
    return 0;
}