#include <stdio.h>
#define N 6

int main()
{
	int i,j,t,a[N];
	printf("������%d��������\n",N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<N-1-i;j++)//�ҵ����ֵ�����һ��
		{
			if(a[j]>a[j+1])//��������
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("����֮��\n");
	for(i=0;i<N;i++)
		printf("%3d",a[i]);
	return 0;

}