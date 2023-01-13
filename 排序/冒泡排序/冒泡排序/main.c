#include <stdio.h>
#define N 6

int main()
{
	int i,j,t,a[N];
	printf("请输入%d个整数：\n",N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<N-1-i;j++)//找到最大值放最后一个
		{
			if(a[j]>a[j+1])//升序排列
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("排序之后：\n");
	for(i=0;i<N;i++)
		printf("%3d",a[i]);
	return 0;

}