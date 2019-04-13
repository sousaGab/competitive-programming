#include<bits/stdc++.h>
using namespace std;

int main(){
  int doors[1000000];
  int n, l = 0, r = 0, cont = 0;;
  scanf("%d", &n);

  for(int i=0;i<n;i++){
    scanf ("%d", &doors[i]);
    (doors[i] == 0) ? l++ : r++;
  }
  for(int i=0;i<n;i++){
    (doors[i] == 0) ? l-- : r--;
    cont = i; 
    if (l==0 | r == 0) break;
  }

  printf("%d\n", cont+1);
  return 0;
}
