#include<bits/stdc++.h>
using namespace std;

set <long long int> v;
long long int n, out, aux;

long long int f(int v){
  long long int o=0;
  string a="",b="";
  v+=1;
  a = a + to_string(v);
  int ind = -1;
  for (int i=a.size()-1;i>=0;i--){
    if(a[i]=='0'){
      continue;
    }
    else{
      ind = i;
      break;
    }
  }
  for (int i=ind;i>=0;--i)
    b+=a[i];
  for (int i=0;i<=ind;++i)
    o+= (b[i]-'0')* pow(10,i);

  return o;
}

int main(){

  out = 1;
  cin >>n;
  v.insert(n);

  while(1){
    aux = f(n);
    if(v.find(aux)!=v.end()){
      break;
    }else{
      v.insert(aux);
      n = aux;
      out++;
    } 
  }
  
  cout << out <<endl;

  return 0;
}
