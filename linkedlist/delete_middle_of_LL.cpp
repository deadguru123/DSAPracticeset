class Solution {
  public:
    Node* deleteMid(Node* head) {
       
        Node*slow=head;
        Node*fast=head;
        Node*temp;
         if(slow->next==NULL)
        {
            return NULL;
        }
        while(fast!=NULL && fast->next!=NULL)
        {
            temp=slow;
            slow=slow->next;
    fast=fast->next->next;
        }
       temp->next=slow->next;
        return head;
        
    }
};