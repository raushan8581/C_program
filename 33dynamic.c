#include <stdio.h>
#include <string.h>
#include <stdlib.h> //for using dynamic allocation(heap)..

int main()
{ int n;
printf("Enter the size that you want\n");
scanf("%d",&n);
    int *ptr;
    int *pt;
    int *p;
    ptr = (int *)malloc(8 * sizeof(int));
    pt = (int *)calloc(4, sizeof(int));     // syntax
    p = (int *)realloc(p, 3 * sizeof(int)); // syntax
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d of array\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 4; i++) // return garbage value at 4th place..
    {
        printf("The value of %d of array is %d\n", i, ptr[i]);
    }
    free(p);   // free the reserved size of realloc...
    return 0;
}
// dyanamic memory allocation is a way in which the size of data structure can be changed during the runtime..
// type "gcc 33dynamic.c; size .\a.exe" in terminal to see the size..
// four function for dynamic allocation.. 1.malloc(memory allocation) reserve the block of memory ..garbaze value initialize.
// 2.calloc(contigious allocation) reserve n block [ptr=(ptr_type) calloc(n,size_in_bytes);] >>allocated memory initialize with '0'..
// 3.realloc(reallocation) can change size of previous allocated memory  4.free.(used to free allocated memory).
//