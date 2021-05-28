#include <stdio.h>

int main()
{
    // %lu is a specifier..
    printf("%lu", sizeof(double)); // sizeof is a function use for print size of operator..
    return 0;
}
// constant can't be change..two ways to define constant...1.cont keyword(const int a=2;) 2. #define preprocessor(#define PI 3.14)
// Escape sequence(\n-new line,\t-tab,\"-for double Quote,\\-backslash,\a-sound, \b-backspace)