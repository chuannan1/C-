#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int fun(char *str, char *substr)
{
  char *p=str;int i=0,len=0,num=0;
  len=strlen(substr);
  while(*p)
  {
	for(i=0;i<len;i++)
	{
		if(p[i]!=substr[i])
		{
			break;
		}
	}
	if(i>=len)
	{
		num++;
	}
	p++;
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
