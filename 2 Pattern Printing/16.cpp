#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int init=0;
   for (int i=0;i<n;i++)
   {

        for (int j=1;j<=n-i;j++)
        {
            cout << "* ";
        }

        for (int j=0;j<init;j++)
        {
            cout << "  ";
        }

        for (int j=1;j<=n-i;j++)
        {
            cout << "* ";
        }
        init +=2;
        cout << endl;
   }



   int init2=2*n-2;
    for (int i=0;i<n;i++)
   {

        for (int j=1;j<=i;j++)
        {
            cout << "* ";
        }

        for (int j=0;j<init2;j++)
        {
            cout << "  ";
        }

        for (int j=1;j<=i;j++)
        {
            cout << "* ";
        }
        
        init2 -=2;
        cout << endl;
   }
    
}