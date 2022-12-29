#include<iostream>

using namespace std;

int fib(int x,int & cont){
	if(x<=1){ 
		cont++;		
		return x;
	}
	else{
		cont+=1/2;
		return fib(x-1,cont)+fib(x-2,cont); 	
	}		
}

int main(){
	int n,x;
	cin>>n;	
	for(int i=0;i<n;i++){
		int cont=0;
		cin>>x;
		fib(x,cont);	
		cout<<"fib("<<x<<") = "<<cont-2<<" calls = "<<fib(x,cont)<<endl;		
	}
	return 0;
}
