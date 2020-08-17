#include<stdio.h>
#include<stdlib.h>
struct node 
{ int data;
  struct node *next;
}*head;
void create(int n)
{ int k,i;
  struct node *new,*prev;
  head=(struct node*)malloc(sizeof(struct node));
  head->data=n;
  head->next=NULL;
  prev=head;
  for(i=2;i<=n+1;++i)
  {  printf("enter the data\n");
     scanf("%d",&k);
     new=(struct node*)malloc(sizeof(struct node));
     new->data=k;
     new->next=NULL;
     prev->next=new;
     prev=new;
  }
  prev->next=head;
}
void display()
{ struct node *ptr=head;
  do
  { printf("%d\t",ptr->data);
    ptr=ptr->next;
  }while(ptr!=head);
}
int main()
{ int n;
  printf("enter the no. of nodes\n");
  scanf("%d",&n);
  create(n);
  display();
  return 0;
}
