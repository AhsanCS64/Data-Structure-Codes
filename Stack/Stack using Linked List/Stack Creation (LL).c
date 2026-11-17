#include <stdio.h>
struct node {
  int data;
  struct node *link;

}*top=NULL; //Stack is empty therefore TOP is NULL

int main(){
top=(struct node *)malloc(sizeof(struct node));
top->data=35;
top->link=NULL;
struct node *current=(struct node *)malloc(sizeof(struct node));
current->data=40;
current->link=NULL;
top->link=current;
printf("%d",top->link->data);
}
