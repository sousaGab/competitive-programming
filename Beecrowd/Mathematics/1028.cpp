#include<iostream>

using namespace std;
void troca( int &a, int &b ) {
   int c;
   c = a;
   a = b;
   b = c;
}

int mdc(int x, int y) {
   do {
      x = x % y;
      troca(x,y);
   } while ( y != 0 );

   return x;
}

int main(){
	
  int v,N[2];
	cin>>v;
  
  while(v>0){	
    for(int x=0;x<2;x++){
        cin>>N[x];
    } 
    cout<<mdc(N[0],N[1])<<endl;
    v--;
  }
	
  return 0;
}
