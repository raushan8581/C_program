//without argument with return value..
#include <stdio.h>
int i;
int takenumber()
{

    printf("Enter a number\n");
    scanf("%d", &i);
    return i;
}
int main()
{
    int c;
   c= takenumber();   // call the function..
printf("You have entered the number%d",c);
    return 0;
}
