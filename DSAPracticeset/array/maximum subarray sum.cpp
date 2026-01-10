class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int maxi=INT_MIN;
      int n=arr.size();
          int sum=0;
          for(int j=0;j<n;j++)
          {
              sum+=arr[j];
              if(sum>maxi)
              maxi=sum;
              if(sum<0)
              sum=0;
              
          }
      
      return maxi;
    }
    
};