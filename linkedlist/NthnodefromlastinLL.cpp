class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * temp=head;
        int c=0;
        while(temp!=NULL)
        {
            c++;
            temp=temp->next;
        }
        if(c==n)
        {
            ListNode * newnode=head->next;
           
            return newnode;
        }
        int res=c-n;
        temp=head;

        while(temp!=NULL)
        {
            res--;
            if(res==0)
            break;
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;

    }
};