#include <stdio.h>
#include <stdlib.h>
typedef struct list_node {
    int value;
    struct list_node *next;
} Node ;
Node* create_node (int value)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    if(newNode == NULL)
    {
        printf("Memory allcaton failed.");
        exit(1);
    }
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}
void insert_at_end(Node* head , int value)
{
    Node* newNode = create_node(value);
    Node* current = head;
    while(current->next != NULL)
    {
        current = current->next;
    }
    current->next = newNode;
    newNode->next = NULL;
}
void display_list(Node* head)
{
    printf("Linked List : \n");
    Node* current = head;
    if(current == NULL)
    {
        printf("List is empty.");
        return;
    }
    while(current != NULL)
    {
        printf(" ( %d -> " , current->value);
        printf("%p ) " , current );
        current = current->next;
    }
    printf("\n");
}
int main()
{
    Node* head = create_node(10);
    insert_at_end(head, 100);
    insert_at_end(head, 101);
    insert_at_end(head, 102);

    display_list(head);
    free(head);
    return 0;
}
