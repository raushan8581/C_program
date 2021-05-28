#include <stdio.h>

int main()
{
    int num, a = 0;
    printf("Enter the number\n");
    scanf("%d", &num);
    do
    {
        a = a + 1;
        printf("%d\n", a);
    } while (a < num);

    return 0;
}
// do while loop executes atleast once..