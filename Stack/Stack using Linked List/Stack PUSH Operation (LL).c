#include <stdio.h>
struct node {
  int data;struct node *link;
}*top=NULL; //Stack is empty therefore TOP is NULL



void PUSH(int value){
  struct node *newNode;
  newNode=malloc(sizeof(newNode));
  if(newNode==NULL){  //check if there is no available memory space!
           printf("STACK OVERFLOW!");
           exit(1);}
  newNode->data=value;
  newNode->link=NULL;
  newNode->link=top;
  top=newNode;}



void printStack(){
struct node *temp;
temp=top;
printf("The stack is following: ");
while(temp!=NULL){
    printf("%d\t",temp->data);temp=temp->link;}}


int main(){
int value;
top=(struct node *)malloc(sizeof(struct node));
top->data=35;
top->link=NULL;
struct node *current=(struct node *)malloc(sizeof(struct node));
current->data=40;current->link=NULL;
top->link=current;
printf("The Stack is the following: %d\t%d\n",top->data,top->link->data);
printf("Enter the value to be inserted: ");
scanf("%d",&value);
PUSH(value);printStack();
}

