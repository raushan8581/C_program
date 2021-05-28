#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    printf("you have entered %d as your age\n", age);
    if (age >= 18)
    {
        printf("you are eligible for vote\n");
    }
    else if (age >= 10)
    {
        printf("you are eligible for vote as kids\n");
    }
    else
    {
        printf("you are not eligible for vote\n");
    }

    return 0;
}
