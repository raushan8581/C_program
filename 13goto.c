#include <stdio.h>

int main()
{
    // label:
    // printf("we are in label");
    // goto end;
    // printf("Hello World\n");
    // goto label;
    // printf("we are at end");
    // end:
    //GOTO statement also called jump statement in c..used to trensfer program control to a predefined label..
    int num;
    for (int i = 0; i < 7; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j < 8; j++)
        {
            printf("Enter the number.Enter 0 to exit\n");
            scanf("%d", &num);
            if (num == 0)
            {
                goto end;
            }
        }
    }
end:
    return 0;
}
