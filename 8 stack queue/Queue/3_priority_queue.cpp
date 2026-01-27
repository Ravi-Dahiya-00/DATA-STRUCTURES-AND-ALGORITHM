#include <iostream>
using namespace std;

class PriorityQueue {
private:
    int arr[100];  
    int size;

public:
    PriorityQueue() {
        size = 0;
    }

    // Insert element (max heap)
    void insert(int x) {
        arr[size] = x;
        int i = size;
        size++;

        // up-heapify
        while (i != 0) {
            int parent = (i - 1) / 2;
            if (arr[parent] < arr[i]) {
                swap(arr[parent], arr[i]);
                i = parent;
            } else {
                break;
            }
        }
    }

    // Get highest priority element
    int getMax() {
        if (size == 0) {
            cout << "Priority Queue is empty\n";
            return -1;
        }
        return arr[0];
    }

    // Remove highest priority element
    int removeMax() {
        if (size == 0) {
            cout << "Priority Queue is empty\n";
            return -1;
        }

        int maxValue = arr[0];
        arr[0] = arr[size - 1];
        size--;

        // down-heapify
        int i = 0;
        while (true) {
            int left = 2 * i + 1;
            int right = 2 * i + 2;
            int largest = i;

            if (left < size && arr[left] > arr[largest]) {
                largest = left;
            }

            if (right < size && arr[right] > arr[largest]) {
                largest = right;
            }

            if (largest != i) {
                swap(arr[i], arr[largest]);
                i = largest;
            } else {
                break;
            }
        }

        return maxValue;
    }

    bool isEmpty() {
        return size == 0;
    }

    void print() {
        if (size == 0) {
            cout << "Priority Queue is empty";
            return;
        }
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    PriorityQueue pq;

    pq.insert(30);
    pq.insert(10);
    pq.insert(50);
    pq.insert(20);

    cout << "Priority Queue elements: ";
    pq.print();

    cout << "Max element: " << pq.getMax() << endl;

    cout << "Removed max: " << pq.removeMax() << endl;

    cout << "After removal: ";
    pq.print();

    return 0;
}
