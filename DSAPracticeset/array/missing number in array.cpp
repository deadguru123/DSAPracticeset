class Solution {
public:
    int missingNum(vector<int>& arr) {

        int x = 0;
        int n = arr.size() + 1;

        for (int i = 0; i < arr.size(); i++) {
            x ^= arr[i];     
            x ^= (i + 1);     
        }

        x ^= n;   

        return x;
    }
};
