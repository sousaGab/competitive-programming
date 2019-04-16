#include<bits/stdc++.h>
using namespace std;

int main(){
  long long int  n, out = 0,a;
  vector<long long int>v;

  cin >> n;


  for(int i=0; i<n;++i){
    cin >> a;
    v.push_back(a);
  }

  out += v[n-1];
  long long int aux = out;

  for(int i=n-2; i>=0;--i){
    if ( v[i] >= aux){
      if ( aux != 0 ){
        out += aux-1;
        aux --;
      }else{
        aux = 0;
      }
    }
    else{
      out += v[i];
      aux = v[i];
    }
  }

  cout <<out<<endl;

  return 0;
}
