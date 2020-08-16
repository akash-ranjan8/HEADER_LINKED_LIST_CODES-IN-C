#include<stdio.h>
#include<stdlib.h>
struct node
{ int data;
  struct node *next;
};
struct node *head=NULL;
void create(int k)
{ struct node *new,*t,*start;
  head=(struct node*)malloc(sizeof(struct node));
  head->data=0;
  start=head->next;
  new=(struct node*)malloc(sizeof(struct node));
  new->data=k;
  new->next=NULL;
  head->next=new;
  if(start==NULL)
  { start=new;
    (head->data)++;
   }
  else
  { t=head;
    while(t->next!=NULL)
    { t=t->next;
    }
    t->next=new;
    t=new;
    (head->data)++;
  }
}    
void display()
{ struct node *ptr;
  ptr=head;
  while(ptr!=NULL)
  { printf("\t%d",ptr->data);
    ptr=ptr->next;
  }
}
void main()
{ create(1);
  create(2);
  create(3);
  create(4);
  create(5);
  create(6);
  display();
}
