#include<bits/stdc++.h>
using namespace std;
priority_queue < pair < int, int> > counter; 
int c, n, t, d, out = 0;
int main(){

  scanf("%d%d", &c, &n);
  for(int i=0; i<c;i++){
    pair <int, int> tmp = make_pair(0,-(i+1));
    counter.push(tmp);
  }
  for(int i=0;i<n;i++){
    scanf("%d%d", &t, &d); 

    pair <int, int> tmp2 = counter.top();
    counter.pop();
   
    pair <int, int> tmp1 = make_pair(-(d +(max(-tmp2.first , t))), tmp2.second);
    counter.push(tmp1);

    if ((-tmp2.first-t)>20){
      out++;
    }
  }
  printf("%d\n", out);

  return 0;
}
