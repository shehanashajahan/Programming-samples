#include<stdio.h>
#include<stdlib.h>
struct functions
{
    //reverse
    int data;
    struct functions *next;
    struct functions *prev;

}*head,*newnode,*temp;

void main()
{
    int n;
    scanf("%d",&n);
    int i;
    printf("ELEMENTS : ");
    for(i=0;i<n;i++)
    {
        newnode=(struct functions*)malloc(sizeof(struct functions));
        scanf("%d",&newnode->data);
        newnode->prev=NULL;
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            newnode->next=head;
            head->prev=newnode;
            head=newnode;
        }
    }
    temp = head;
    while(temp==NULL)
    {
        printf("%d ",&temp->data);
        temp = temp->prev;
    }
}
