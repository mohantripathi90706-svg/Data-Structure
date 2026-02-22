#include <stdio.h>
#define N 5
int stack[N];
int top = -1;
void push()
{
    int x;
    printf("Enter the data :");
    scanf("%d", &x);

    if (top == N - 1)
    {
        printf("OVERFFLOW");
    }
    else
    {
        top++;
        stack[top] = x;
        printf("%d is Pushed on Top", x);
    }
}
void pop()
{
    int item;

    if (top == -1)
    {
        printf("UNDERFLOW");
    }
    else
    {
        item = stack[top];
        top--;
        printf("Item to be pop is %d", item);
    }
}
void peek()
{
    if (top == -1)
    {
        printf("Stack is Empty");
    }
    else
    {
        printf("Data on the top is : ", stack[top]);
    }
}
void display()
{
    int i;
    if (top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("Stack elements are :\n");
      
        for (i = top; i <= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}
int main()
{
    int ch;

    do
    {
        printf("\n___STACK MENU___\n");
        printf("\n1. push()");
        printf("\n2. pop()");
        printf("\n3. Peek()");
        printf("\n4. Dispaly()");
        printf("\n5. Exit\n");

        printf("\nEnter your choice : ");
        scanf("%d", &ch);

        switch (ch)
        {

        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            printf("Exiting.....\n");
            break;
        default:
            printf("INVALID CHOICE\n");
        }
    } while (ch != 5);
    return 0;
}