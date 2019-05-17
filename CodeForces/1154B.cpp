#include<bits/stdc++.h>
using namespace std;

int main(){

 int nmin, nmax,nmidle,in[110],n,D;
 bool find = false, flag = false;

 cin >> n;

 for(int i=0 ; i<n; ++i)
   cin >> in[i];  

 sort( in,in+n);

 nmax = in[n-1];
 nmin = in[0];
 nmidle = in[0];

 for(int i=0; i<n;++i){
   if(!find){
     if(in[0] != in[i] && in[n-1] != in[i] ){
       nmidle = in[i];
       find = true;
     }
   }
   else{
     if(in[0] != in[i] && in[n-1] != in[i] && in[i] != nmidle ){
       flag =true;
     }
   }
 }

 D = nmax - nmidle;
 if (D == 0){
  D = nmidle - nmin;
 }

 if ((D!=0&&((nmax > nmidle && nmidle != nmax - D)|| (nmin < nmidle && nmidle != nmin + D))))
   flag = true;

 if( (nmax == nmidle || nmin == nmidle) && D%2==0){
  D/=2;
 }

 if(!flag) cout << D <<endl;
 else cout << -1 <<endl;
  
  return 0;
}
