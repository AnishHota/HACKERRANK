#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int result;
struct tnode
{
  int data;
  tnode *left;
  tnode *right;
};
struct tnode *newnode(int data)
{
  struct tnode *node = new tnode;
  node->left = node->right = NULL;
  node->data = data;
  return node;
};
bool parse(struct tnode *node,tnode *l=NULL,tnode *r=NULL)
{
  if(node==NULL)
    return true;
  if(l!=NULL && l->data>node->data)
    {
      return false;
    }
  if(r!=NULL && r->data < node->data)
    {
      return false;
    }
  return parse(node->left,l,node) && parse(node->right,node,r);
}
void isbinarytree(struct tnode *top)
{
  cout<<parse(top);
}
int main()
{
  struct tnode *top = newnode(10);
  top->left = newnode(5);
  top->right = newnode(16);
  top->left->left = newnode(3);
  top->right->left = newnode(12);
  isbinarytree(top);
}
