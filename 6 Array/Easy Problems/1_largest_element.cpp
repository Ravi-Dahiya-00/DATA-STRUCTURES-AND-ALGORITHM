#include <iostream>
#include <vector>
using namespace std;

int largest(vector<int> &arr) {
    int big = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > big) {
            big = arr[i];
        }
    }
    return big;
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

    cout << "Largest element is: " << largest(arr) << endl;

    return 0;
}
