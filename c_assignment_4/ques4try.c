#include<stdio.h>
#include<stdlib.h>
int main()
{
int n;
char cat[25];
printf("enter str");
gets(cat);
n=replace(cat);
printf("%s",cat);
printf("\n");
printf("%d",n);
return 0;
}
int replace(char *p)
{
int c=0;
while(*p!='\0')
{
if(*p==' ')
{
*p='-';
c++;
}
p++;
}
return c;
}

