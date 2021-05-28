#include <stdio.h>
typedef struct student   // can use struct student as std...
{
    int marks;
}std;

int main()
{
    std s1;   // act as struct student s1;
    s1.marks=56;
    printf("Marks of s1 is %d\n",s1.marks);
    // typedef <previous_name>  <alias_name>   // u can use previos name as alias name..
    // data type name can be change and then assigned by you..
    typedef int integer;
    typedef int *intptr;
    integer a = 67;
    printf("The value of a is %d\n", a);
    intptr c = &a;
    printf("The adress of c is %d\n",c);

    return 0;
}