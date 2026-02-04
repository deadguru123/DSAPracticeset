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