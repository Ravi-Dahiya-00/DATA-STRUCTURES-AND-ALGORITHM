#include <iostream>
#include <vector>

using namespace std;

// Merge function to merge two sorted halves
void merge(vector <int> &arr,int low,int mid,int high){
        vector <int> temp;
        int left=low;
        int right=mid+1;
        
         // Merge elements from both halves
        while (left <=mid && right <=high){
            if (arr[left]<=arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else {
                temp.push_back(arr[right]);
                right++;
            }
        }

           // Copy remaining elements from left half
        while (left<=mid){
             temp.push_back(arr[left]);
                left++;
        }


        // Copy remaining elements from right half
        while (right <=high){
            temp.push_back(arr[right]);
                right++;
        }

        // Copy sorted elements back into original array
        for (int i=low;i<=high;i++){
            arr[i]=temp[i-low];
        }

}

// Recursive Merge Sort helper function
void ms(vector <int> &arr,int low,int high){
    if (low>=high) return;
    int mid=(low+high)/2;
    ms( arr,low,mid);           // Sort left half
    ms(arr,mid+1,high);         // Sort right half
    merge(arr,low,mid,high);    // Merge two halves
}

// Merge Sort function
void mergesort(vector <int> &arr,int n){
    ms(arr,0,n-1);
}
int main(){

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

        // Call Merge Sort
    mergesort(arr, n);


        // Print sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;



    /*
    Time Complexity: 
𝑂(𝑛 log⁡𝑛)O(nlogn) (best, avg, worst)
Space Complexity: 𝑂(𝑛)O(n)

*/

    
}