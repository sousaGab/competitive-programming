#include<bits/stdc++.h>
#define MAXN 1010
#define MAXV 50010
using namespace std;
int v,m,c[MAXN];
int mem[MAXN][MAXV];
char ans = 'N';
 
void pd(int coin, int soma){
 
  if (mem[coin][soma]) return;
 
  mem[coin][soma]=1;
 
  if(soma == v){
    ans = 'S';
    return;
  }
 
  if (coin > m || soma > v) return;
 
  pd(coin+1, soma+c[coin]);
  pd(coin+1,soma);
 
}
 
int main(){
 
  bool flag = false;
 
  cin >> v >> m;
  
  for(int i=0;i<m;++i)
    cin >> c[i];
 
  pd(0,0);
 
 
  printf ("%c\n",ans);
 
  return 0;
}
 
