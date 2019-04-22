#include<bits/stdc++.h>
using namespace std;

int main(){

  int a=0,o=0,la=0;
  bool flag = false;
  string s, sc="";
  
  cin >>s;

  for (int i=0; i<s.size();++i){
    if (s[i] == 'a'){
      a++;
      la = i+1;
    }
    else{
      o++;
      sc+=s[i];
    }
  }

  int nc = s.size()-la, nf = o/2,rest=0;

  if (nc > nf){
    rest = (nc-nf);
  }

  int fc = la+rest;
  string out="";

  for (int i=0,j=fc ; i<s.size()-nf; ++i){

    if (s[i] == 'a'){
      out+=s[i];
    }else{
      if(s[i] != s[j]){
        flag = true;
      }
      out+=s[i];
      ++j;
    }  
  }

  if (flag){
    cout << ":("<<endl;
  }else{
    cout << out<<endl;
  }

  return 0;
}
