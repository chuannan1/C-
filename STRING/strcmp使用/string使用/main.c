#include <stdio.h>
#include <string.h>

int main()
{
	char c1[]="12345",c2[]="12345";
	printf("%d\n",strcmp(c1,c2));
	printf("%d\n",strcmp("zhangb","zhbo"));
	printf("%d\n",strcmp("zhou","zhang"));
}

//strcmp(字符串1，字符串2)
//将两个字符串由首字符开始比较对应的ASCII码值进行比较
//当字符串1<字符串2   <0
//当字符串1=字符串2   =0
//当字符串1>字符串2   >0