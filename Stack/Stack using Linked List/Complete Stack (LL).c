#include <stdio.h>

struct node {
  int data;
  struct node *link;

}*top=NULL; //Stack is empty therefore TOP is NULL


void PUSH(int value){
  struct node *newNode;
  newNode=malloc(sizeof(newNode));
  if(newNode==NULL){  //check if there is no available memory space!

           printf("STACK OVERFLOW!");
           exit(1);
  }
  newNode->data=value;
  newNode->link=NULL;

  newNode->link=top;
  top=newNode;
}

int POP(){
     if(top==NULL){
        printf("STACK UNDERFLOW!");
        exit(1);
    }

    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp=top;
    int val=temp->data;
    top=top->link;
    free(temp);
    temp=NULL;
    return val;
    }

void topValue(){
if(top==NULL){
    printf("STACK UNDERFLOW!");
}
return top->data;
}


void printStack(){
struct node *temp;
temp=top;
printf("The stack is following: ");
while(temp!=NULL){
    printf("%d\t",temp->data);
    temp=temp->link;
}


}

int main(){
    int choice,value;
    while(1){

        printf("\n");
        printf("1. Push\n2. POP\n3. Print top Element\n4. Print All Elements\n5. Exit\n");
        printf("Choice: ");
        scanf("%d",&choice);

        switch(choice){
        case 1:
            printf("Enter the Element: " );
            scanf("%d",&value);
            PUSH(value);
            break;
        case 2:
            value=POP();
            printf("%d is deleted",value);
            break;
        case 3:
            printf("The TOP element is: ");
            topValue();
            break;
        case 4:
            printf("The current STACK: ");
            printStack();
            break;
        case 5:
            exit(1);

        default:
            printf("Are bhai jei choice dite koisi oida dena?!");

    }


}
}

