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

//strncpy(�ַ���1���ַ���2,n)
//ֻ����ָ�����ȵ�����