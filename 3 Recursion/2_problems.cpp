#include <iostream>
#include <utility>  // Or <algorithm>

using namespace std;

void nameprinting(int i,int n){
    if (i>n) return;
    cout << "ravi" << endl;
    nameprinting(i+1,n);
}


void numberprinting(int i,int n){
    if (i>n) return;
    cout << i << endl;
    numberprinting(i+1,n);
}

void reversenumberprinting(int i,int n){
    if (i<1) return;
    cout << i << endl;
    reversenumberprinting(i-1,n);
}

void backnumberprinitng(int i,int n){
    if (i<1) return;
    backnumberprinitng(i-1,n);
    cout << i << endl;
}

void backreversenumberprinitng(int i,int n){
    if (i>n) return;
    
    backreversenumberprinitng(i+1,n);
    cout << i << endl;
    
}


 int findSum(int i,int sum) {
        // code here
        if (i<1){
            return sum;
        }
        findSum(i-1,sum+i);
        
    }


int findSum2(int n) {
        if (n==0) return 0;
        
        return n + findSum2(n-1);
}

int factorial(int n){
    if (n==0) return 1;

    return n * factorial(n-1);
}

void reversearray(int i, int arr[] , int j){
    if (i>=j/2) return;
    swap(arr[i],arr[j-i-1]);
    reversearray(i+1,arr,j);

}




bool palindrome(int i, string &s){
    if (i>=s.size()/2) return true;
    if (s[i]!=s[s.size()-i-1]) return false;
    palindrome(i+1,s);
}


int fibonacii(int n){
    if(n<=1) return n;
    int last = fibonacii(n-1);
    int slast= fibonacii(n-2);

    return last + slast;
}

int main(){

    // print name n times 
    int n;
    cout << "enter no of times : " ;
    cin >> n;

    nameprinting(1,n);
    numberprinting(1,n);
    reversenumberprinting(n,n);


    // using backtracking method
    backnumberprinitng(n,n);
    backreversenumberprinitng(1,n);


    int sum=0;
    cout << findSum(n,sum) << endl;

    
    cout << findSum2(n) << endl;


    cout << factorial(n) << endl;

    int arr[5];
    cout << "Enter elements for the array : ";

    for (int i=0;i<=5;i++){
        cin >> arr[i];
    }

    reversearray(0,arr,n);
    for (int i=0;i<=5;i++) cout << arr[i] << " ";

    cout << endl;

    string s="madam";

    cout << palindrome(0,s) << endl;

    cout << fibonacii(4) << endl;
    
}

