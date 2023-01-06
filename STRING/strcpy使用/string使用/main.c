#include <stdio.h>
#include <string.h>

int main()
{
	char c1[]="123456789";
	strcpy(c1+4,"hello");
	puts(c1);
	return 0;
}

//strcpy(字符串1，字符串2)
//（1）字符串1只能是数组名，字符串2可以是常量
//（2）字符串1必须有足够的空间容纳字符串2
//（3）在遇到字符串2的'\0'结束