class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
    
       int len = 0;
        Node* temp = head;
        Node* prev=NULL;
        if(head==NULL) return head;
        if(x==1)
        {
            head=head->next;
            return head;
        }

        while (temp != nullptr) {
            len++;
            if(len==x)
            {
                prev->next=prev->next->next;
                break;
            }
            prev=temp;
            temp = temp->next;
           
        }
        return head;
     
     }
        