#include <bits/stdc++.h>
using namespace std;
#include "Node.cpp"

node *takeinput(){
    int data;
    cin >> data;

    node *tail = NULL;
    node *head = NULL;

    while (data != -1)
    {
        node *newNode = new node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail -> next = newNode;
            tail = tail -> next;
        }
        cin >> data;
    }
    return head;
}
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    node *head = takeinput();
    print(head);
    return 0;
}