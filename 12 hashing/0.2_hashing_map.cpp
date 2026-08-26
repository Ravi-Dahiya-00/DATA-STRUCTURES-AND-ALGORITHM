#include <iostream>
#include <map>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    map<int,int> mpp;

    /*
    map stores element in sorted order -> it takes time complexity of o(log n)
    
    we can also use unordered_map : it stores elements randomly : 
        it takes time complexity of o(1) , but in worst case it takes o(n)
        
    priority should be unordered_map -> if time limit exceeds move to map.
    
    worst case in unordered_map is held because of internal collisions.
    collision: all the keys at end goes to the same hash , and we have to traverse that hash and may be that no is at last 
        like : 18,28,38,48,58
        if using % algo they all go to 8 , then we will do linear search in this order and then we will find 58.*/
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    int q;
    cin>>q;
    cout << mpp[q] << endl;
}