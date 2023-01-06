#include <stdio.h>
#include <string.h>

int main()
{
	char str1[10]="abcdefg",str2[]="ABCDEF";
	//strncpy(str1,str2,4);
	strncpy(str1+2,"HELLO",2);
	puts(str1);
	return 0;
}

//strncpy(字符串1，字符串2,n)
//只复制指定长度的内容