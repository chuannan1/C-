#include <stdio.h> 
#include <string.h>
#pragma warning (disable:4996)
void fun(char*sp ,int *ct)
{
	int ea=0,ou=0,iu=0;
	char s='0';
	char *p=sp;//将数组首地址赋值给P
	while(*p)//为'\0'结束
	{
		s=*p++;//此时s为*p  
		if(*p=='a'&& s=='e')//此时"*p"为*p+1    即s存的是前一个数
		{
			ea++;
		}
		if(*p=='u'&& s=='o')
		{
			ou++;
		}
		if(*p=='u'&& s=='i')
		{
			iu++;
		}
	}
	ct[0]=ea;
	ct[1]=ou;
	ct[2]=iu;
}
main()
{	void NONO();
	char txt[200]="abeaeafeeaoukgdoouuoiouifwieeotiu";
	int c[3];
	fun(txt,c);
	printf("%d,%d,%d\n",c[0],c[1],c[2]); 
	NONO();
}
void NONO ()
{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，输出数据，关闭文件。 */
  FILE *rf, *wf ;
  int i, c[3] ;
  char txt[200], *p ;

  rf = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fgets(txt, 200, rf) ;
    p = strchr(txt, '\n') ;
    if(p != NULL) *p = 0 ;
	fun(txt,c);
	fprintf(wf, "%d,%d,%d\n",c[0],c[1],c[2]); 
  }
  fclose(rf) ; fclose(wf) ;
}
