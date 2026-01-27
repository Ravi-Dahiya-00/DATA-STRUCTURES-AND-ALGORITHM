#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void heapify(vector<int> &arr,int size,int index){
    int largest=index;
    int left=2*index+1;
    int right=2*index+2;

    if(left<size && arr[largest]<arr[left]){
        largest=left;
    }
    if(right<size && arr[largest]<arr[right]){
        largest=right;
    }

    if(largest!=index){
        swap(arr[largest],arr[index]);
        heapify(arr,size,largest);
    }

}

void heapsort(vector<int> &arr,int n){
    int size=n;

    while(size>1){
        // step 1 
        swap(arr[size-1],arr[0]);
        size--;

        // step 2
        heapify(arr,size,0);
    }
}
int main(){

    vector<int> arr={54,53,55,52,50};
    int n=5;
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }

    heapsort(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}