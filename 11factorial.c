#include <stdio.h>
int fact(int n){
int a,b;
for (int i = 1; i <n; i++)
    {
       b = i*(i+1);
        a= b*1;
        }
        return a;
}
int main()
{
    int c;
    printf("Enter the number that you want factorial\n");
    scanf("%d", &c);
    
printf("The factorial of %d is %d\n",c,fact(c));
    
    return 0;
}
