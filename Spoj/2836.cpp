#include<bits/stdc++.h>
#define MAXN 110
#define MAXV 50010
#define INF 60000
using namespace std;
 
int s[MAXN],v,n,memo[MAXN][MAXV];
 
//v = valor, id = indice da moeda
int f(int v,int id){
 
 if(v < 0) return INF+1;
  
 if(memo[id][v] == -1){
 
   memo[id][v] = min(1+f(v-s[id],id),f(v,id+1));
 
 } 
 
 return memo[id][v];
 
}
 
int main(){
 
  while (true){
    cin >> v;
    if (v == 0) break;
    cin >> n;
 
    for(int i=0; i<n;++i)
      cin >> s[i];
 
    memset( memo, -1, sizeof(memo));
    memset( memo[n], INF, sizeof(memo[n]));
    memo[n][0] = 0;
 
    printf (f(v,0) > 50000 ? "Impossivel\n": "%d\n", f(v,0));
  }
    return 0;
}
 
