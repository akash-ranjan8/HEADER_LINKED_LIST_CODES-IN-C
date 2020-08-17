#include<stdio.h>
#include<stdlib.h>
struct node
{ int roll,avg,mark1,mark2;
  int data;
  struct node *next;
};
struct node *head=NULL;
void create()
{ struct node *new,*t;
  int r,m1,m2;
  printf("enter the roll,marks1,marks2\n");
  scanf("%d%d%d",&r,&m1,&m2);
  new=(struct node*)malloc(sizeof(struct node));
  new->roll=r;
  new->mark1=m1;
  new->mark2=m2;
  int a=(m1+m2)/2;
  new->avg=a;
  new->next=NULL;
  head=(struct node*)malloc(sizeof(struct node));
  head->data=0;
  struct node *start=head->next;
  if(start==NULL)
  { 
    start=new;
    ++(head->data);
  }
  else
  { t=start;
    while(t!=NULL)
    { t=t->next;
    }
     t->next=new;
     ++(head->data);
   }
   head->next=start;
}
void display()
{ printf("%d",head->data);
  struct node *ptr;
  ptr=head->next;
  while(ptr!=NULL)
  { printf("\t%d%d%d%d",ptr->roll,ptr->mark1,ptr->mark2,ptr->avg);
    ptr=ptr->next;
   }
}
void main()
{ create();
  create();
  display();
}
  
  
      
