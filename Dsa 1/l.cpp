#include <bits/stdc++.h>
using namespace std;

#define V 5

void display(int parent[], int graph[V][V]){
  for(int i = 1; i<V; i++){
    cout<<i<<"---->"<<parent[i]<<" ";
    cout<<"weight ->"<<graph[i][parent[i]]<<endl;
  }
}

int min_index(bool visited[], int mweight[]){
    int minn = INT_MAX; int mini;
  for(int i = 0; i<V; i++){
    if(mweight[i] < minn && !visited[i]){
      minn = mweight[i]; mini = i;
    }
  }
  return mini;
}

void primMST(int graph [V][V]){
  bool visited[V];
  int parent[V];
  int mweight[V];

  for(int i = 0; i<V; i++){
    visited[i] = false;
    mweight[i] = INT_MAX;
  }
  parent[0] = -1;
  mweight[0] = 0;

  for(int i = 0; i< V-1; i++){

    int u = min_index(visited,mweight);
    visited[u] = true;

    for(int i = 0; i< V; i++){
      if(graph[u][i] && !visited[i] && (mweight[i] > graph[u][i]) ){
        parent[i] = u;
        mweight[i] = graph[u][i];
      }
    }

  }
  display(parent,graph);

}


int main()
{
  int graph[V][V] = { 
            { 0, 2, 0, 6, 0 },
            { 2, 0, 3, 8, 5 },
            { 0, 3, 0, 0, 7 },
            { 6, 8, 0, 0, 9 },
            { 0, 5, 7, 9, 0 } };
  primMST(graph);

  return 0;
}
