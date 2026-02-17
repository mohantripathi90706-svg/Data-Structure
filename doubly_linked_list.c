#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev, *next;
};

struct node *head = NULL, *temp, *newnode;

// To create a doubly linked list
void doublylist()
{
    int choice, n, i, val;

    printf("Enter number of nodes to create: ");
    scanf("%d", &n);

    // creation
    for (i = 0; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);

        newnode->prev = newnode->next = NULL;

        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
    }

    printf("\n1. Insert at Beginning");
    printf("\n2. Insert at End");
    printf("\n3. Insert at Specified Position");
    printf("\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter value: ");
        scanf("%d", &newnode->data);

        newnode->prev = NULL;
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
    else if (choice == 2)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter value: ");
        scanf("%d", &newnode->data);

        temp = head;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newnode;
        newnode->prev = temp;
        newnode->next = NULL;
    }
    else if (choice == 3)
    {

        {
            int pos, i = 1;

            printf("Enter position to insert: ");
            scanf("%d", &pos);

            newnode = (struct node *)malloc(sizeof(struct node));
            printf("Enter value: ");
            scanf("%d", &newnode->data);

            // insert at beginning
            if (pos == 1)
            {
                newnode->prev = NULL;
                newnode->next = head;
                head->prev = newnode;
                head = newnode;
            }
            else
            {
                temp = head;

                while (i < pos - 1 && temp->next != NULL)
                {
                    temp = temp->next;
                    i++;
                }

                newnode->next = temp->next;
                newnode->prev = temp;

                if (temp->next != NULL)
                    temp->next->prev = newnode;

                temp->next = newnode;
            }
        }
    }

    // display
    printf("\nDoubly Linked List: ");
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    doublylist();
    return 0;
}
