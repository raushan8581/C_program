#include <stdio.h>
#include <string.h>
union employee // use union at place of struct ..
{
    int id;
    char gender; // contain 34 bytes only..
    char name[34];
} u1;

int main()
{
    strcpy(u1.name, "Raushan"); //34 bytes shared b/w three but only one will active and other two will be corrupt.
    u1.gender = 'M';
    u1.id = 120;  // which is written in last will be secured..
    printf("The gender of U1 is %c\n", u1.gender);
    printf("The name is %s\n",u1.name);
    printf("The id of u1 is %d\n", u1.id);
    return 0;
}
// similar to structure(user defined data types)..member of union uses a single shared memory location..
// the single shared memory location equal to the size of largest data member..use keyword union to define..
//