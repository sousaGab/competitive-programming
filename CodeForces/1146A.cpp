#include<bits/stdc++.h>
using namespace std;

int main(){

  int o, a=0;
  string s;
  cin >>s;
  
  for (int i=0; i<s.size();++i){
    if (s[i] == 'a')
      a++;
  }

  printf ("%d\n",(s.size()/2>=a) ? a+(a-1) : (int)s.size());
  return 0;
}
