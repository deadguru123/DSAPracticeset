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