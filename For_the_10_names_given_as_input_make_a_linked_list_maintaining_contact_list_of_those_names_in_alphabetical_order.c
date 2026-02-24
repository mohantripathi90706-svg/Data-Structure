#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    char name[50];
    struct node *next;
};

struct node *head = NULL;

// Function to insert in alphabetical order
void insertSorted(char newName[])
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    strcpy(newNode->name, newName);
    newNode->next = NULL;

    // If list empty or new name comes before head
    if (head == NULL || strcmp(newName, head->name) < 0)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        struct node *temp = head;

        while (temp->next != NULL && strcmp(temp->next->name, newName) < 0)
        {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }
}

// Function to display list
void display()
{
    struct node *temp = head;
    printf("\nContact List in Alphabetical Order:\n");

    while (temp != NULL)
    {
        printf("%s\n", temp->name);
        temp = temp->next;
    }
}

int main()
{
    char name[50];
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Enter name %d: ", i + 1);
        scanf("%s", name);
        insertSorted(name);
    }

    display();

    return 0;
}