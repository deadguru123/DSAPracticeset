class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int n =arr.size();
        int left=0,right=0;
        long long sum=0;
        int len=0;
        while(right<n)
        {
            while(left<=right && sum>k){
                sum-=arr[left];
                left++;
            }
            if(sum==k)
            {
                len=max(len,right-left+1);
            }
            
            right++;
            if(right<n)
            sum+=arr[right];
        }
        return len;
       
        
    }
};