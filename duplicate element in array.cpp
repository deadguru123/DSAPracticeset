#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[8]={1,1,3,4,5,6,6,7};
    set<int> st;
    for(int i=0;i<8;i++)
    {
        st.insert(a[i]);
    }
    int n=st.size();
    int index=0;
    for(auto it:st)
    {
        a[index]=it;
        index++;
    }
    for(auto it:st)
    {
       cout<<it<<" ";
    }
    
    return 0;
}