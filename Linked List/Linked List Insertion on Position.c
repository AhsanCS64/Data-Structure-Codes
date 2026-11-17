#include <stdio.h>


struct node {
   int data;
   struct node *link;
};
void addPosition(struct node **head,int value,int position){
   struct node *ptr=head;
   struct node *ptr2=(struct node *)malloc(sizeof(struct node));
   ptr2->data=value;
   ptr2->link=NULL;

   position--;
   while(position!=1){
        ptr=ptr->link;
        position--;
   }
   ptr2->link=ptr->link;
   ptr->link=ptr2;
}

printNode(struct node *head){
    if(head==NULL){
    printf("Empty List");
    }
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL){
        printf("%d->",ptr->data);
        ptr=ptr->link;
    }

}

int main(){

int position,value;

struct node *head=(struct node *)malloc(sizeof(struct node));
head->data=65;
head->link=NULL;

struct node *current=(struct node *)malloc(sizeof(struct node));
current->data=63;
current->link=NULL;
head->link=current;

current=malloc(sizeof(struct node));
current->data=67;
current->link=NULL;
head->link->link=current;

printf("%d -> %d -> %d\n",head->data,head->link->data,head->link->link->data);
printf("Enter the position to be to be inserted: ");
scanf("%d",&position);
printf("Enter the Value: ");
scanf("%d",&value);

addPosition(head,value,position);
printNode(head);
}

