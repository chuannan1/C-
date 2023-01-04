#include  <math.h>
#include  <stdio.h>
double fun(double x)
{ 
	double S=1+0.5*x;
	double t=0.5*x;
	double a=0;
	int n=1;
	do
	{
		a=S;
		n++;
		t*=x*(0.5-n+1)/n;
		S+=t;	
	}while(fabs(S-a)>0.000001);
	return S;
}
void main()
{ int i;
  double x,s;
  FILE *out;
  printf("Input x: ");
  scanf("%lf",&x);
  s=fun(x);
  printf("s=%f\n ",s);
  /******************************/				 /*这里包含输出文件程序*/
  out=fopen("out.dat","w");
  for(i=20;i<30;i++)
    	fprintf(out,"%f\n",fun(i/100.0));
  fclose(out);
  /******************************/
}

