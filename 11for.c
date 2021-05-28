#include <stdio.h>

int main()
{
    int i, j;
    for (i = 0, j = 0; i < 5; i++, j++)
    {
        printf("%d| %d\n", i, j);
    }

    return 0;
}
//for loop used for iterate the statement or a part of program..
//for(expression 1(initialization), expression 2(conditional),expression 3(update loop variable))
// we can initialize more then one variable at a time..expression 2 can perform task of expression 1 and expression3
// we can also update more then one variable at same time..here all expressions are optional..