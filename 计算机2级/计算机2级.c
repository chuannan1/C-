#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
void fun(int m,int k,int xx[])
{
	/*int i=0,j=0,a=0,b=k;
	for(i=m+1;i>0;i++)//使数一直大于m
	{
		if(k==0)//当k=0时跳出循环  此时找到大于m的k个素数
		{
			break;
		}
		for(j=2;j<i;j++)//判断是否为素数 不是则a一直为0
		{
			if(i%j==0)
			{
				a++;
			}
		}
		if(a==0)//当条件成立时 该数为素数
		{
			xx[b-k]=i;
			k--;
		}
		a=0;
	}*/
	int i=0,n=0,j=0;
	for(i=m+1,n=0;n<k;i++)//找大于m的k个素数
	{
		for(j=2;j<i;j++)//找是否为素数
		{
			if(i%j==0)//不是素数跳出循环
			{
				break;
			}
		}
		if(j>=i)//判断上面是否找到了素数    条件成立时为找到
		{
			xx[n]=i;
			n++;
		}
	}
}
void main()
{
  FILE *wf;
  int m,n,zz[1000];
  system("CLS");
  printf("\nPlease enter two integers: ");
  scanf("%d%d",&m,&n);
  fun(m, n, zz);
  for(m=0;m<n;m++)
     printf("%d ",zz[m]);
  printf("\n ");
/******************************/
  wf=fopen("out.dat","w");
  fun(17,5,zz);
  for(m=0;m<5;m++)
     fprintf(wf,"%d ",zz[m]);
  fclose(wf);
/*****************************/
}
