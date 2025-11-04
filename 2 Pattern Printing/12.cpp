#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n ;
   
    for (int i=1;i<=n;i++)
    {
         char num=65;
       for (int j=n;j>=i;j--)
       {
        cout << num << " ";
        num++;
       }

       cout << endl;
    }
}