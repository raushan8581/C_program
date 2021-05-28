#include <stdio.h>

int fib(int n)    // iterative approach
{
    int a = 0;
    int b = 1;
    for (int i = 0; i < n - 1; i++)
    {
        b = a + b;
        a = b - a;
    }
    return a;
}
int main()
{
    int num;
    printf("Enter the number till which you want fibonacci series\n");
    scanf("%d", &num);
    printf("fibonacci series at %d is %d\n", num, fib(num));

    return 0;
}
