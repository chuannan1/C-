#include  <stdio.h>
#include  <stdlib.h>
#define    N    6
typedef struct node {
  int  data;
  struct node  *next;
} NODE;
void fun(NODE  *h)
{ NODE  *p, *q;    int  t;//h为头节点
/**********found**********/
p = h->next ;//使p指向第一个节点
  while (p) {
/**********found**********/
	  q = p->next ;//使q指向下一个节点
     while (q) {
/**********found**********/
        if (p->data > q->data)//将当前p的节点值和他后面所以的值比较，找到最小值
        {  t = p->data;  p->data = q->data;  q->data = t;  }
        q = q->next;//使q的节点向后移动
    }
    p = p->next;//指向下一个节点
  }
}
NODE *creatlist(int  a[])
{  NODE  *h,*p,*q;        int  i;
  h = (NODE *)malloc(sizeof(NODE));
  h->next = NULL;
  for(i=0; i<N; i++)
  {  q=(NODE *)malloc(sizeof(NODE));
     q->data=a[i];
     q->next = NULL;
     if (h->next == NULL)  h->next = p = q;
     else    {  p->next = q;  p = q;   }
  }
   return  h;
}
void outlist(NODE  *h)
{ NODE  *p;
  p = h->next;
  if (p==NULL)  printf("The list is NULL!\n");
  else
  {  printf("\nHead  ");
     do
     {  printf("->%d", p->data); p=p->next;  }
     while(p!=NULL);
     printf("->End\n");
  }
}
void main()
{  NODE  *head;
   int  a[N]= {0, 10, 4, 2, 8, 6 };
   head=creatlist(a);
   printf("\nThe original list:\n");
   outlist(head);
   fun(head);
   printf("\nThe list after sorting :\n");
   outlist(head);
}

