#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};
struct node *front = 0, *rear = 0;
void enqueue(int n)
{
    struct node *newnode ;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = n;
    newnode->next = 0;

    if (front == 0 && rear ==0)
    {
        front = rear = newnode ;
    }
    else
    {
        rear->next = newnode ;
        rear = newnode;
    }
}
void display()
{
    struct node *temp ;
    if (front == 0 && rear == 0)
    {
        printf("EMPTY");
    }
    else
    {
        temp = front ;
        while(temp !=0)
        {
            printf("%d\t",temp->data);
            temp = temp->next ;
        }
    }
}
void dequeue()
{
    struct node *temp;
    temp = front ;
    if (front == 0 && rear == 0)
    {
        printf("Empty");
    }
    else
    {
        printf("%d",front->data);
        front = front -> next ;
        free(temp);
    }
}
void peek()
{
    if (front ==0 && rear == 0)
    {
        printf("QUEUE is Empty");
    }
    else
    {
        printf("\nThe peek value is : %d",front->data);
    }
}
int main()
{
    enqueue(65);
    enqueue(54);
    enqueue(42);
    display();
    peek();
}