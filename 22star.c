#include <stdio.h>
int main()
{
    int pattern;
    printf("Enter 1 for increasing star pattern and press 2 for decreasing\n");
    scanf("%d", &pattern);
    int n;
    printf("Enter the Rows of star pattern you want\n");
    scanf("%d", &n);
    switch (pattern)
    {
    case 1:
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                printf("%c", '*');
            }
            printf("%c\n",'*');
        }
        break;
    case 2:
        for (int i = n; i > 0; i--)
        {
            for (int j = i; j > 1; j--)
            {
                printf("%c", '*');
            }

            printf("%c\n", '*');
        }
        break;
    default:
        printf("Please Enter valid number");
        break;
    }
    return 0;
}