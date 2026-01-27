#include <iostream>
#include <vector>
using namespace std;

class HashTable {
    vector<int> table;
    int size;

public:
    HashTable(int s) {
        size = s;
        table.resize(size, -1);
    }

    int hashFunction(int key) {
        return key % size;
    }

    void insert(int key) {
        int index = hashFunction(key);

        while (table[index] != -1) {
            index = (index + 1) % size;
        }

        table[index] = key;
    }

    bool search(int key) {
        int index = hashFunction(key);
        int start = index;

        while (table[index] != -1) {
            if (table[index] == key)
                return true;

            index = (index + 1) % size;

            if (index == start)
                return false;
        }
        return false;
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << i << " : ";
            if (table[i] == -1)
                cout << "EMPTY";
            else
                cout << table[i];
            cout << endl;
        }
    }
};

int main() {
    HashTable h(7);

    h.insert(10);
    h.insert(20);
    h.insert(15);
    h.insert(7);
    h.insert(22);

    h.display();

    cout << h.search(15) << endl;
    cout << h.search(99) << endl;
}
