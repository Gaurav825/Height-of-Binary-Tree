/* Author ->CodeGO
**********************
********************* 
calculat Height of binary tree */
#include<bits/stdc++.h>

using namespace std;
class node
{
    public:
    int data;
    node *left,*right;
};
int height(node*root);
node *create( int x)
{
    node *newnode=new node();
    newnode->data=x;
    newnode->left=NULL;
    newnode->right=NULL;
    return(newnode);
    
}
int height(node *root)
{
    if(root==NULL)
    return 0;
    else
   { int lheight=height(root->left);
    int rheight=height(root->right);
    if(lheight>rheight)
    return lheight+1;
    else
    return rheight+1;
   }
}

int main()
{
    node * root=create(1);
    root->left=create(2);
    root->right=create(3);
    root->left->right=create(5);
    root->right->right=create(8);
    cout<<height(root)<<"\n";
   
   
   return 0;
}
