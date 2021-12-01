include<stdio.h>
#include<stdlib.h>
#define size 5
int top=-1, stack[size];
void push(int ele)
{
    stack[++top]=ele;
}
int pop()
{
    return (stack[top--]);
}
int peek()
{
    return(stack[top]);
}
void display()
{
    for(int i=top;i>=0;i--)
        printf("%d", stack[i]);
}

int main()
{
    int ch,ele;
    while(1)
    {
     printf("\n 1-push \n 2-pop \n 3-peek \n 4-display \n 5-exit");
     printf("\n enter your choice");
     scanf("%d", &ch);
     switch(ch)
     {
      case 1: if(top == size-1)
                printf("stack overflow");
              else{
                printf("enter the element to be inserted");
                scanf("%d",&ele);
                push(ele);
            }
            break;
      case 2: if(top==1)
                printf("stack underflow");
              else
                printf("deleted element is %d",pop());
            break;
      case 3: if(top==-1)
                printf("stack underflow");
              else
                printf("topmost element is %d", peek());
            break;
      case 4: if(top==-1)
                printf("stack underflow");
              else
                display();
            break;
      case 5: exit (0);
      }
   }
}

