#include <stdio.h>
#include <stdlib.h>

// Structure of node
struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

// Function to reverse list
void reverse()
{
    struct node *prev = NULL;
    struct node *current = head;
    struct node *next = NULL;

    while (current != NULL)
    {
        next = current->next; // store next
        current->next = prev; // reverse link
        prev = current;       // move prev
        current = next;       // move current
    }

    head = prev;
}

// Function to display list
void display()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    // Creating 3 node 
    struct node *n1 = (struct node *)malloc(sizeof(struct node));
    struct node *n2 = (struct node *)malloc(sizeof(struct node));
    struct node *n3 = (struct node *)malloc(sizeof(struct node));

    // Assign data
    n1->data = 10;
    n2->data = 20;
    n3->data = 30;

    // Linking nodes
    n1->next = n2;
    
    n2->next = n3;
    n3->next = NULL;

    head = n1;

    printf("Original List:\n");
    display();

    reverse();

    printf("Reversed List:\n");
    display();
    return 0;
}