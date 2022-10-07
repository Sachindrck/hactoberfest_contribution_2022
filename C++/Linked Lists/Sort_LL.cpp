//Given the head of a linked list, return the list after sorting it in ascending order.
#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode *MergeList(ListNode *l1, ListNode *l2)
{
    //Logic for merging 2 given linked lists
    ListNode *ptr = new ListNode(0);
    ListNode *curr = ptr;

    while (l1 != NULL && l2 != NULL)
    {
        if (l1->val <= l2->val)
        {
            curr->next = l1;
            l1 = l1->next;
        }
        else
        {
            curr->next = l2;
            l2 = l2->next;
        }

        curr = curr->next;
    }

    if (l1 != NULL)
    {
        curr->next = l1;
        l1 = l1->next;
    }

    if (l2 != NULL)
    {
        curr->next = l2;
        l2 = l2->next;
    }

    return ptr->next;
}
ListNode *sortList(ListNode *head)
{
    //If the linked list contain only a single or no element
    if (head == NULL && head->next == NULL)
        return head;
    ListNode *temp = NULL;
    ListNode *slow = head;
    ListNode *fast = head;
     // 2 pointer appraoach / turtle-hare Algorithm (Finding the middle element)
    while (fast != NULL || fast->next != NULL)
    {
        temp = slow;
        slow = slow->next;//Incrementing by 1
        fast = fast->next->next;//Incrementing By 2
    }
    temp->next=NULL;
    //This is according to the Divide and Conquer Theme
    //Dividing the linkedlist in 2 halves and merging them 
    ListNode *L1 = sortList(head);//First half
    ListNode *L2 = sortList(slow);//Second Half
    return MergeList(L1, L2);
    //Merge Function of Merge Sort
}