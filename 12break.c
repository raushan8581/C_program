#include <stdio.h>
int main()
{
    int a, age;
    for (a = 0; a < 6; a++)
    {
        printf("%d\nEnter your age\n", a);
        scanf("%d\n", &age);
        if (age > 18)
        {
            break;
        }
        else if (age < 5)
        {
            continue;
        }   
    }
    return 0;
}
//break statement used to bring the program control out of the loop..
//continue statement used to bring the program control to the next iteration of the loop..
//continue statement skip some code inside the loop and continue with the next iteration..