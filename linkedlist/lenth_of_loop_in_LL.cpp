class Solution {
  public:
    int lengthOfLoop(Node *head) {
        map<Node*,int> mpp;
      Node * temp=head;
int pos = 0;

while(temp)
{
    if(mpp.find(temp) != mpp.end())
        return pos - mpp[temp];

    mpp[temp] = pos;
    pos++;
    temp = temp->next;
}
    }
};