#include <iostream>
#include <climits>
using namespace std;

int findMinVertex (int* distance, bool* visited, int n){
    int minVertex = -1; //hence initially we have no min vertex.
    for (int i = 0; i<n; i++ ){
        if(!visited[i] && (minVertex == -1 || distance[i] < distance[minVertex]))
        {
            //which vertex not visited we have to check these vertices
            //so !vertex[i] should true and also distance should be smaller.
            minVertex = i;
        }
    }
    return minVertex;
}

void Dijkstra(int **edges, int n)
{
    //int type array for distance
    int * distance = new int[n];
    //i need a boolean type array that a vertex is visited or not.
    bool* visited = new bool [n];

    
    for(int i = 0; i<n; i++){
        distance[i] = INT_MAX; //initially all the distace will infinity
        visited[i] = false; // initially no visit so visited is false.    
    }
    distance[0] = 0; // source/start vertex distance should be 0.
    for (int i = 0; i< n-1; i++)
{
        int minVertex = findMinVertex(distance, visited,n);
        visited[minVertex] = true ;
        for (int j = 0; j<n; j++)
    {
            if(edges[minVertex][j] != 0 && !visited[j]) 
        {
                //minVertex to j should > 0 then there is edges.
            //vertex should not be visited.
            int dist = distance[minVertex] + edges[minVertex][j];
            if (dist <distance[j])
            {
                distance[j] = dist; //update distance value if it is smaller.

            }    
        }
    }
}
    for(int i = 0; i<n; i++ )
    {
        cout << i << " " << distance[i] << endl;
    }
    delete [] visited;
    delete [] distance;
    //deleting these array that i've created.

}

int main()
{
    int n,e;
    cin >> n >> e;
    int** edges = new int*[n];
    for(int i=0; i<n; i++)
    {
        edges[i] = new int [n];
        for(int j=0; j<n; j++)
        {
            edges[i][j] = 0;
        }
    }

    for (int i = 0; i<e; i++ )
    {
        int f, s, weight;
        cin >> f >> s >> weight;
        edges[f][s] = weight;
        edges[s][f] = weight;
    }
    cout << endl;
    Dijkstra(edges, n);
    //after the implementation we will delete the array that we've used.
    for(int i = 0; i<n; i++)
    {
        delete [] edges[i];        
    }
    delete [] edges;
}