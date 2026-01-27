#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

    /*
    Directed graph
        Edge u v means u → v
        Matrix update

        adj[u][v] = 1*/


int main(){
    int vertices,edges;
    cin>>vertices>>edges;

    vector<vector<int>> adjacency(vertices,vector<int>(vertices,0));

    for (int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        adjacency[u][v]=1;
    }

    for (int i=0;i<vertices;i++){
        for(int j=0;j<vertices;j++){
            cout << adjacency[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}