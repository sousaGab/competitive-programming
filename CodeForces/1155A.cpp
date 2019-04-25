#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,l,r;
  bool flag = false;
  string s;
  cin >>n;
  cin >>s;

  for(int i=1; i<n; ++i){
    if (s[i] < s[i-1] ){
      flag = true;
      l = i;
      r = i+1;
      break;
    }
  }
  if (flag){
    cout << "YES\n";
    cout << l << " " << r <<endl;
  }else{
    cout << "NO\n";
  }
  return 0;
}
