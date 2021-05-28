#include <stdio.h>
#include <string.h>
void parser(char *string)
{
    int a = 0; //  variable to track whether we are inside the tag
    int index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            a = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            a = 0;
            continue;
        }
        if (a == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';
    // removing the trialing spaces..
    while (string[0] == ' ')
    {
        for (int j = 0; j < strlen(string); j++) // shift the string to the left..
        {
            string[j] = string[j + 1];
        }
    }
    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0'; // replace with null character..
    }
}
int main()
{
    char string[] = "<span>   This is Raushan   </span>";
    parser(string);
    printf("The parsed string is ~~~%s~~", string);
    return 0;
}