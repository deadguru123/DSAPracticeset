#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,int> mp;
    int arr[]={3,4,5,4,5,6,6,7,7};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
        
    }
   for(auto it : mp)
    {
        if(it.second == 1)
            cout << it.first << " ";
    }
    
    return 0;
}