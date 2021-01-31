#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node* next;
    int length(node* tmp);
    void print(node* tmp);
    void addatend(int val,node tmp);
    void addatbegin(int val,node* tmp);
    node(int val);
};

int node:: length(node*tmp)
{
    int res=0;
    while(tmp!=NULL)
    {
        tmp=tmp->next;
        res++;
    }
    return res;
}

void node:: print(node*tmp)
{
    while(tmp!=NULL)
    {
        cout<<tmp->data<<" ";
    }
    cout<<endl;
    return;
}

node::node(int val)
{
 data=val;
 next=NULL;
}

void node::addatbegin(int val,node*tmp)
{
    node * nn = new node(val);
    nn->next=tmp;
    tmp=nn;
    return;
}

void node::addatend(int val,node tmp)
{
    node*nn = new node(val);
    node tp=tmp;
    while(tp->next!=NULL)
    {
        tp=tp->next;
    }
    tp->next=nn;
    return ;
}

int main()
{
    node root(1);
    root.addatend(2,root);

}
