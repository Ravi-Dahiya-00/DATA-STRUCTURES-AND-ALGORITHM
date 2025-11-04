#include <iostream>
using namespace std;

/* 
    Insertion Sort is a simple sorting algorithm that builds the sorted array one element at a time.
     It is similar to the way we sort playing cards in our hands.
    
     
            Start from the second element (index 1), because a single element is always considered sorted.
            Compare it with the elements on its left.
            If the element on the left is greater, shift it one position to the right.
            Keep shifting until the correct position for the current element is found.
            Insert the element at the correct position.
            Repeat this process for all elements until the array is sorted.

        */

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;   // Taking number of elements from user

    int arr[n]; // Declaring array of size 'n'

    // Input array elements
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // ---------------- Insertion Sort ----------------
    for (int i = 0; i <= n; i++) {
        int j = i;
   
        // Compare current element with previous ones
        while (j > 0 && arr[j - 1] > arr[j]) {
            // Swap if previous element is greater
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;

            j--; // Move one step back
        }
    }
    // ------------------------------------------------

    // Output the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;


    /*
        Time Complexity
                Best Case (Already Sorted): O(n)
                Worst Case (Reverse Sorted): O(n²)
                Average Case: O(n²)
                Space Complexity: O(1) (In-place sorting)   
*/
}
