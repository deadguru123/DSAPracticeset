#include <iostream>
#include <vector>
using namespace std;


void reverseArray(vector<int>& arr, int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// Function to rotate array to the right by k places
void rotateArray(vector<int>& arr, int k) {
    int n = arr.size();

    // If k is greater than array size
    k = k % n;

    
    reverseArray(arr, 0, n - 1);

    
    reverseArray(arr, 0, k - 1);

    
    reverseArray(arr, k, n - 1);
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    rotateArray(arr, k);

    // Print rotated array
    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}
