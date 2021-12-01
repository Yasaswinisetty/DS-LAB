#include <stdio.h>
#include <stdlib.h>
typedef struct stack{
    int data;
    struct stack *link;
}node;

node *top = NULL;

void push(){
    int ele;
    node *p = malloc(sizeof(node));
    printf("Enter the element to be pushed:");
    scanf("%d",&ele);
    
    p->data = ele;
    p->link = top;
    top = p;
}

void pop(){
    node *t = top;
    if(top == NULL){
        printf("stack underflow");
    }
    else{
        printf("%d is deleted",t->data);
        top = top->link;
        free(t);
    }
}

void display(){
    node *t = top;
    if(top == NULL){
        printf("linklist is empty");
    }
    else{
        while(t != NULL){
            printf("\t%d",t->data);
            t = t->link;
        }
    }
}

int main(){
    int ch;
    printf("1.push\n2.pop\n3.display\n4.exit");
    while(1){
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
        }
    }
