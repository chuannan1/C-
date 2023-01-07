#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int fun(char *str, char *substr)
{
  char *p=str;int i=0,len=0,num=0;
  len=strlen(substr);//求出第二个字符串的长度
  while(*p)//到第一个字符串末尾
  {
	for(i=0;i<len;i++)
	{
		if(p[i]!=substr[i])//将第一个字符串和第二个进行比较
		{
			break;//当不同的时候跳出循环
		}
	}
	if(i>=len)//判断字符是否一样
	{
		num++;
	}
	p++;//是指针指向下以位，达到下一个P[0]=现在的p[1]。
  }
  return num;
}
void main()
{ 
  FILE *wf;
  char str[81],substr[3];
  int n;
  system("CLS");
  printf("ÊäÈëÖ÷×Ö·û´®: ");
  gets(str);
  printf("ÊäÈë×Ó×Ö·û´®: ");
  gets(substr);
  puts(str);
  puts(substr);
  n=fun(str,substr);
  printf("n=%d\n ",n);
/******************************/
  wf=fopen("out.dat","w");
  n=fun("asd asasdfg asd as zx67 asd mklo","as");
  fprintf(wf,"%d",n);
  fclose(wf);
/*****************************/
}
