#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct Node
{
    int data;
    struct Node *next;
};

// Function to create a new node and push onto stack
struct Node *push(struct Node *top, int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    return top;
}

// Function to display the stack
void display(struct Node *top)
{
    struct Node *temp = top;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node *stack = NULL; // Initialize empty stack

    // Push some elements
    stack = push(stack, 10);
    stack = push(stack, 20);
    stack = push(stack, 30);

    // Display stack
    printf("Stack: ");
    display(stack);

    return 0;
}