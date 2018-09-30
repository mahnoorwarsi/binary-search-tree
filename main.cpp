#include<iostream>
using namespace std;

struct btnode
{
  int data;
  btnode *left;
  btnode *right;
};


btnode * getnode(btnode **root,int val)
 {
   btnode *current=*root;
   while(current->left!=NULL  || current->right!=NULL)
    {
      if(current->data >= val)
      {
        current=current->left;
      }
      else if(current->data < val)
      {
        current=current->right;
      }
    }
    return current;
    cout<<"value found"<<endl;
  }

void insert(btnode **root,int val)
{
 btnode *ptr=new btnode();
  int data=0;
  btnode *left=NULL;
  btnode *right=NULL;

  if(*root==NULL)
  {
    *root=ptr;
  }
  else 
  {
    btnode *current=getnode(root,val);
    
 
    if(current->data > val )
    {
      current->left=ptr;
    }
    else if(current->data < val)
    {
      current->right=ptr;
    }
  }

}

void print(btnode *root)
  {
    btnode *current=root;
    cout<<"Root Value : "<<root->data <<endl;
    cout<<"Root Left Value : "<<(root->left)->data <<endl;
    cout<<"Root Right Value : "<<(root->right)->data <<endl;
    root=root->left;
    cout<<"Root left Left Value : "<<(root->left)->data <<endl;
    cout<<"Root left Right Value : "<<(root->right)->data <<endl;
    

  }




int main()
{
  btnode **root=NULL;
  btnode *current=NULL;
  insert(&root,6);
  getnode(&current,6);
  getnode(&current,2);
  print(root);
}