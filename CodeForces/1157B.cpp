#include<bits/stdc++.h>
using namespace std;

long long int n;
char c,v[10];

int main(){

  cin >>n;
  string s;

  cin >> s;
    
  for(int i=1;i<10;++i)
    cin>>v[i];

  bool flag = false;
  for(int i=0;i<n;++i){
    if(( flag && s[i] <= v[s[i]-'0']) || (!flag && s[i] < v[s[i] -'0']))
      flag = true;
    if(flag && s[i]>v[s[i]-'0'])
      break;
    if(flag)
      s[i] = v[s[i] -'0'];
  }

  cout << s << endl;

  return 0;
}
