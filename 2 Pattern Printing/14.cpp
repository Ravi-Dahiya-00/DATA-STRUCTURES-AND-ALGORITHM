#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n ;
   
    char num=65;
    for (int i=1;i<=n;i++)
    {
         
      for (int j=1;j<=n-i;j++)
      {
        cout << " ";
      }

      for (int j=1;j<i*2;j++ )
      {
        cout << num;
        num++;
      }

      for (int j=1;j<=n-i;j++)
      {
        cout << " ";
      }

       cout << endl;
    }
}