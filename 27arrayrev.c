#include <stdio.h>
void array(int* a[])
{
    for (int i = 6; i >= 0; i--)
    {
        printf("The value of %dth element is %d\n",i, a[i]);
    }
}
// swap method can also be use..swap item arr[i] with arr[6-1]
void arrayrev(int array[])
{  int b;
    for (int i = 0; i < 7/2; i++)
    {
       b=array[i];
       array[i]=array[6-i];
       array[6-i]=b; 
    //    printf("The value of %dth element is %d\n",i, array[i]);
    }
    
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 45, 67};
array(arr);
arrayrev(arr);
for (int i = 0; i < 7; i++)
{
    printf("The value of %dth element is %d\n",i, arr[i]);
}

    return 0;
}