
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;};

struct node *create(int a)
{
    struct node *root;
    struct node *temp;
    //root=(struct node*)malloc(sizeof(struct node*));
    int j,d1;
    for(j=0;j<a;j++)
    {
        scanf("%d",&d1);
        struct node *temp1=(struct node*)malloc(sizeof(struct node*));
        temp1->data=d1;
        temp1->next=NULL;
        if(j==0)
        {
        temp=temp1;
        root=temp;
        }
        else
        {
            temp->next=temp1;
            temp=temp->next;
        }
    }
    return(root);
}

struct node *reverse(struct node *head)
{
   struct node *temp,*temp1;
   temp=head;
   temp1=temp->next;
   temp->next=NULL;

   while(temp1->next!=NULL)
   {
       struct node *temp2;
       temp2=temp1->next;
       temp1->next=temp;
       temp=temp1;
       temp1=temp2;
   }
   temp1->next=temp;
   head=temp1;
   return(head);
}

void printList(struct node *n)
{
    while (n != NULL)
    {
        printf("%d  ", n->data);
        n = n->next;
    }
    printf("\n");
    }

int main()
{
    struct node *root;
    int n;
    scanf("%d",&n);
    root=create(n);
    printList(root);
    root=reverse(root);
    printList(root);
}
