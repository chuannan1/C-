#include <stdio.h>

int main()
{
	int a=0,i=0;
	double sum=0, b=1;
	printf("请输入a的值：");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		b*=i;
		sum+=b;
	}
	printf("sum的值为%lf",sum);

}