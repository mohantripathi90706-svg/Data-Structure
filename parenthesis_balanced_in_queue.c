#include <stdio.h>
#include <string.h>

#define MAX 100

char queue[MAX];
int front = -1;
int rear = -1;

void enqueue(char x)
{
    if(rear == MAX-1)
        return;
    
    if(front == -1)
        front = 0;
        
    queue[++rear] = x;
}

int main()
{
    char exp[100];
    int i;
    int open = 0, close = 0;

    printf("Enter expression: ");
    scanf("%s", exp);

    for(i=0; exp[i] != '\0'; i++)
    {
        if(exp[i]=='(' || exp[i]==')' || 
           exp[i]=='{' || exp[i]=='}' ||
           exp[i]=='[' || exp[i]==']')
        {
            enqueue(exp[i]);
        }
    }

    for(i=front; i<=rear; i++)
    {
        if(queue[i]=='(' || queue[i]=='{' || queue[i]=='[')
            open++;
        else
            close++;
    }

    if(open == close)
        printf("Parenthesis Balanced");
    else
        printf("Not Balanced");

    return 0;
}