#include <stdio.h>

struct node{

int data;
struct node *link;

};
struct node *front=0;
struct node *rear=0;



void enqueue(int x){

struct node *newnode;
newnode=(struct node *)malloc(sizeof(struct node));
newnode->data=x;
newnode->link=NULL;

if(front==0 && rear==0){
    front=rear=newnode;
}
else{
    rear->link=newnode;
    rear=newnode;
}
}


void dequeue(){
    struct node *temp=front;
    if(front==0 && rear==0){printf("UNDERFLOW");}
    else{
        front=temp->link;
        free(temp);
    }
}


void display(){
struct node *temp;
if(front==0 && rear==0){printf("Empty list");}
else{temp=front;
 while(temp!=0){
    printf("%d->",temp->data);
    temp=temp->link;
 }
}
}

int main(){
int data,value;


while(1){
    printf("Enter your choice 1.Enqueue 2.Dequeue\n");
    switch(scanf("%d",&data)){
    case 1: enqueue(scanf("%d",&value)); break;

    }
}


}
