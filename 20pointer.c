#include <stdio.h>

int main()
{
    int a = 34;
    int *ptra = &a;
    int *ptr2;
    int *ptr3 = NULL;
    printf("The adress of a is %p", &a);
    printf("\nThe adress of a is %p", ptra);
    printf("\nThe hexadecimal form of a is %x", &a);
    printf("\n The adress of ptra is %p", &ptra);
    printf("\nThe value of a is %d", a);
    printf("\nThe value of a is %d", *ptra);
    printf("\nThe adress of some garbage is %p", ptr2);
    printf("\nThe adress of NULL pointer is %p", ptr3);
    return 0;
}
// pointer is special type of data type which stores adrass of another variable..can be declared using '*' symbol..
//'*' is deference operator/indirection operator, used to get value at a given adress..&(adress of operator)- returns adress of variable.
// %x used to print adress into hexadecimal form..%p used to print adress..%d for value..
// A pointer that is not assigned any value but NULL is known as NULL pointer..used for initialize a pointer variable when the pointer variable isn't assigned any valid memory adress yet..
// USES: Dynamic memory allocation, Arrays function and structures.,Return multiple values from a function..