#include <stdio.h>
int main()
{
    int a;
    float b;

    printf("Enter number a\n");
    scanf("%d", &a); // %d is a format specifier used for print integer
    printf("Enter number b\n");
    scanf("%f", &b);
    // %c-character, %l- long, %lf- double, %Lf- long double
    printf("a+b=%f\n", a + b); //%f use for float
    printf("a-b=%f\n", a - b);
    printf("a*b=%f\n", a * b);
    printf("a/b=%f\n", a / b);
    return 0;
}
//use code runner extention for directly run our program
// operator is symbol used to perform operation,    arithmetic(+,_% modulus) operator,  relational(==,!=>),  logical(&&(and),||(or),!(not)),  bitwise(0,1),  assignment(=,+=(add and assign operator)) operator
// Learn operator presedence in C from google
