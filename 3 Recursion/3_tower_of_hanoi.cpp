#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char help, char dest) {
    if(n == 0) return;

    towerOfHanoi(n - 1, source, dest , help);
    cout << "Move disk " << n << " from " << source << " to " << help << endl;
    towerOfHanoi(n - 1, dest, help, source);
}

int main() {
    int n=2;
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}  