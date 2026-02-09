class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next) // agar khali hai linkedlist
    return head;

        ListNode * temp1=head;
        ListNode * temp2=head->next;
        ListNode * temp=temp2; // temp2 ko head save krlia kyuke odd even me end m jodna hai
        while(temp2!=NULL&&temp2->next!=NULL)
        {
            temp1->next=temp2->next;
            temp1=temp1->next;
            temp2->next=temp1->next;
            temp2=temp2->next;
        }
        temp1->next=temp;
        return head;
    }
};