#include <stdio.h>
struct node{
  int data;
  struct node *link;
};
void printNode(struct node *head){
 if(head==NULL){
    printf("The linked list is not initialized!");
 }
 struct node *ptr=NULL;
 ptr=head;
 while(ptr!=NULL){
    printf("%d->",ptr->data);
    ptr=ptr->link;}
if(ptr==NULL){printf("[NULL NODE]");}}
int main(){
struct node *head=(struct node *)malloc(sizeof(struct node));
head->data=65;
head->link=NULL;
struct node *current=(struct node *)malloc(sizeof(struct node));
current->data=63;
current->link=NULL;
head->link=current;
current=malloc(sizeof(struct node));
current->data=64;
current->link=NULL;
head->link->link=current;
printNode(head);}
