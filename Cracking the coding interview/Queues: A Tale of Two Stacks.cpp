#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

struct snode
{
  int data;
  struct snode *next;
};

void push(struct snode **top_ref, int x);
int pop(struct snode **top_ref);

struct queue
{
  struct snode *stack1;
  struct snode *stack2;
};

void enqueue(struct queue *q,int x)
{
  push(&q->stack1,x);
}

int dequeue(struct queue *q)
{
  int x;
  if(q->stack1 == NULL && q->stack2 == NULL )
  {
    cout<<"Empty";
    exit(0);
  }
  if(q->stack2 == NULL)
  {
    while(q->stack1!=NULL)
    {
      x = pop(&q->stack1);
      push(&q->stack2,x);
    }
  }
  x = pop(&q->stack2);
  return x;
}
int front(struct queue *q)
{
    int res;
    res=dequeue(q);
    push(&q->stack2,res);
    return res;
}

void push(struct snode **top_ref, int x)
{
  struct snode *new_node = (struct snode*)malloc(sizeof(struct snode));
  if(new_node == NULL)
  {
    cout<<"stack overflow";
    exit(0);
  }
  new_node->data = x;
  new_node->next = *top_ref;
  *top_ref = new_node;
}

int pop(struct snode **top_ref)
{
  int res;
  struct snode *top;
  if(*top_ref == NULL)
  {
    cout<<"stack overflow";
    exit(0);
  }
  top = *top_ref;
  res = top->data;
  *top_ref = top->next;
  free(top);
  return res;
}

int main()
{
  int n,x,query;
  struct queue *q = (struct queue*)malloc(sizeof(struct queue*));
  q->stack1 = NULL;
  q->stack2 = NULL;
  cin>>n;
  while(n!=0)
  {
    cin>>query;
    if(query==1)
    {
      cin>>x;
      enqueue(q,x);
    }
    else if(query==2)
    {
      cout<<dequeue(q);
    }
    else{
      cout<<front(q);
    }
    n=n-1;
  }
  return 0;
}
