#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
   // int adj[n+1][n+1];
   //Using adjacnecy matrix


    // vector<vector<int>>adj(n+1,vector<int>(n+1,0));
    // for(int i=0;i<m;i++){
    //     int u,v;
    //     cin>>u>>v;
    //     adj[u][v]=1;
    //     adj[v][u]=1;
    // }
    // for(int i=0;i<n+1;i++){
    //     for(int j=0;j<n+1;j++){
    //         cout<<adj[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    //Using list
    vector<vector<int>>adj(n+1);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }

    for(int i=0;i<n+1;i++){
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}