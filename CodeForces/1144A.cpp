#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  string s;
  cin >>  n;

  for(int i=0;i<n;++i){
    vector<char> c;
    cin >>s;

    for (int j=0; j<(int)s.size();++j)
      c.push_back(s[j]);

    sort (c.begin(), c.end());
    char aux = c[0]-1;
    bool flag = false;
    for (int j=0; j<(int)s.size();++j){
      if (c[j] !=aux +1){
        flag = true;
        break;
      }
      aux = c[j];
    }

    if (!flag)
      cout << "Yes\n";
    else
      cout << "No\n";
  }

  return 0;
}
