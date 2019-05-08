#include<bits/stdc++.h>
#define MAXN 10000
using namespace std;

long long int n, v,val[MAXN], dp[MAXN];

long long int maxLoot (long long int x){

  if ( x == 0)
    return 0;
  if ( x == 1)
    return val[0];
  if ( x == 2)
    return max (val[0], val[1]);

  dp[0] = val[0];
  dp[1] = max (val[0], val[1]);

  for(int i=2;i<x;++i)
    dp[i] = max(val[i]+dp[i-2], dp[i-1]);

  return dp[x-1];
}

int main(){
  cin >> n;

  for(int k=0; k<n;++k){
    cin >> v;

    for (int i=0;i<v;++i)
      cin >>val[i];
    
    memset(dp,0, sizeof(dp));

    cout <<"Case "<<k+1<<": "<<maxLoot(v)<<endl;
  }

  return 0;
}
