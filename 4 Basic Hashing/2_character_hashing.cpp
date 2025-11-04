#include  <iostream>

using namespace std;

int main(){
    string s;
    cout << "enter a string : " << endl;
    cin >> s;



   
    // pre compute 
    int hash[256]={0};
    for (int i=0;i<s.size();i++){
        hash[s[i]]++;
    }

     cout << "enter no of elements whose frequency you wan to check : " << endl;
    int q;
    cin >> q;
    while (q--){
        char c;
        cin >> c;
        // fetch
            cout << "frequency of " << c << " is " <<  hash[c] << endl;
    }
}