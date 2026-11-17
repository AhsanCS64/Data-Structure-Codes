#include <stdio.h>
struct node {
  int data;
  struct node *link;
}*top=NULL; //Stack is empty therefore TOP is NULL



void POP(){
    if(top==NULL){
        printf("STACK UNDERFLOW!");
        exit(1);}
    else{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp=top;
    int val=temp->data;
    top=top->link;
    free(temp);
    temp=NULL;return val;}}



void printStack(){
struct node *temp;
temp=top;
printf("The stack is following: ");
while(temp!=NULL){
    printf("%d\t",temp->data);
    temp=temp->link;}}



int main(){
int value;
top=(struct node *)malloc(sizeof(struct node));
top->data=35;
top->link=NULL;
struct node *current=(struct node *)malloc(sizeof(struct node));
current->data=40;
current->link=NULL;top->link=current;
printf("The Stack is the following: %d\t%d\n",top->data,top->link->data);
POP();
printStack();}

