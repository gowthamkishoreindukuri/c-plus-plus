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

node *root = new node(1);

void preorder(node* tmp)
{
    if(tmp==NULL)
    {
        return ;
    }
    cout<<tmp->data<<" ";
    preorder(tmp->left);
    preorder(tmp->right);
}

void preordernc(node* tmp)
{

}

void inorder(node*tmp)
{
    if(tmp==NULL)
    {
        return ;
    }

    preorder(tmp->left);
    cout<<tmp->data<<" ";
    preorder(tmp->right);
}

void inordernc(node*tmp)
{

}

void postorder(node*tmp)
{
    if(tmp==NULL)
    {
        return ;
    }

    preorder(tmp->left);
    preorder(tmp->right);
    cout<<tmp->data<<" ";
}

void postordernc(node*tmp)
{

}

void lorder(node*tmp)
{
    if(tmp==NULL)
    {
        return ;
    }
    queue<node*> q;
    node* t;
    q.push(root);
    while(!q.empty())
    {
        t=q.front();
        q.pop();
        cout<<t->data<<" ";
        if(t->left)
        {
            q.push(t->left);
        }
        if(t->right)
        {
            q.push(t->right);
        }
    }
    return ;
}

void rlorder(node* tmp)
{
    stack<int> s;
    if(tmp==NULL)
    {
        return ;
    }
    queue<node*> q;
    node* t;
    q.push(root);
    while(!q.empty())
    {
        t=q.front();
        q.pop();
        s.push(t->data);
        if(t->left)
        {
            q.push(t->left);
        }
        if(t->right)
        {
            q.push(t->right);
        }
    }
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}

int height(node* tmp)
{
    if(tmp==NULL)
    {
        return 0;
    }
    int lh = height(tmp->left);
    int rh = height(tmp->right);
    return max(lh,rh)+1;
}

int diameter(node* tmp)
{
    if(tmp==NULL)
    {
        return 0;
    }
    int lh = height(tmp->left);
    int rh = height(tmp->right);
    int ld= diameter(tmp->left);
    int rd = diameter(tmp->right);
    return max((1+lh+rh),max(ld,rd));
    //return (lh+rh+1);
}

bool isavailable(node*tmp,int val)
{
    if(!tmp)
    {
        return false;
    }
    if(tmp->data==val || isavailable(tmp->left,val) || isavailable(tmp->right,val) )
    {
        return true;
    }
    return false;
}

bool isbalanced(node* tmp)
{
    if(tmp==NULL)
    {
        return true;
    }
    int lh = height(tmp->left);
    int rh = height(tmp->right);
    if(abs(lh-rh)<=1 && isbalanced(tmp->left) && isbalanced(tmp->right))
    {
        return true;
    }
    return false;
}

int mx(node* tmp)
{
    if(!tmp)
    {
        return INT_MIN;
    }
    int res = tmp->data;
    int lm = mx(tmp->left);
    int rm = mx(tmp->right);
    res= max(res,max(lm,rm));
    return res;
}
int mn(node* tmp)
{
    if(!tmp)
    {
        return INT_MIN;
    }
    int res = tmp->data;
    int lm = mx(tmp->left);
    int rm = mx(tmp->right);
    res= min(res,min(lm,rm));
    return res;
}

void insertion(int val)
{
    if(root==NULL)
    {
        root = new node(val);
        return;
    }
    queue<node*> q;
    node*tmp;
    q.push(root);
    while(!q.empty())
    {
        tmp=q.front();
        q.pop();
        if(tmp->left)
        {
            q.push(tmp->left);
        }
        else{
            tmp->left = new node(val);
            return;
        }
        if(tmp->right)
        {
            q.push(tmp->right);
        }
        else{
            tmp->right = new node(val);
            return;
        }
    }
    return ;
}

void deletion(int val)
{

}

void printgivenlevel(node* tmp,int lev)
{
    int h = height(tmp);
    if(lev>h)
    {
        cout<<"this level is not available"<<endl;
        return;
    }
    if (tmp == NULL)
        return;
    if (lev == 1)
        cout << tmp->data << " ";
    else if (lev > 1)
    {
        printgivenlevel(tmp->left, lev-1);
        printgivenlevel(tmp->right, lev-1);
    }

}

void lsp(node*tmp)
{
        if(!tmp)
        {
            return;
        }
        stack<node*> s1;
        stack<node*> s2;
        node*t;
        s1.push(root);
        while(!s1.empty() || !s2.empty())
        {
            while(!s1.empty())
            {
                t=s1.top();
                cout<<t->data<<" ";
                s1.pop();
                if(t->right)
                {
                    s2.push(t->right);
                }
                if(t->left)
                {
                    s2.push(t->left);
                }
            }
            while(!s2.empty())
            {
                t=s2.top();
                s2.pop();
                cout<<t->data<<" ";
                if(t->left)
                {
                    s1.push(t->left);
                }
                if(t->right)
                {
                    s1.push(t->right);
                }
            }
        }
}


void print(node* tmp)
{
    cout<<"preorder : ";
    preorder(tmp);
    cout<<endl;
    cout<<"preordernc : ";
    preordernc(tmp);
    cout<<endl;
    cout<<"inorder : ";
    inorder(tmp);
    cout<<endl;
    cout<<"inordernc : ";
    inordernc(tmp);
    cout<<endl;
    cout<<"postorder : ";
    postorder(tmp);
    cout<<endl;
    cout<<"postordernc : ";
    postordernc(tmp);
    cout<<endl;
    cout<<"levelorder : ";
    lorder(tmp);
    cout<<endl;
    cout<<"rev level order : ";
    rlorder(tmp);
    cout<<endl;
    cout<<"height : ";
    cout<< height(tmp)<<endl;
    cout<<"Diameter : ";
    cout<< diameter(tmp)<<endl;
    isbalanced(tmp)?cout<<"Balanced tree"<<endl:cout<<"Not Balanced Tree"<<endl;
    cout<<"Maximum element : "<<mx(tmp)<<endl;
    cout<<"Minimum element : "<<mn(tmp)<<endl;
    isavailable(tmp,2)?cout<<"Available in tree"<<endl:cout<<"Not available in Tree"<<endl;
    isavailable(tmp,10)?cout<<"Available in tree"<<endl:cout<<"Not available in Tree"<<endl;
    cout<<"print level : ";
    printgivenlevel(tmp,3);
    cout<<endl;
    cout<<"spiral level order : ";
    lsp(tmp);
    cout<<endl;
}
int main()
{
    root->left=new node(2);
    root->right=new node(3);
    root->left->left = new node(4);
    //root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    //root->left->left->left = new node(8);
    insertion(5);
    print(root);

}
