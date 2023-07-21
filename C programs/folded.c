#include<stdio.h>
#include<stdlib.h>
struct node
{
    //completed
    int data;
    struct node *next;
    struct node *prev;
}*temp,*newnode,*head,*temp1,*tail;
void main()
{
    int n;
    scanf("%d",&n);
    printf("ELEMENTS : ");
    for(int i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        newnode->prev=NULL;
        if(head==NULL)
        {

            head=newnode;
            temp=newnode;
            tail=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
            tail=newnode;
        }
    }
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    temp=head;
    temp1=tail;
    for(int i=1;i<=n/2+1;i++)
    {
        if(temp->data==temp1->data)
        {
            printf("%d",temp->data);
        }
        else
        {
             printf("%d ",temp->data);
            temp=temp->next;
            printf("%d ",temp1->data);
            temp1=temp1->prev;

        }


    }
}
