class Solution {
  public:
    int binary_to_decimal(int B) {
         string stri = to_string(B);
        int n=stri.length();
        int p2=1;
        int num=0;
        for(int i=n-1;i>=0;i--)
        {
            if(stri[i]=='1')
            {
            num=num+p2;
            }
            p2=p2*2;
        }
        return num;
    }
};