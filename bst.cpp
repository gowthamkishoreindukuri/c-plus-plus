#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node* left;
    node*right;
    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

node* root = new node(1);

void print()
{

}

int main()
{
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
}
