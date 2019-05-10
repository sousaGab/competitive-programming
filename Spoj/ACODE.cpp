#include<bits/stdc++.h>
#define MAXN 60000
using namespace std;

long long int dp[MAXN];
bool invalid = false;

long long int value(string s){

  int id = s.size();
  dp[0] = 1;
  if (id >=2){
    if (s[1] == '0'){
      if (s[0] != '1'&& s[0] !='2'){
        invalid = true;
      }
    }
    int aux = ((s[0]-'0')*10) + s[1]-'0';
    if ((aux >= 10 && aux<=26) && (aux !=10 && aux !=20)){
      dp[1]=2;
    }else{
      dp[1]=1;
    }
  }else{
    return 1;
  }

  for (int i=2;i<id;++i){
    if (s[i] == '0'){
      if (s[i-1] != '1'&& s[i-1] !='2'){
        invalid = true;
        break;
      }

      dp[i]=dp[i-2];

    }else{ 
      int aux = ((s[i-1]-'0')*10) + s[i]-'0';

      if (aux>= 10 && aux<=26){
        dp[i] = dp[i-1] + dp[i-2];
      }else{
        dp[i] = dp[i-1];
      }
    }
  }

  if(invalid) return 0;

  else return dp[id-1];
}

int main(){

  while(1){
    string s1;
    cin >> s1;
    if (s1[0] == '0' && s1.size() ==1) break;
    invalid = false;
    printf("%lld\n",value(s1));
  }

  return 0;
}
