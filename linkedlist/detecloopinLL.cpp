class Solution {
  public:
    bool detectLoop(Node* head) {
       Node * temp=head;
       map<Node*,int>mpp;
       while(temp)
       {
           if(mpp.find(temp)!=mpp.end())
           return true;
           mpp[temp]=1;
           temp=temp->next;
           
       }
      return false;
        
    }
};
// without using hashing
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast!=NULL && fast->next!=NULL)
{
    slow=slow->next;
    fast=fast->next->next;
    if(slow==fast)
    return true;

}
return false;
    }
};