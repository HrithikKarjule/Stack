#include<stdio.h>
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
}
main()
{
int i,n;
int arr[20];
printf("Enter Number of Elements:");
scanf("%d",&n);
if(n<=20)
{
for(i=0;i<n;i++)
{
    printf("\nEnter Element[%d]:",i+1);
    scanf("%d",&arr[i]);
    push(arr[i]);
}
for(i=0;i<n;i++)
{
display();
pop();
}
}
}
