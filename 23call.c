#include <stdio.h>

void change(int* x)  // x is formal parameter,while a is actual parameter..here int* x helps to take the value from the adress of a..
{
    *x = *x + 5;
}
int main()
{
    int a = 45;
    printf("The value of a is %d\n", a);
    change(&a);
    printf("The changed value of a is %d\n", a);
    return 0;
}
// when we call a function by it's value,it means we are passing the value of argument which are copied into formal parameter(parameter inside user defined fn)..which means it's original value remains unchanged..
// call by refrence method of passing argument to a c fn copies the adress of actual argument into formal parameter.
