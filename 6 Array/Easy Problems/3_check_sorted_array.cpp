#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isSorted(vector<int>& arr) {
        for (int i = 1; i < arr.size(); i++) { // start from index 1
            if (arr[i] < arr[i - 1]) {         // check ascending order
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution obj;

    // Example test cases
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {10, 20, 15, 30};
    vector<int> arr3 = {5, 5, 5, 5};

    cout << "arr1 is sorted? " << (obj.isSorted(arr1) ? "Yes" : "No") << endl;
    cout << "arr2 is sorted? " << (obj.isSorted(arr2) ? "Yes" : "No") << endl;
    cout << "arr3 is sorted? " << (obj.isSorted(arr3) ? "Yes" : "No") << endl;

    return 0;
}
