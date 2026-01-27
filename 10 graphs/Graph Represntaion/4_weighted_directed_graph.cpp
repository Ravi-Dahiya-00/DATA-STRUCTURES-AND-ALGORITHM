#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int vertices,edges;
    cin>>vertices>>edges;

    vector<vector<int>> adjaceny(vertices,vector<int>{vertices,0});
    for (int i=0;i<edges;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adjaceny[u][v]=w;

    }

    for (int i=0;i<vertices;i++){
        for(int j=0;j<vertices;j++){
            cout << adjaceny[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}