#include <stdio.h>

int main()
{
    char sub;
    printf("Enter passing subject\n");
    scanf("%c", &sub); // "%c" is use for character
    if (sub == 'a')
    {
        printf("prize money is 2500\n");
    }
    else if (sub == 'm')
    {
        printf("prize money is 1000\n");
    }
    else if (sub == 's')
    {
        printf("prize money is 1200\n");
    }
    else
    {
        printf("prize money is zero\n");
    }

    return 0;
}
