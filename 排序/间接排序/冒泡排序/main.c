#include <stdio.h>
#define N 6

int main()
{
	int i,j,t,k,a[N];
	printf("请输入%d个整数：\n",N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<N-1;i++)//每次比较找出最小值放第最前面
	{
		k=i;
		for(j=i+1;j<N;j++)
		{
			if(a[k]>a[j])//升序排列
			{
				k=j;
			}
			if(i!=k)
			{
				t=a[k];
				a[k]=a[i];
				a[i]=t;
			}
		}
	}
	printf("排序之后：\n");
	for(i=0;i<N;i++)
		printf("%3d",a[i]);
	return 0;

}