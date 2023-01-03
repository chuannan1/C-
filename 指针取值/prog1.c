#include <stdio.h>
void  fun( char *a, char *h,char *p )
{
	char *l=a;
	int i=0;
	//while(l<h)
	//{
	//	a[i++]=*l++;	
	//}
	//while(l<p)
	//{
	//	if(*l!='*')
	//	{
	//		a[i++]=*l;
	//	}
	//	l++;
	//}
	//while(*l)
	//{
	//	a[i++]=*l++;
	//}
	//a[i]='\0';
	while(a<h)//复制前面的*
	{
		l[i++]=*a++;	
	}
	while(a<p)//复制h到p之间的非*
	{
		if(*a!='*')
		{
			l[i++]=*a;
		}
		a++;
	}
	while(*a)//寻找‘\0’
	{
		l[i++]=*a++;
	}
	l[i]='\0';
}
//输入“****A*BC*DEF*G*******”
void main()
{  char  s[81],*t, *f;
   void NONO (  );
   printf("Enter a string:\n");gets(s);
   t=f=s;
   while(*t)t++;//使t指向末尾'\0'
   t--;//使t指向'*'
   while(*t=='*')t--;//使t指向末尾第一个字母
   while(*f=='*')f++;//使f指向开头第一个字母


   fun( s , f,t );
   printf("The string after deleted:\n");puts(s);
   NONO();
}
void NONO()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
  FILE *in, *out ;
  int i ; char s[81], *t, *f ;
  in = fopen("in.dat","r") ;
  out = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fscanf(in, "%s", s) ;
    t=f=s;
    while(*t)t++;//使t指向末尾
    t--;
    while(*t=='*')t--;
    while(*f=='*')f++;
    fun(s, f, t);
    fprintf(out, "%s\n", s) ;    
  }
  fclose(in) ;
  fclose(out) ;
}

