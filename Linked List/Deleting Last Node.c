#include <stdio.h>
struct node {
   int data;
   struct node *link;};
deleteNode(struct node *head){
  if(head==NULL){
    printf("Linked List is Empty");}
  else if(head->link==NULL){
    free(head);
    head=NULL;}
  else{
        struct node *temp=head;
        struct node *temp2=head;
    while(temp->link!=NULL){
        temp2=temp;
        temp=temp->link;}
    temp2->link=NULL;
    free(temp);
    temp=NULL;}}
printList(struct node *head){
 if(head==NULL){
    printf("List is Empty");}
 struct node *ptr;
 ptr=head;
 while(ptr!=NULL){
    printf("%d->",ptr->data);ptr=ptr->link;}}
int main(){
  struct node *head=(struct node *)malloc(sizeof(struct node));
  head->data=65;head->link=NULL;
  struct node *current=malloc(sizeof(struct node));
  current->data=63;
  current->link=NULL;head->link=current;
  current=malloc(sizeof(struct node));
  current->data=64;
  current->link=NULL;head->link->link=current;
  deleteNode(head); //Will delete the last Node data=64
  printList(head);
}
