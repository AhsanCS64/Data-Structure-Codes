#include <stdio.h>
struct node{
 int data;
 struct node *link;
};
addNodeBeg(struct node **head,int value){
 struct node *ptr=malloc(sizeof(struct node));
 ptr->data=value;
 ptr->link=NULL;
 ptr->link=*head;
 *head = ptr;
 return head;}
printNode(struct node *head){
 if(head==NULL){
    printf("Empty linked list!");}
 struct node *ptr=NULL;
 ptr=head;
 while(ptr!=NULL){
    printf("%d->",ptr->data);
    ptr=ptr->link;}}
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
printf("Enter the number of nodes you want to add at the Beginning: ");
scanf("%d",&n);
for(int i=0;i<n;i++){
        scanf("%d",&c);
        addNodeBeg(&head,c);}
printNode(head);}
