+#include <Stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void reverse(struct node *head)
{
    struct node *curr = head, *prev = NULL, *nxt;
    while (curr != NULL)
    {
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    head = prev;
}

void traverseLL(struct node *ptr)
{
    while (ptr != 0)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf(" NULL\n");
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *one = (struct node *)malloc(sizeof(struct node));
    struct node *two = (struct node *)malloc(sizeof(struct node));
    struct node *three = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    head->next = one;
    one->data = 20;
    one->next = two;
    two->data = 30;
    two->next = three;
    three->data = 40;
    three->next = NULL;
    traverseLL(head);
    reverse(head);
    traverseLL(head);

    return 0;
}