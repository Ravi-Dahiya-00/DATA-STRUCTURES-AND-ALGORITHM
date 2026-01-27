#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Undirected Graph using Adjacency List

int main(){
    int vertices,edges;
    cin>>vertices>>edges;

    vector<int> adjacency[vertices];
    for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        adjacency[u].push_back(v);
        adjacency[v].push_back(u);
    }

    for(int i=0;i<vertices;i++){
        cout << i << "-> ";
        for(int v:adjacency[i]){
            cout << v << " ";
        }
        cout << endl;
    }
    return 0;
}