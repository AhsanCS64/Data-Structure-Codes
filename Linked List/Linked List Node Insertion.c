#include <stdio.h>

struct node{

 int data;
 struct node *link;

};
addNode(struct node *head,int value){
 struct node *ptr,*temp;
 ptr=head;

 temp=(struct node *)malloc(sizeof(struct node));
 temp->data=value;
 temp->link=NULL;

 while(ptr->link!=NULL){
    ptr=ptr->link;
 }
 ptr->link=temp;
}


printNode(struct node *head){
 if(head==NULL){
    printf("Empty linked list!");
 }

 struct node *ptr=NULL;
 ptr=head;
 while(ptr!=NULL){
    printf("%d->",ptr->data);
    ptr=ptr->link;
 }

}

int main(){
int n,c;
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

printf("Linked List Initially: ");
printNode(head);
printf("\n");
printf("Enter the number of nodes you want to add at the END: ");
scanf("%d",&n);


for(int i=0;i<n;i++){
        scanf("%d",&c);
        addNode(head,c);
}

printNode(head);
}
