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
	while(a<h)//����ǰ���*
	{
		l[i++]=*a++;	
	}
	while(a<p)//����h��p֮��ķ�*
	{
		if(*a!='*')
		{
			l[i++]=*a;
		}
		a++;
	}
	while(*a)//Ѱ�ҡ�\0��
	{
		l[i++]=*a++;
	}
	l[i]='\0';
}
//���롰****A*BC*DEF*G*******��
void main()
{  char  s[81],*t, *f;
   void NONO (  );
   printf("Enter a string:\n");gets(s);
   t=f=s;
   while(*t)t++;//ʹtָ��ĩβ'\0'
   t--;//ʹtָ��'*'
   while(*t=='*')t--;//ʹtָ��ĩβ��һ����ĸ
   while(*f=='*')f++;//ʹfָ��ͷ��һ����ĸ


   fun( s , f,t );
   printf("The string after deleted:\n");puts(s);
   NONO();
}
void NONO()
{/* ���������ڴ��ļ����������ݣ����ú�����������ݣ��ر��ļ��� */
  FILE *in, *out ;
  int i ; char s[81], *t, *f ;
  in = fopen("in.dat","r") ;
  out = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fscanf(in, "%s", s) ;
    t=f=s;
    while(*t)t++;//ʹtָ��ĩβ
    t--;
    while(*t=='*')t--;
    while(*f=='*')f++;
    fun(s, f, t);
    fprintf(out, "%s\n", s) ;    
  }
  fclose(in) ;
  fclose(out) ;
}

