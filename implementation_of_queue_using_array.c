#include<stdio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;
void enqueue(int x)
{
    if (rear == N-1)
    {
      printf("OVERFLOW");
    }
    else if(front == -1 && rear == -1)
    {
      front = rear = 0 ;
      queue[rear] = 0 ; 
    }
    else
    {
        rear ++;
        queue[rear] = x;
    }
}
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("UNDERFLOW");
    }
    else if (front = rear)
    {
      front = rear = -1;
    }
    else
    {
        printf("the last element is %d",queue[front]);
        front ++;
    }
}
void display()
{
    int i;
    if (front == -1 && rear == -1)
    {
        printf("It is Empty");
    }
    else
    {
        for (i = front;i< rear+1 ;i++)
        {
            printf("%d\t",queue[i]);
        }
    }
}
void peek()
{
    if(front == -1 && rear == -1)
    {
        printf("EMPTY");
    }
    else
    {
        printf("%d",queue[front]);
    }
}
int main()
{
    enqueue(53);
    enqueue(45);
    enqueue(32);
    enqueue(76);
    display();
    peek();

    return 0;
}