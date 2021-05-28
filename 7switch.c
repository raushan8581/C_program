# include <stdio.h>
int main()
{
    int day;   // must be an int or char..case value must be an integer or char..
    printf("Enter day number\n");
scanf("%d", &day);
switch (day)
{
case 1:printf("Monday");
break;
case 2:printf("Tuesday");
    break;
  case 3:  printf("Wednesday");
    break;
case 4:printf("Thrusday");
    break;
  case 5  :printf("Friday");
    break;
    case 6:printf("Saturday");
    break;
    case 7:printf("Sunday");
    break;

default:printf("no day match");
    break;
}

    return 0;
}

