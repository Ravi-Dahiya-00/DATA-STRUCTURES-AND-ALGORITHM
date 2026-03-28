#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reversearray(int i, int arr[] , int j){
    if (i>=j/2) return;
    swap(arr[i],arr[j-i-1]);
    reversearray(i+1,arr,j);
}


int main(){
   int n;
   cin>>n;
   int arr[50];

    for (int i=0;i<=5;i++){
        cin >> arr[i];
    }

    reversearray(0,arr,n);
    for (int i=0;i<=5;i++) cout << arr[i] << " ";


}