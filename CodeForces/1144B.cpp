#include<bits/stdc++.h>
using namespace std;

bool f(int a, int b){
  return a > b;
}

int main(){

  int n,v;
  vector<int> odd, even;

  cin >> n;

  for (int i=0;i<n;++i){
    cin >> v;
    if ( v%2!=0){
      odd.push_back(v);
    }else{
      even.push_back(v);
    }
  }

  sort(odd.begin(), odd.end(),f);
  sort(even.begin(), even.end(),f);

  int sodd = odd.size();
  int seven = even.size();

  int out1 = 0;
  int out2 = 0;

  int podd = 0;
  int peven = 0;

  if (podd < sodd){
    podd++;

    while(true){
      if (peven < seven)
        peven++;
      else
        break;
      if (podd < sodd)
        podd++;
      else
        break;
    }
  }

  for (int i=peven;i<seven;++i){
    out1 += even[i];
  }
  for (int i=podd;i<sodd;++i){
    out1 += odd[i];
  }

  podd = 0;
  peven = 0;

  if (peven < seven){
    peven++;
    while(true){
      if (podd < sodd)
        podd++;
      else
        break;
      if (peven < seven)
        peven++;
      else
        break;
    }
  }
  for (int i=peven;i<seven;++i){
    out2 += even[i];
  }
  for (int i=podd;i<sodd;++i){
    out2 += odd[i];
  }


  cout << min(out1,out2)<<endl;
  return 0;
}
