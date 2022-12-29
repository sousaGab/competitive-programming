#include<iostream>
#include<math.h>
using namespace std;

int main(){

	int l,c,r1,r2;
	long double d,xc,yc;

	cin>>l>>c>>r1>>r2;

	while( l!=0 && c!=0 && r1!=0 && r2!=0 ){
		
		if (2*r1<=l && 2*r1<=c && 2*r2<=l && 2*r2<=c){
		
			xc=l-r1-r2;
			yc=c-r1-r2;
			d=sqrt((xc*xc)+(yc*yc));

			if( (r1+r2)<=d){
				cout<<"S"<<endl;
			}else{
				cout<<"N"<<endl;
			}

		}else{
			cout<<"N"<<endl;	
		}
		
		cin>>l>>c>>r1>>r2;	
	}

  return 0;
}
