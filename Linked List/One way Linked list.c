#include <stdio.h>
struct node{
  int data;
  struct node *link;
};
int main(){
    struct node *head=(struct node *)malloc(sizeof(struct node));
    head -> data=65;
    head -> link=NULL;
    struct node *current=(struct node *)malloc(sizeof(struct node));
    current -> data= 63;
    current -> link= NULL;
    head->link=current;
    current = malloc(sizeof(struct node));
    current -> data=67;
    current -> link=NULL;
    head->link->link=current;

    current=malloc(sizeof(struct node));
    current->data=59;
    current->link=NULL;
    head->link->link->link=current;
}
