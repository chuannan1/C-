#include <stdio.h>
#include <string.h>

int main()
{
	char c1[20]="hello",c2[]="nihao";
	strcat(c1,c2);
	//strcat(c1,"world");
	puts(c1);
}

//strcat(�ַ���1���ַ���2)
//�ַ���2�׵�ַ�����ַ���1��'\0'
//�ַ���1������������