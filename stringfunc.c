#include <stdio.h>
#include <string.h>
int main()
{
   char s3[100] ;
char s1[]=" harish";
char s2[]="shima";
puts (strcat(s1,s2));
 strcpy(s3,strcat(s1,s2));
puts (s3);
printf("the strcmp for s1 and s2 is %d",strcmp(s1,s2));
