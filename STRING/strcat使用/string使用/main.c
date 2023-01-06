#include <stdio.h>
#include <string.h>

int main()
{
	char c1[20]="hello",c2[]="nihao";
	strcat(c1,c2);
	//strcat(c1,"world");
	puts(c1);
}

//strcat(字符串1，字符串2)
//字符串2首地址覆盖字符串1的'\0'
//字符串1必须是数组名