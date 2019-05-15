#include<bits/stdc++.h>
#define MAXN 60
using namespace std;

int n;
int c[4] = {0,0,1,-1};
int l[4] = {1,-1,0,0};
char board[60][60];
bool test;

bool can(int i,int j){
  if (i>=0 && i<n && j>=0 && j<n && board[i][j] == '.')
    return true;
  return false;
}

void change(int i,int j){
  board[i][j] = '#';
}

int main(){
  cin >> n;

  for(int i=0;i<n;++i)
    for(int j=0;j<n;++j)
      cin>> board[i][j];

  for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
      test = true;
      for(int k=0;k<4;++k){
        if (!can(i+c[k],j+l[k])){
          test = false;
        }
      }
      if(test && can(i,j)){
        change(i,j);
        for(int k=0;k<4;++k){
          change(i+c[k],j+l[k]);
        }
      }
    }
  }
  test = true;
  for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
      if(board[i][j]!= '#')
        test = false;
    }
  }
  if(test) cout << "YES\n";
  else cout << "NO\n";

  return 0;
}
