#include <stdio.h>
// synatx
// 1-D= Data_types name[size];  2-D= Data_types name[rows][columns];
int main()
{
  // int roll[4];
  // for (int i = 0; i < 4; i++)
  // {
  //     printf("Enter the marks of roll %d of class\n",i);
  //     scanf("%d",&roll[i]);
  // }
  // for (int i = 0; i < 4; i++)
  // {
  //     printf("The marks of roll %d of class is %d\n ",i,roll [i]);

  // }
  int marks[2][4] = {{34, 45, 56, 54}, {37, 78, 97, 62}}; //  2-D array declaration with initialization..
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      printf("The marks of roll %d ,%d of class is %d\n ", i, j, marks[i][j]);
      // printf("%d",marks[i][j]);
    }
  }
  return 0;
}
// array is collection of data item of same type/derived data types(pionter,structures)..1-D array(vector),      2-D array(matrices)..
//each element of array of same size..any element can easily assessed quickly with base eadress and the index..
