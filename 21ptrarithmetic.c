#include <stdio.h>
int main()
{
	int a = 56;
	int *ptra = &a;
	printf("%d", ptra);
	printf("\n %d", ptra + 1); // "+1 means add one size of integer in adress"

	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int arrayptr = arr;
	printf("adress at position 3 of the array is %d\n", &arr[3]);
	printf("adress at first element of the array is %d\n", &arr[0]);
	printf("adress at first element of the array is %d\n", arr);
	printf("adress at second element of the array is %d\n", &arr[1]);
	printf("adress at second element of the array is %d\n", arr + 1);
	//  arr++;  this line throw an error..
	arrayptr++;
	printf("value at adress of position 3 of the array is %d\n", *(&arr[3]));
	printf("value at adress of first element of the array is %d\n", *(&arr[0]));
	printf("value at adress of first element of the array is %d\n", *(arr));
	printf("value at adress of first element of the array is %d\n", arr);
	printf("value at adress of second element of the array is %d\n", *(&arr[1]));
	printf("value at adress of second element of the array is %d\n", *(arr + 1));
	return 0;
}
// For making snippet in vs code, go to setting>> user snippet>> go to C>> write prefix >>write text inside body that you want for craete shortcut for writing code..                                                              "Bare minimum C program": {// "prefix": "main2",
// "body": [
// 	"#include <stdio.h>",
// 	"int main()",
// 	"{\n$1",
// 	"\treturn 0;",
// 	"}", ],
// "description": "C program"
