class Solution {
  public:
    bool isPalindrome(Node *head) {
        Node * temp=head;
        stack<int> st;
        while(temp!=NULL)
        {
            st.push(temp->data);
            temp=temp->next;
            
        }
        temp=head;
        while(temp!=NULL)
        {
           
            if(st.top()!=temp->data)
            {
                return false;
            }
            st.pop();
            temp=temp->next;
        }
        
        return true;
    }
};