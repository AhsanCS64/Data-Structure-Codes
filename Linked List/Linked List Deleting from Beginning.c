#include <stdio.h>
struct node {
   int data;
   struct node *link;
};
struct node* deleteNodeBeg(struct node *head){
    if(head==NULL){
        printf("List is Empty!");}
    else{
         struct node *temp=head;
         head=head->link;
         free(temp);
         temp=NULL;}
 return head;}
printList(struct node *head){
 if(head==NULL){
    printf("List is Empty");}
 struct node *ptr;
 ptr=head;
 while(ptr!=NULL){
    printf("%d->",ptr->data);
    ptr=ptr->link;}}
int main(){
  struct node *head=(struct node *)malloc(sizeof(struct node));
  head->data=65;
  head->link=NULL;
  struct node *current=malloc(sizeof(struct node));
  current->data=63;
  current->link=NULL;
  head->link=current;
  current=malloc(sizeof(struct node));
  current->data=64;
  current->link=NULL;
  head->link->link=current;
head=deleteNodeBeg(head);
printList(head);
}

