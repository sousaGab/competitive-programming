#include<bits/stdc++.h>
using namespace std;

int main(){

  long long int f, cr=0,d;
  vector<long long int> a(3) ,b(3);
  int id[7]={0,1,2,0,2,1,0};
  cin >> a[0] >>a[1] >> a[2];

  f = min(a[0]/3,min(a[1]/2,a[2]/2));
  
  a[0] -= f*3;
  a[1] -= f*2;
  a[2] -= f*2;

  long long int out = 0;

  for(int i=0;i<7;++i){
    d = i;
    b = a;
    cr = 0;
    while(b[id[d]]>0){
      --b[id[d]];
      d = (d+1)% 7;
      ++cr;
    }
    out = max(out,f * 7 + cr);
  }
  cout << out<<endl;

  return 0;
}
