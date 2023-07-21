#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
struct node *prev;
}*head,*tail;

void insertbeginning(){
struct node *newnode;
(struct node*)malloc(sizeof(struct node));
printf("ENTER THE DATA:");
scanf("%d",&newnode->data);

if(head==NULL){
head,tail=newnode;
newnode->prev=tail;
newnode->next=head;
}
else{
newnode->next=head;
head->prev=newnode;
newnode->prev=tail;
tail->next=newnode;
head=newnode;
}
}
int main() {
    insertbeginning();
    return 0;
}

