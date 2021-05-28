#include<stdio.h>
int sum(int a,int b)   //  declaration,  argument with return value..
// return_type function_name(data_type peremeter)
// void printstar(int n)    // argument without return value..void means function don't return anything..
// {
// for (int i = 0; i < n; i++)
// {
//     printf("%c",'*');
// }

// }
{
    return a + b;
}
int main()
{
    int a,b,c;
    a=45;b=67;
    c = sum(a,b);
    
    printf("The sum is\n%d",c);
    // printstar(7);
    return 0;
}
// function is use to divide a large c program into smaller pieces..also called procedure and subroutine..
// we can avoid rewriting same logic through function..and can easily debug a program..
//Declaration,definition(write actual implementation) and call..
//types:1.library function(printf,scanf,main) 2.user defined function(created by c programmer to reduce complexity).
