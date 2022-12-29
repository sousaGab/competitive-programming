#include<bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
#define MAXN 300
#define MAXM 100000
vector < pair < int , int> > graph[MAXN];
priority_queue < pair <int, int> > q;
int dist [MAXM];
bool processed[MAXN];
int N,M,C,K,U,V,P;

void dijkstra (){

  while (!q.empty()){
    int a = q.top().second;
    q.pop();
    if (processed[a]) continue;
    processed[a] = true;
    if (a < C) {
      for (int i=0 ; i<(int)graph[a].size() ; i++){
        int b = graph[a][i].first;
        int w = graph[a][i].second;
        if ( b == a+1){
          if (dist[a]+w < dist[b]){
            dist[b] = dist[a] + w;
            q.push(make_pair(-dist[b], b));
          }
        }
      }
    }else{
      for (int i=0 ; i<(int)graph[a].size() ; i++){
        int b = graph[a][i].first;
        int w = graph[a][i].second;
        if (dist[a]+w < dist[b]){
          dist[b] = dist[a] + w;
          q.push(make_pair(-dist[b], b));
        }
      }
    }
  }
}

int main(){

  while (true){
    scanf("%d%d%d%d", &N,&M,&C,&K);
    if ( N == 0 && M == 0 && C == 0 && K == 0) break;
    for (int i=0; i<N; i++)
      graph[i].clear();

    memset(dist , INF, sizeof(dist));
    memset(processed , false, sizeof(processed));
    for(int i=0; i<M ; i++){
      scanf("%d%d%d", &U , &V, &P);
      graph[U].push_back( make_pair( V, P));
      graph[V].push_back( make_pair( U, P));
    }
    dist[K] = 0;
    q.push(make_pair(0,K));

    dijkstra();

    cout << dist[C-1]<<endl;
  }

  return 0;
}
