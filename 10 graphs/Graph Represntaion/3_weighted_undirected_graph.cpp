#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
What is a Weighted Undirected Graph

    Weighted means every edge has a cost or value
    Undirected means connection works both ways
    Edge u v w means
    connection between u and v
    weight or cost is w
    travel is possible from u to v and v to u
    */
int main(){
    int vertices,edges;
    cin>>vertices>>edges;

    vector<vector<int>> adjacency(vertices,vector<int>(vertices,0));

    for (int i=0;i<edges;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adjacency[u][v]=w;
        adjacency[v][u]=w;
    }

    for (int i=0;i<vertices;i++){
        for (int j=0;j<vertices;j++){
            cout << adjacency[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}