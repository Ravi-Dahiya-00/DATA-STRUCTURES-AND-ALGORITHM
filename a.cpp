#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class vechile{
public:
    vechile(){
        cout << "This is a vechile";
    }
};
class car : public vechile{
public:
    car(){
        cout << "This vechile is car" << endl;
    }
};
int main(){
    car obj;

    return 0;
}