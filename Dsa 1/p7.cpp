#include <iostream>
using namespace std;
#define size 5

using namespace std;

void display(int graph[size][size], int parent[]){
    for(int i =1; i< size; i++){
        cout<<i<<"-------"<<parent[i]<<"| w : "<<graph[i][parent[i]];
        cout<<endl;
    }

}

int miv(int minv[], bool visited[]){
    int minvv = INT_MAX;
    int mini;
    for(int i = 0; i<size; i++){
        if(!visited[i] && minv[i] < minvv){
            minvv = minv[i];
            mini = i;
        }
    }
    return mini;
}

void prims(int graph[size][size]){
    int minv[size];
    int parent[size];
    bool visited[size];

    for(int i = 0; i<size;i++){
        visited[i] = false;
        minv[i] = INT_MAX;
    }
    parent[0] = -1;
    minv[0] = 0;

    for(int v = 0; v<size-1; v++){
        int V = miv(minv,visited);
        visited[V] = true;

        for(int i = 0; i< size; i++){
            if(graph[v][i] && !visited[i] && minv[i] > graph[v][i]){
                minv[i] = graph[v][i];
                parent[i] = v;
            }
        }

    }
    display(graph,parent);


}

int main(){
    int graph[size][size] = { 
            { 0, 2, 0, 6, 0 },
            { 2, 0, 3, 8, 5 },
            { 0, 3, 0, 0, 7 },
            { 6, 8, 0, 0, 9 },
            { 0, 5, 7, 9, 0 } };
  prims(graph);

  return 0;
}