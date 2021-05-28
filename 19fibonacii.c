#include<stdio.h>
int fibonacci(int n)   // recursive approach...less speed in recusive than iterative..because it forms tree like structure...
{
    if (n == 1 || n ==2 )
    {
        return n-1;
    }else
    {
        return(fibonacci(n-1) + fibonacci(n-2));
    }
} 
int main()
{
 int num ,c;
 printf("Enter the number that you want fibonacci series\n");
 scanf("%d",&num);
 c = fibonacci(num);
 printf("The factorial series at %d is %d\n",num,c);  
    return 0;
}