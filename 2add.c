#include <stdio.h>

int main()
{
    int a, b; // defining two integer
    printf("Enter number a\n");
    scanf("%d", &a); //&(m percent is an adress of operator) helps in return adress of variable..
                     // scanf is a function used for recieve input from the user.. "%d is use for integer"
    printf("Enter number b\n");
    scanf("%d", &b);
    printf("sum of the numbers is %d\n", a + b);
    return 0;
}
// type clear in terminal for clear all content in terminal..
// type gcc -Wall -save-temps 2add.c -o raushan then press enter
// in pre-processing,our comments will be removed by our compiler..it stores in .i file
//then it convert into assembly level instruction,which will stores in .s file
//then it convert into machine level instruction which will understand by our system..stores in .o file
//linking is final step..which stores in .exe file
