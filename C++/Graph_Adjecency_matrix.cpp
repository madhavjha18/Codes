#include <bits/stdc++.h>
using namespace std;

int main() {

    int vertex,edges;
    cout<<"Enter number of vertices: ";
    cin>>vertex;
    cout<<"Enter number of edges: ";
    cin>>edges;


    // undirected unweighted Adjecency matrix
    vector<vector<bool>>adj(vertex,vector<bool>(vertex,0));
    
    // undirected weighted Adjecency matrix
    vector<vector<int>>weighted(vertex,vector<int>(vertex,0));
    
    // directed unweighted Adjecency matrix
    vector<vector<bool>>dirAdj(vertex,vector<bool>(vertex,0));
    
    // directed weighted Adjecency matrix
    vector<vector<int>>dirWtd(vertex,vector<int>(vertex,0));
    
    
    int u,v;
    int w;
    
    for(int i = 0; i < edges; i++){
        cin>>u>>v>>w;
        
        // undirected unweighted Adjecency matrix
        adj[u][v] = 1;
        adj[v][u] = 1;

        // undirected weighted Adjecency matrix
        weighted[u][v] = w;
        weighted[v][u] = w;
        
        // directed unweighted Adjecency matrix
        dirAdj[u][v] = 1;

        // directed weighted Adjecency matrix
        dirWtd[u][v] = w;
    }

    cout<<"Undirected unweighted Adjecency matrix:\n";
    for(int i = 0; i < vertex; i++){
        for(int j = 0; j < vertex; j++)
            cout<<adj[i][j]<<" ";

        cout<<"\n";
    }
    
    cout<<"Undirected weighted Adjecency matrix:\n";
    for(auto &row : weighted){
        for(auto &i : row)cout<<i<<" ";
        
        cout<<"\n";
    }
    
    cout<<"Directed unweighted Adjecency matrix:\n";
    for(int i = 0; i < vertex; i++){
        for(int j = 0; j < vertex; j++)
        cout<<dirAdj[i][j]<<" ";
        
        cout<<"\n";
    }
    
    cout<<"Directed weighted Adjecency matrix:\n";
    for(auto &row : dirWtd){
        for(auto &i : row)cout<<i<<" ";
        
        cout<<"\n";
    }
    

    return 0;
}

/*
Output: 

Enter number of vertices: 5
Enter number of edges: 6
0 1 5
0 2 6
0 3 9
1 2 4
2 3 4
3 4 5
Undirected unweighted Adjecency matrix:
0 1 1 1 0 
1 0 1 0 0 
1 1 0 1 0 
1 0 1 0 1 
0 0 0 1 0 
Undirected weighted Adjecency matrix:
0 5 6 9 0 
5 0 4 0 0 
6 4 0 4 0 
9 0 4 0 5 
0 0 0 5 0 
Directed unweighted Adjecency matrix:
0 1 1 1 0 
0 0 1 0 0 
0 0 0 1 0 
0 0 0 0 1 
0 0 0 0 0 
Directed weighted Adjecency matrix:
0 5 6 9 0 
0 0 4 0 0 
0 0 0 4 0 
0 0 0 0 5 
0 0 0 0 0 
*/