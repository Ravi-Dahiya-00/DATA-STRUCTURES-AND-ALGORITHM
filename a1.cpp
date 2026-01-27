#include <iostream>
using namespace std;

int fibonacii(int n){
    if(n<=1) return n;
    int last = fibonacii(n-1);
    int slast= fibonacii(n-2);

    return last + slast;
}


int main(){
    cout << fibonacii(6);
}