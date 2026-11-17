#include <stdio.h>
struct node {
  int data;
  struct node *link;};


llsearch(struct node *head,int value){
struct node *ptr=head;
while(ptr!=NULL){
if(value==ptr->data){
    printf("Found!");}
ptr=ptr->link;
}

}


int main(){
  struct node *head =(struct node *)malloc(sizeof(struct node));
  head->data=20;
  head->link=NULL;
  struct node *current=(struct node *)malloc(sizeof(struct node));
  current->data=30;
  current->link=NULL;
  head->link=current;
  current=malloc(sizeof(struct node));
  current->data=40;
  current->link=NULL;
  head->link->link=current;
  int x; scanf("%d",&x);
  llsearch(head,x);
}
