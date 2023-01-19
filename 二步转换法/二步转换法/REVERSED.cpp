#include <stdio.h>
#include <string.h>

void Reversed(char *a,char *b)
{
  char t=0;
  while(a<b)
  {
    t=*a;
    *a=*b;
    *b=t;
    a++;
    b--;
  }
}

int main()
{
  char a[100]={0};
  gets(a);
  int len=0;
  len=strlen(a);
  Reversed(a,a+len-1);
  puts(a);
  char *start=a;
  char *end =a;
  while(1)
  {
    while(*end!=' ' && *end!='\0')
    {
      end++;
    }
    Reversed(start,end-1);
    if(*end=='\0')
    {
      break;
    }
    else{start=++end;}
  }
  puts(a);
  getchar();

}