//head node is given
//Below is the function to reverse the linked list

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *ptr1=NULL;
        ListNode *ptr2=NULL;
        ListNode *ptr3=head;
        while(ptr3)
        {
            ptr1=ptr2;
            ptr2=ptr3;
            ptr3=ptr3->next;
            ptr2->next=ptr1;
        }
        head=ptr2;
        return head;
    }
};