#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node* left;
    node* right;
    node(int val)
    {
        data=val;
        left =NULL;
        right=NULL;
    }
};

node *root = NULL;

void preorder(node* tmp)
{

}

void preordernc(node* tmp)
{

}

void inorder(node*tmp)
{

}

void inordernc(node*tmp)
{

}

void postorder(node*tmp)
{

}

void postordernc(node*tmp)
{

}

int main()
{
    root->data=1;
    root->left=new node(2);
    root->right=new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

}
