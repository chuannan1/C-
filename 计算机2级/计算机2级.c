#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
void fun(int m,int k,int xx[])
{
	/*int i=0,j=0,a=0,b=k;
	for(i=m+1;i>0;i++)//ʹ��һֱ����m
	{
		if(k==0)//��k=0ʱ����ѭ��  ��ʱ�ҵ�����m��k������
		{
			break;
		}
		for(j=2;j<i;j++)//�ж��Ƿ�Ϊ���� ������aһֱΪ0
		{
			if(i%j==0)
			{
				a++;
			}
		}
		if(a==0)//����������ʱ ����Ϊ����
		{
			xx[b-k]=i;
			k--;
		}
		a=0;
	}*/
	int i=0,n=0,j=0;
	for(i=m+1,n=0;n<k;i++)//�Ҵ���m��k������
	{
		for(j=2;j<i;j++)//���Ƿ�Ϊ����
		{
			if(i%j==0)//������������ѭ��
			{
				break;
			}
		}
		if(j>=i)//�ж������Ƿ��ҵ�������    ��������ʱΪ�ҵ�
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
