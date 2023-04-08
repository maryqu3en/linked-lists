#include<stdio.h>

typedef struct node
{
    int data;
    node *next;
}node;

void ll_display(node *head)
{
    if(head==NULL)
    {
        printf("List is empty");
        return;
    }
    node *temp=head;
    while(temp->next != NULL)
    {
        printf("%d \n", temp->data);
        temp=temp->next;
    }
}

int count_node(node *head)
{
    if(head==NULL)
    {
        printf("\n0 elements: list is empty\n");
        return;
    }
    node *temp=head;
    int count=0;
    while(temp->next != NULL)
    {
        temp=temp->next;
        count++;
    }
    return count;
}

node * insert_begin(node *head)
{
    node *temp = (node *)malloc(sizeof(node));
    temp -> data = 123;
    if(head==NULL)
    {
        head=temp;
        temp -> next = NULL;
    }
    else 
    {
        temp -> next = head; 
        head = temp;
    }
    return head;
}

node * insert_end(node *head)
{
    node *temp = (node *)malloc(sizeof(node));
    temp -> data = 123;
    if(head == NULL)
        head = insert_begin(head);
    else
    {
        node *pt = head;
        while(pt -> next != NULL)
            pt = pt -> next;
        pt = temp;
    }
    return head;
}

node * delete_begin(node *head)
{
    if(head == NULL)
        printf("Nothing to delete: The list is already empty");
    else 
    {
        node *temp = head; 
        head = head -> next;
        free(temp);
    }
    return head;
}

node * delete_end(node *head)
{
    if(head == NULL)
        printf("Nothing to delete: The list is already empty");
    else
    {
        node *temp = head, *ptr;
        while(temp -> next != NULL)
        {
            temp = temp -> next;
            ptr -> next = temp;
        }
        ptr -> next = NULL;
        free(temp);
    }
    return head;
}


