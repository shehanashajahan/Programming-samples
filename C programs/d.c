#include<stdio.h>
#include<stdlib.h>


struct node{
int data;
struct node *next;
}*head;
void create(){
    head=NULL;
    struct node *newnode;
    struct node*temp;
    int value;
    scanf("%d",&value);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
        temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
}
 printf("created");
}
 int main(){
     int choice;
     scanf("%d",&choice);
     for(;;){
        switch (choice){
        case 1:
            create();
            break;
        case 2:
            exit(0);
            break;
        }
     }
 }
