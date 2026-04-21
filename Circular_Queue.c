#include<stdio.h>

#define size 6

int items[size];
int front = -1;
int rear = -1;

void queue(int val)
{
    if(front == (rear + 1) % size)
    {
        printf("Queue is Full\n");
    }
    else
    {
        if(front == -1)
        {
            front = 0;
        }

        rear = (rear + 1) % size;
        items[rear] = val;

        printf("%d is inserted\n",val);
    }
}

void dequeue()
{
    int temp;

    if(front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        temp = items[front];

        if(front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % size;
        }

        printf("%d is deleted\n",temp);
    }
}

void display()
{
    int i;

    if(front == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        for(i = front ; i != rear ; i = (i+1)%size)
        {
            printf("%d ",items[i]);
        }

        printf("%d\n",items[rear]);
    }
}

int main()
{
    queue(5);
    queue(7);
    queue(8);

    display();

    dequeue();

    display();
}
