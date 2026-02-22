#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head, *temp, *newnode;

void display()
{
    int n, i, choice, pos, count = 0;
    printf("Enter the nodes :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data :");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        count++;

        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    printf("\n1. Insert at Begining :");
    printf("\n2. Insert at End :");
    printf("\n3.Insert at Specified Position :");
    printf("\nEnter the choice :");
    scanf("%d", &choice);
    if (choice == 1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data that you want to insert at beg. :");
        scanf("%d", &newnode->data);
        newnode->next = head;
        head = newnode;
    }
    else if (choice == 2)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data :");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        temp = head;

        while (temp->next != 0)
        {
            temp = temp->next;
            temp->next = newnode;
        }
    }
    else if (choice == 3)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the position :");
        scanf("%d", &pos);
        if (pos > count)
        {
            printf("INVALID POSITION");
            exit(0);
        }
        else
        {
            temp = head;
            while (i < pos)
            {
                temp = temp->next;
                i++;
            }
            printf("Enter the data :");
            scanf("%d", &newnode->data);
            newnode->next = temp->next;
            temp->next = newnode;
        }
    }
    temp = head;
    while (temp != 0)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}
int main()
{
    display();
    return 0;
}