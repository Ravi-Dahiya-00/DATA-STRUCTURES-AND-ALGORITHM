#include <iostream>
#include <vector>
using namespace std;


class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        int n=arr.size();
        vector<int> hashing(n+1);
        
        for(int i=0;i<n;i++){
            hashing[arr[i]]++;
        }
        return vector<int>(hashing.begin()+1,hashing.end());
    }
};


int main(){

    cout << "No. of elements you want to store: " << endl;
    int n;
    cin>>n;
    
    int arr[n];
    cout << "Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout << endl;

    // declare the size of given hash array 
    int hashing[13];  //here we just took 13 randomly assuming we will not be having elements greater then 13

    for(int i=0;i<n;i++){
        hashing[arr[i]]+=1;
    }

    cout << "number you want to check its frequency: " << endl;
    int number;
    cin>>number;

    
    cout << "no. of times this hash comes: " << hashing[number] << endl;


    string s;
    cout << "enter string : ";
    cin>>s;


    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']+=1;
    }

    cout << "enter char you want to check frequency for : ";
    char c;
    cin>>c;

    cout << "frequency of given char is : " << hash[c-'a'];


}