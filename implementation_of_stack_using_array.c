#include<stdio.h>
#define N 5
int stack[N];
int top = -1;

void push()
{
    int x;
    printf("enter data :");
    scanf("%d",&x);
    if(top == N-1)
    {
        printf("Overflow");
    }
    else
    {
        top++ ;
        stack[top] = x ;
    }
}
void pop()
{
    int item;
    if(top == -1)
    {
        printf("Underflow");
    }
    else
    {
        item = stack[top];
        top --;
        printf("%d",item);
    }
}
void top1()
{
    if (top == -1)
    { 
        printf("Stack is Empty");
    }
    else
    {
        printf("%d",stack[top]);
    }
}
void display()
{
    int i;
    for(i = top;i>=0;i--)
    {
        printf("%d",stack[i]);
    }
}
int main()
{
    printf("\n1. Push the Element on Stack");
    printf("\n2. Pop an Element on Stack");
    printf("\n3. Display a Top of Element on Stack");
    printf("\n4. Dispaly a Stack");
    int choice ;
    printf("\nEnter your Choice :");
    scanf("%d",&choice);
    if (choice == 1)
    {
        push();
    }
    else if(choice == 2)
    {
        pop();
    }
    else if(choice == 3)
    {
        top1();
    }
    else if(choice == 4)
    {
        display();
    }
    else
    {
        printf("INVALID CHOICE");
    }
    return 0;
}