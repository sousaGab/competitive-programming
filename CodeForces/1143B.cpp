#include<bits/stdc++.h>
using namespace std;

int main(){

  string s;
  bool flag = true;
  unsigned long long int a,b,out = 1,past = 1,aux = 1;

  cin >>s;

  for( int i=0; i<(int)s.size(); i++){ 

    out *=9;

    if (s[i] != '9'){
      flag = false;
      out = 1;
      break;
    }        

  }

  if (flag){
    cout << out <<endl;
  }
  else{

    out = 1;

    if (s.size() > 1){
      for( int i=0; i<(int)s.size(); i++){ 
        out *=s[i]-'0';
      }

      aux = 1;
      a = s[0]-'0';

      if ( a!= 1)  aux *= a-1;

      for( int i=1; i<(int)s.size(); i++){ 
        aux*=9;
      }
      out = max ( out, aux);
      aux = 1;

      for( int i=1; i<(int)s.size()-1; i++){

        aux = 1;

        for( int x=0; x<i; x++)
          aux *= s[x] - '0';


        if ( s[i]!= '0' ){
          aux *= ((s[i] - '0')-1);
        }else{
          for( int x=i-1; x>=0; x--){
            if ( s[x] != '0'){
              if ( s[x] == '1' && x== 0){
                break;
              }
              aux /= s[x] - '0';
              aux *= s[x] - '0' - 1;
              break;
            }
            else{
              aux *= 9;
            }
          }

        }

        for( int j=i+1; j<(int)s.size(); j++){ 
          aux*=9;
        }

        out = max (out, aux);
      }

    }else{
      out = 1;

      if ( a != 1){
        out *= a-1;
      }else{
        out *= 1;
      }

      for( int i=0; i<(int)s.size()-1; i++) 
        out*=9;

    }

    if( s.size() == 1){
      out = s[0] - '0';
    }

    cout << out << endl;
  }
  return 0;
}

