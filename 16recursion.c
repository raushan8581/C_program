#include<stdio.h>
int factorial(int number)
{
    if (number == 0 || number==1)
    {
        return 1;
    }else
    {
        return(number * factorial(number-1));
    }
} 

int main()
{
 int num;
 printf("Enter the number that you want factorial\n");
 scanf("%d",&num);
 printf("The factorial of %d is %d\n",num,factorial(num));  
    return 0;
}
//recursive function- call a copy of itself to work on smaller problem..a termination condition is imposed on such function to stop them executing copies of them forever..
// case at which function does't recur is called base case...otherwise it is recursive case..
