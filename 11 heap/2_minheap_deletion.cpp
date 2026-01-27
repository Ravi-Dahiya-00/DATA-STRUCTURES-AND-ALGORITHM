#include <iostream>
#include <vector>
using namespace std;

class MinHeap {
    vector<int> heap;

public:
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

    void deleteRoot() {
        if (heap.empty()) {
            cout << "Heap is empty\n";
            return;
        }

        heap[1]=heap.back();
        heap.pop_back();

        int i=1;
        int size=heap.size();
        while(i<size){
            int left=2*i;
            int right=2*i+1;
            if(left<size && heap[i]<heap[left]){
                swap(heap[i],heap[left]);
                i=left;
            }
            else if(right<size && heap[i]<heap[right]){
                swap(heap[i],heap[right]);
                i=right;
            }
            else{
                return;
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
    MinHeap h;
    h.insert(10);
    h.insert(20);
    h.insert(5);
    h.insert(30);
    h.insert(40);

    h.printHeap();     // before deletion
    h.deleteRoot();    // delete min element
    h.printHeap();     // after deletion
}
