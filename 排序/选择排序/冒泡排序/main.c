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
	for(i=0;i<N-1;i++)//ÿ�αȽ��ҳ���Сֵ�ŵ���ǰ��
	{
		for(j=i+1;j<N;j++)
		{
			if(a[i]>a[j])//��������
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("����֮��\n");
	for(i=0;i<N;i++)
		printf("%3d",a[i]);
	return 0;

}