#include <iostream>
using namespace std;
#define v 9

int mindis(int distance[], bool visited[]){
        int mind = INT_MAX; int mini;

    for(int i = 0; i<v; i++){
        if(!visited[i] && distance[i]<mind){
            mind = distance[i];
            mini = i;
        }
    }
    return mini;
}

void print(int distance[]){
    for(int i = 0; i<v; i++){
        cout<<"Node -> "<<i<< "distance -> "<<distance[i]<<endl;
    }
}

void dijkstra(int graph[v][v], int node){
    int distance[v];
    bool visited [v];

    for(int i = 0; i<v; i++){
        distance[i] = INT_MAX;
        visited[i] = false;
    }

    distance[node] = 0;

    for(int i = 0; i< v-1; i++){
        int u = mindis(distance,visited);
        visited[u] = true;

        for(int k = 0; k <v; k++){
            if(graph[u][k] && !visited[k] && (distance[k] > distance[u] + graph[u][k])){
                distance[k] = distance[u] + graph[u][k];
            }
        }
    }
    print(distance);

}

int main()
{

    /* Let us create the example graph discussed above */
int graph[v][v] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                    { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                    { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                    { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                    { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                    { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
                    { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                    { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                    { 0, 0, 2, 0, 0, 0, 6, 7, 0 },
                     };

    // Function call
    dijkstra(graph, 0);

    return 0;
}