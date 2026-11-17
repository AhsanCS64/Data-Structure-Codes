#include <stdio.h>
struct node {
   int data;struct node *link;};
void deletPosition(struct node **head,int position){
  struct node *current=*head;
  struct node *previous=*head;
  if(*head==NULL){
    printf("The Linked List is Empty!");}
  else if(position==1){
    *head=current->link;
    free(current);current=NULL;}
  else{
    while(position!=1){
            previous=current;current=current->link;position--;}
    previous->link=current->link;free(current);
    current=NULL;}}
printNode(struct node *head){
    if(head==NULL){
    printf("Empty List");}
    struct node *ptr;ptr=head;
    while(ptr!=NULL){
        printf("%d->",ptr->data);
        ptr=ptr->link;}}
int main(){
int position;
struct node *head=(struct node *)malloc(sizeof(struct node));
head->data=65;head->link=NULL;
struct node *current=(struct node *)malloc(sizeof(struct node));
current->data=63;
current->link=NULL;head->link=current;
current=malloc(sizeof(struct node));current->data=67;
current->link=NULL;head->link->link=current;
printf("%d -> %d -> %d\n",head->data,head->link->data,head->link->link->data);
printf("Enter the position to be deleted: ");scanf("%d",&position);
deletPosition(&head,position);printNode(head);}
