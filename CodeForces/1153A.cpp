#include<bits/stdc++.h>
using namespace std;

int main(){

  int n, t, out=-1, cont = 9999999, s,d;

  cin >> n >> t;

  for (int i=0; i<n; ++i){
    cin >> s >> d; 

    int aux1= 0, aux2= 0;

    for (int x = 0; ; ++x){
      aux1 = s+(x)*d;
      if ( aux1 >= t){
        if (cont>aux1){
          cont = aux1;
          out= i+1;
        }
        break;
      }
    }
  }

  cout << out<<endl;

  return 0;
}
