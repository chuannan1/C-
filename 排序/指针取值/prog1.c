#include <stdio.h>
#include <string.h>

void fun(char*s)
{
	int i=0;
	while(s[i]!='\0')s[i++]=getchar();
}
main()
{
	char t[80]="yes!";
	fun(t);
	puts(t);
	getchar();
}