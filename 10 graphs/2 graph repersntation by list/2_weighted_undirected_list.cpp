#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int vertices,edges;
    cin>>vertices>>edges;

    vector<vector<pair<int,int>>> adjacency(vertices);
    for(int i=0;i<edges;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adjacency[u].push_back({v,w});
        adjacency[v].push_back({u,w});
    }

    for (int i=0;i<vertices;i++){
        cout << i << "->";
        for(auto p:adjacency[i]){
            cout << "(" << p.first << "," << p.second << ")";
        }
        cout << endl;
    }
}