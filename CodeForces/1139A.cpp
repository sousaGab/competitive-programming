#include<bits/stdc++.h>
using namespace std;

int main(){

  string s;
  int n,out = 0;

  cin >> n;
  cin >> s;

  for (int i=0; i<n; ++i){
    int num = s[i] -'0';
    if (num%2==0){
      out ++;
      out += i;
    }
  }
  cout << out <<endl;

  return 0;
}
