#include <stdio.h>

int main()
{
    int a;
    int b = 0;
    printf("Enter number that you want muntiplication table\n");
    scanf("%d", &a);
    printf("Table of %d is\n", a);
    do
    {
        b = b + 1;
        printf("%d x %d = %d\n", a, b, a * b);

    } while (b < 10);

    return 0;
}
