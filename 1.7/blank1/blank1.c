#include <stdio.h>
#include <string.h>
#define    M    5
#define    N    20
/**********found**********/
int fun(char  (*ss)[N], int  *n)//(*ss)ָ��ָ���λ����ĵ�һ���ַ��������飩��[N]Ϊÿһ���ĸ���
{  int  i, k=0, len=0;
   for(i=0; i<M; i++)
   {  len=strlen(ss[i]);
/**********found**********/
      if(i==0)  *n=len;
      if(len>*n) {
/**********found**********/
         *n=len;
         k=i;
      }
   }
   return(k);
}
void main()
{  char  ss[M][N]={"shanghai","guangzhou","beijing","tianjing","cchongqing"};
   int  n,k,i;
   printf("\nThe original strings are :\n");
   for(i=0;i<M;i++)puts(ss[i]);
   k=fun(ss,&n);
   printf("\nThe length of longest string is :  %d\n",n);
   printf("\nThe longest string is :  %s\n",ss[k]);
}

