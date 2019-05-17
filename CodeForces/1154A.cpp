#include<bits/stdc++.h>
using namespace std;

int main(){

  long long int a,b,c,in[4];

  for(int i=0; i<4;++i)
    cin >> in[i];

  sort(in, in+4);

  c =(in[2] - (in[1]-in[0]) )/2;
  b = in[2]-c;
  a = in[3] - in[2];

  cout << a <<" "<< b<<" "<<c<<endl;

  return 0;
}
