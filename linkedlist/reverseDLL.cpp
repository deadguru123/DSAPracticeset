class Solution {
  public:
    Node *reverse(Node *head) {
        Node* temp=head;
       stack<int> st;
       while(temp!=NULL)
       {
           st.push(temp->data);
           temp=temp->next;
       }
        temp=head;
        while(temp!=NULL)
       {
           temp->data=st.top();
           st.pop();
           temp=temp->next;
          
       }
       return head;
        
    }
};
// without using stack 
class Solution {
  public:
    Node *reverse(Node *head) {
        Node* temp=head;
        Node* back=NULL;
        if(head == NULL || head->next == NULL)
        return head;
    
       while(temp!=NULL)
       {
          
       back=temp->prev;
       temp->prev=temp->next;
       temp->next=back;
       temp=temp->prev;
          
       }
     
       
       return back->prev;
        
    }
};