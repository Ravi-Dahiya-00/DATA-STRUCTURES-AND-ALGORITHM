#include <iostream>

using namespace std;

int main(){
    /*
        Hashing is a technique to convert data (like numbers, strings, files) into a fixed-size value (called a hash or hash code)
         using a hash function.
         */

         int n;
         cout << "Enter no of elements : ";
         cin >> n;

         int arr[n];
         for (int i=0;i<n;i++){
            cin >> arr[i];
         }


        cout << "enter how numbers you want to check" <<endl;
        //  precompute 
        int hash[13]={0};
        for (int i=0;i<n;i++){

            hash[arr[i]]+=1;
        }


        int q;
         
        cin >> q;
        while (q--){
            int number;
            cin >> number;
            // fetch
            cout << "frequency of " << number << " is " <<  hash[number] << endl;
        }
}