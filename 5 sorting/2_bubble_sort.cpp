#include <iostream>

using namespace std;

/*
    👉 Bubble sort is a simple sorting algorithm that works by repeatedly swapping adjacent elements if they are in the wrong order.
    It’s called “bubble” sort because the largest element “bubbles up” to the end of the array in each pass.  
        Start from the first element of the array.

        Compare the current element with the next one.
        If the current element is greater than the next, swap them.
        Continue this process for the entire array.
        After the first pass, the largest element will be at the end.
        Repeat the process for the remaining elements (ignoring the already sorted last elements).
        Continue until the entire array is sorted.
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


    for (int i=0;i<n-1;i++){
           // After each pass, the largest element comes to the end
           int didswap=0;
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                 // Swap if the element is greater than the next one
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                // didswap=1;
            }
            }

       if (didswap == 0){
        break;
        }
     }
    


       cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }



    /*
        Time Complexity
        Best Case (already sorted): O(n) (with optimization check)
        Worst Case: O(n²)
        Average Case: O(n²)
        Space Complexity
        O(1) → because sorting happens in place, no extra space needed.
        */

}