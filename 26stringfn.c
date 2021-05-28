#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "Raushan";
    char s2[] = "kumar";
    char s3[45];
    puts(strcat(s1, s2));
    printf("The lenth of s1 is %d\n", strlen(s1));
    printf("The reverse of s2 is\n", strrev(s2));
    strcpy(s3,strcat(s1,s2));
    puts(s3);
    printf("The strcmp for s1 and s2 is%d\n",strcmp(s1,s2)); // return -1 because R comes after K..
    return 0;
}
// use #include <string.h> strcat() ->> combine two string. strlen() ->> show length. strrev() ->> show reverse.
// strcpy(s1,s2) ->> copy s2 into s1.. strcmp("s1","s2") ->> compare two string(ascii value),return 1 or-1..