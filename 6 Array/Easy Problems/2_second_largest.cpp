#include <iostream>
#include <vector>
using namespace std;

int getSecondLargest(vector<int> &arr) {
    int largest = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    int seclargest = -1; // assuming all numbers are non-negative
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > seclargest && arr[i] < largest) {
            seclargest = arr[i];
        }
    }
    return seclargest;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = getSecondLargest(arr);
    if (result == -1) {
        cout << "Second largest element does not exist" << endl;
    } else {
        cout << "Second largest element is: " << result << endl;
    }

    return 0;
}
