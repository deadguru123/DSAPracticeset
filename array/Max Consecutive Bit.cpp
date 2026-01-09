class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        int n=arr.size();
        int max1=0,max2=0,c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                c1++;
                max1=max(max1,c1);
            }
            else
            {
                c1=0;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]==1)
            {
                c2++;
                max2=max(max2,c2);
            }
            else
            {
                c2=0;
            }
        }
        int gt=max(max1,max2);
        return gt;
        
    }
};