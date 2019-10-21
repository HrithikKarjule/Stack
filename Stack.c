#include<stdio.h>
#include<stdlib.h>
int top=-1;
int stack[20];
void push(int arr)
    {
    if(top==19)
    {
    printf("\nStack Overflow\n");
    }
    else
    {
    top++;
    stack[top]=arr;
    }
    }
int pop()
    {
    if(top==-1)
    {
    printf("\nStack Underflow\n");
    }
    else
    {
    printf("\nPopped Element:%d",stack[top]);
    top--;
    }
    printf("\n\n");
    }
void display()
{
    int i;
    if(top==-1)
    {
    printf("\nStack is Empty\n");
    }
    else
    {
    printf("\nElements in Stack are:");
    for(i=top;i>=0;i--)
    {
      printf("\t%d",stack[i]);
    }
    }
    printf("\n\n");
}
main()
{
int i,ch,num;
int arr[20];
while(1)
{
    printf("1.Push\n");
    printf("2.Pop\n");
    printf("3.Display\n");
    printf("4.Exit\n\n");
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("Enter Element to Push:");
            scanf("%d",&num);
            push(num);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(-1);
    }
}
}
