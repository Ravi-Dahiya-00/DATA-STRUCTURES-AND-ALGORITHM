#include <iostream>
#include <vector>
using namespace std;

// parent = (index/2)
// left= 2*i;
// right = 2*i+1
// leafnode = (n/2 + 1)
class MaxHeap {
    vector<int> heap;
    int size=0;

public:
    MaxHeap(){
        heap.push_back(0);
    }
    void insert(int value) {
        heap.push_back(value);
        int index=heap.size()-1;
        while(index>1){
            int parent=index/2;
            if( heap[parent]<heap[index]){
                swap(heap[parent],heap[index]);
                index=parent;
            }
            else{
                break;
            }
        }
    }

    void printHeap() {
        for (int x : heap)
            cout << x << " ";
        cout << endl;
    }
};

int main() {
    MaxHeap h;

    h.insert(50);
    h.insert(30);
    h.insert(40);
    h.insert(10);
    h.insert(20);
    h.insert(60);

    h.printHeap();
    return 0;
}
