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
    int n, i, choice;
    printf("Enter the nodes :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data :");
        scanf("%d", &newnode->data);
        newnode->next = 0;

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
    printf("\n1. Delete at Begining :");
    printf("\n2. Delete at End :");
    printf("\n3. Delete at Specified Position :");
    printf("\nEnter the choice :");
    scanf("%d", &choice);
    if (choice == 1)
    {
        head = temp;
        head = head->next;
        free(temp);
    }
    temp = head;
    while (temp != 0)
    {
        printf("%d", temp->data);
        temp = temp->next;
    }
}
int main()
{
    void display();
    return 0;
}