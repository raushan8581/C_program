# include <stdio.h>

int func(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d element is %d\n",i,array[i]);
    }
    // array[0]=465;  // if you change any value of array,it will reflected in main()..
    return 0;
}
void func1(int *ptr)   // get the value of array..
{
    for (int i = 0; i < 4; i++)
    {
         printf("The value of %d element is %d\n",i,ptr[i]);
        printf("The value of %d id %d\n",i,*(ptr + i));  //second method, ptr+i helps to get value..
    }
    *(ptr+2)= 768;
}
int main()
{
      int arr[] ={12,34,3,5};
    //   func (arr);
    func1(arr);
    func1(arr);
    return 0;
}