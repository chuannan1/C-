#include <stdio.h>
#include <string.h>

int main()
{
	char c1[]="12345",c2[]="12345";
	printf("%d\n",strcmp(c1,c2));
	printf("%d\n",strcmp("zhangb","zhbo"));
	printf("%d\n",strcmp("zhou","zhang"));
}

//strcmp(�ַ���1���ַ���2)
//�������ַ��������ַ���ʼ�Ƚ϶�Ӧ��ASCII��ֵ���бȽ�
//���ַ���1<�ַ���2   <0
//���ַ���1=�ַ���2   =0
//���ַ���1>�ַ���2   >0