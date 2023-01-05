#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#define N 10
typedef struct ss    /*定义结构体*/
{ char num[10]; 
  int s;
} STU;
void fun(STU a[], STU *s)
{
	int i,k=0,x=0;
	for(i=0;i<N;i++)
	{
		if(k<a[i].s)//调用结构体参数对应变量
		{
			k=a[i].s;
			x=i;
		}
	}
	*s=a[x];//结构体整体赋值
	////int i;
 //// *s=a[0];        
 //// for(i=0;i<N;i++)    /*找出成绩最高的学生记录*/
 ////    if(s->s<a[i].s)
 //// *s=a[i];
}
void main()
{ 
  FILE *wf;
  STU a[N]={{ "A01",81},{ "A02",89},{ "A03",66},{ "A04",87},{ "A05",77},
  { "A06",90},{ "A07",79},{ "A08",61},{ "A09",80},{ "A10",71}},m;
  int i;
  system("CLS");
  printf("*****The original data*****");
  for(i=0;i<N;i++) 
     printf("No=%s Mark=%d\n", a[i].num,a[i].s);
  fun(a,&m);
  printf("*****THE RESULT*****\n");
  printf("The top :%s, %d\n",m.num,m.s);
/******************************/
  wf=fopen("out.dat","w");
  fprintf(wf,"%s,%d",m.num,m.s);
  fclose(wf);
/*****************************/
}
