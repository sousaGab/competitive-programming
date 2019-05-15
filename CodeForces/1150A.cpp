#include<bits/stdc++.h>
using namespace std;

bool compare(int a, int b){
  return a > b;
}

int main(){

  int n,m,s[50],b[50],v;

  cin >> n >> m >> v;

  for (int i=0; i<n;++i)
    cin >> s[i];
  for (int i=0; i<m;++i)
    cin >> b[i];

  sort(s,s+n);
  sort(b,b+m,compare);

  if ( s[0] < b[0])
    v =v + (b[0]-s[0])*(v/s[0]);
  cout << v <<endl;

  return 0;
}
