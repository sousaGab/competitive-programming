#include<iostream>
using namespace std;

int main(){
  int n,cont=0, v[5];
  cin>>n;
  for (int i=0; i<5; i++){
    cin>>v[i];
  }
  for (int i=0; i<5; i++){
    if(v[i]==n){
    cont++;
    }
  }
  cout<<cont<<endl;
  return 0;
}