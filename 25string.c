# include <stdio.h>
void charstr(char name[])
{
if (name=="Raushan")
{
    printf("%s is a good boy\n",name);
}else if (name=="Ritik")
{
    printf("%s is a handsome boy\n",name);   
}else
{
    printf("simple guy\n");
}
}
int main()
{
      char name[45];
      printf("Enter Your Name\n");
      gets(name);
      charstr(name);
    return 0;
}
// string array of character terminated by NULL(\0) character..use gets(str); function at place of scanf in case of string..
// for print string, use printf("%s",str);  or puts(str);
