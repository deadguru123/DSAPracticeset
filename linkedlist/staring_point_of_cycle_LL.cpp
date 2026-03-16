class Solution {
  public:
    int cycleStart(Node* head) {
         map<Node*,int> mpp;
      Node * temp=head;
int pos = 1;

while(temp)
{
    if(mpp.find(temp) != mpp.end())
        return temp->data;

    mpp[temp] = pos;
    pos++;
    temp = temp->next;
}
    return -1;
        
    }
};