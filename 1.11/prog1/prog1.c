#include <stdio.h>
# define N  50
# define M  11
void fun(int *a,  int *b)
{
  int i=0,j=0;
  for(i=0;i<M;i++)
  {
	b[i]=0;//һ��Ҫ���г�ʼ��
  }
  for(i=0;i<N;i++)
  {
	  for(j=0;j<M-1;j++)
	  {
		  if((a[i]>=j*10+0) && (a[i]<=j*10+9))
		  {
			b[j]++;
		  }
	  }	
	  if(a[i]>=100)
	  {
		b[M-1]++;
	  }
	  // for(i=0;i<N;i++)
	  // if(a[i]>=100) 
   //     b[10]++;                                                      /*���������ڵ���100��b[10]����1*/
	  //else 
   //     b[a[i]/10]++;                                /*�������С��100������ֱ�ͳ�Ƶ�b[a[i]/10]��*/
  }
}
double  rnd()
{
  static int t=29,c=217,m=1024,r=0;
  r=(r*t+c)%m;  
  return((double)r/m);
}
void main()
{ 
  FILE *wf;
  int age[N], i,d[M];
  int b[N]={32,45,15,12,86,49,97,3,44,52,17,95,63};
  for(i=0; i<N; i++)  
     age[i]=(int)(115*rnd());     /*����һ���������������*/
  printf("The original data :\n");
  for(i=0; i<N; i++)  
     printf((i+1)%10==0? "%4d\n":"%4d",age[i]);   /*ÿ�����10����*/
  printf("\n\n");
  fun(age,d);
  for(i=0; i<10; i++)  
     printf("%4d---%4d  :%4d\n", i*10, i*10+9,d[i]);
  printf("Over 100  :  %4d\n",d[10]);
/******************************/
  wf=fopen("out.dat","w");
  fun(b,d);
  for(i=0; i<10; i++)  
     fprintf(wf,"%4d---%4d  :%4d\n", i*10, i*10+9,d[i]);
  fprintf(wf,"Over 100  :  %4d",d[10]);
  fclose(wf);
/*****************************/
}
