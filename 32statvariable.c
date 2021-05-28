#include <stdio.h>
int c = 45;     // here a is global variable..
int func(int a) // here a is formal argument..
{
    static int var = 67;
    printf("The value of var is %d\n", var);
    var++;
    printf("The value of a inside func is %d\n", a * 10);
    return a * 5;
}
int main()
{
    int d = 345;
    int val = func(d);
    val = func(d);
    val = func(d);
    val = func(d);

    int a = 23; // hare a is local variable..
    printf("The value of a inside main is %d\n", a);
    int b = func(a);
    printf("The value of a from func is %d\n", b);
    return 0;
}
// global variable defined outside the main fn from any fn..local variable have more precidence..
// formal argument treated as local variable within a function and take precidence over global var..
// static variable preserve their value after go out of scope and not initialize again..
// it can only initialize using constant literals and stores default value '0' ...
//