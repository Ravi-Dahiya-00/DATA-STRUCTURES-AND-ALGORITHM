#include <iostream>
using namespace std;

/*
Selection Sort is a comparison-based sorting algorithm.
It repeatedly selects the smallest (or largest) element from the unsorted part of the array and 
swaps it with the first element of the unsorted part, moving the boundary of the sorted part forward.
            */
int main(){

    int n;
    cout << "enter no of elements : ";
    cin >> n;   // Taking the number of elements as input

    int arr[n]; // Declaring an array of size 'n'

    cout << "Enter array elements : " << endl;
    for (int i=0;i<n;i++){
        cin >> arr[i];   // Taking input for array elements
    }
   
    // ---- Selection Sort Algorithm ----
    // Outer loop runs n times to fix one element in each iteration
    for (int i=0;i<n;i++){
        int minimum = i;   // Assume the current index 'i' has the minimum value

        // Inner loop to find the actual minimum element in the remaining part of array
        for (int j=i+1;j<n;j++){
            if (arr[j] < arr[minimum]) {
                minimum = j;  // Update minimum index if smaller element is found
            }
        }

        // Swap the found minimum element with the first element of unsorted part
        int temp = arr[minimum];
        arr[minimum] = arr[i];
        arr[i] = temp;
    }

    // Printing the sorted array
    cout << "elements in the array in sorted order : ";
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }


    /*
        Time Complexity:

            Worst case: O(n²)
            Best case: O(n²) (it always compares even if already sorted)
            Average case: O(n²)
            Space Complexity: O(1) → it sorts in place (no extra array needed).
                */
}
