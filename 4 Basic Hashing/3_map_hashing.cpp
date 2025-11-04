#include <iostream>
#include <map>
using namespace std;


int main(){
     cout << "Enter no of elements : ";
    int n;
    cin >> n;
    int arr[n];

    
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    // pre compute
    map <int , int> mpp;

    for (int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

       

// map stores all the values in the sorted order

    // iterate in the map 
    for (auto it : mpp){
        cout << it.first << " -> " << it.second << endl;
    }

     cout << "enter how numbers you want to check" <<endl;
    int q;
    cin >> q;
    while (q--){
        int number;
        cin >> number;

        // fetch 
            cout << "frequency of " << number << " is " <<  mpp[number] << endl;
        
    }
}