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
	for(i=0;i<N-1;i++)//每次比较找出最小值放第最前面
	{
		for(j=i+1;j<N;j++)
		{
			if(a[i]>a[j])//升序排列
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("排序之后：\n");
	for(i=0;i<N;i++)
		printf("%3d",a[i]);
	return 0;

}