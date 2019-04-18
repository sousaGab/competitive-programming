#include<bits/stdc++.h>
#define NUM 1000000007
using namespace std;


vector < pair < int, int > > graph [100010];
bool visited[100010];

unsigned long long int pot( unsigned long long int a , unsigned long long int b){

  unsigned long long int out = a;

  if (b < 1) return 1;

  for (int i=0; i<b-1;++i){
    out = out * a % NUM;
  }
  return out;
}


int dfs ( int node){
  
  visited[node] = true;
  
  if ( graph[node].size() == 0){
    return 1;
  }
  else{
    int value = 1;
    for (int i=0; i<graph[node].size();++i){
      int v = graph[node][i].first;
      int c = graph[node][i].second;

      if (!visited[v]){
        if ( c == 0){
          value += dfs(v);
        }
      }
    }
    return value;
  }
}

int main(){
  
  long long int n,k, a,b,t;
  long long int out;

  cin >> n >> k;
  out = pot(n,k)-n;
  for(int i=0;i<n-1;++i){
    cin >> a >> b >>t;
    graph[a].push_back( make_pair(b,t));
    graph[b].push_back( make_pair(a,t));
  }
  long long int x;

  for (int i=1; i<=n; ++i){
    if (!visited[i]){
      x = dfs(i);
      if (x > 1){
        unsigned long long int aux = pot(x,k)-x;
        out = (out - aux + NUM)%NUM;
      }
    }
  }
  
  cout << out<<endl;
  return 0;
}
