#include <bits/stdc++.h>
using namespace std;

int main() {

    int vertex, edges;
    
    cout<<"Enter the number of vertex: ";
    cin >> vertex;

    cout<<"Enter the number of edges: ";
    cin>>edges;
    
    // Undirected unweighted graph
    vector<int> AdjList[vertex];
    
    // directed unweighted graph
    vector<int> DirAdjList[vertex];

    
    // Undirected weighted graph
    vector<pair<int, int>> AdjListW[vertex];
    
    // Directed weighed graph
    vector<pair<int, int>> DirAdjListW[vertex];
    
    
    int u, v,w;

    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v >> w;
        
        // Undirected unweighted graph
        AdjList[u].push_back(v);
        AdjList[v].push_back(u);
        
        // Directed unweighted graph
        DirAdjList[u].push_back(v);

        // Undirected weighted graph
        AdjListW[u].push_back(make_pair(v, w));
        AdjListW[v].push_back(make_pair(u, w));

        // Directed weighted graph
        DirAdjListW[u].push_back(make_pair(v, w));

    }
    
    

    // Print the list

    cout<<"Undirected unweighted graph:\n";
    for (int i = 0; i < vertex; i++)
    {
        cout << i << " -> ";
        for (int j = 0; j < AdjList[i].size(); j++)
        {
            cout << AdjList[i][j] << " ";
        }
        cout << endl;
    }


    cout<<"Undirected weighted graph:\n";
    for (int i = 0; i < vertex; i++)
    {
        cout << i << " -> ";
        for (int j = 0; j < AdjListW[i].size(); j++)
        {
            cout << AdjListW[i][j].first << " " << AdjListW[i][j].second<<" | ";
        }
        cout << endl;
    }

    cout<<"Directed unweighted graph:\n";
    for (int i = 0; i < vertex; i++)
    {
        cout << i << " -> ";
        for (int j = 0; j < DirAdjList[i].size(); j++)
        {
            cout << DirAdjList[i][j] << " ";
        }
        cout << endl;
    }

    cout<<"Directed weighted graph:\n";
    for (int i = 0; i < vertex; i++)
    {
        cout << i << " -> ";
        for (int j = 0; j < DirAdjListW[i].size(); j++)
        {
            cout << DirAdjListW[i][j].first << " " << DirAdjListW[i][j].second<<" | ";
        }
        cout << endl;
    }
    return 0;
}

/*
Output:

Enter the number of vertex: 5
Enter the number of edges: 6
0 1 5
0 3 9
0 2 6
1 4 2
3 4 3
2 3 4
Undirected unweighted graph:
0 -> 1 3 2 
1 -> 0 4 
2 -> 0 3 
3 -> 0 4 2 
4 -> 1 3 
Undirected weighted graph:
0 -> 1 5 | 3 9 | 2 6 | 
1 -> 0 5 | 4 2 | 
2 -> 0 6 | 3 4 | 
3 -> 0 9 | 4 3 | 2 4 | 
4 -> 1 2 | 3 3 | 
Directed unweighted graph:
0 -> 1 3 2 
1 -> 4 
2 -> 3 
3 -> 4 
4 -> 
Directed weighted graph:
0 -> 1 5 | 3 9 | 2 6 | 
1 -> 4 2 | 
2 -> 3 4 | 
3 -> 4 3 | 
4 -> 
*/