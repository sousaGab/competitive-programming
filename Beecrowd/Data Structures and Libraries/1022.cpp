#include <bits/stdc++.h>

int main(){
    int n;
    scanf ("%d",&n);
    int n1, d1, n2, d2;
    char a,c,b;
    int resp1, resp2, resp3, resp4;
    for (int i=0; i<n; i++){
        scanf ("%d %c %d %c %d %c %d", &n1, &a, &d1, &c, &n2, &b, &d2);
        if (c == '+'){
             resp1 = ( (n1*d2) + (n2*d1) ); 
             resp2 = (d1*d2); 
        }
        else if (c == '-'){
             resp1 = ( (n1*d2) - (n2*d1) );
             resp2 = (d1*d2); 
        }
        else if (c == '*'){
             resp1 = (n1*n2);
             resp2 = (d1 *d2);
        }else if(c == '/'){
             resp1 = (n1*d2);
             resp2 = (n2*d1);
        }
        bool flag = false;
        for (int j=std::min(abs(resp1), abs(resp2)); j > 1; j-- ){
            if ( resp1 % j == 0 && resp2 % j == 0){
                resp3 = resp1/j;
                resp4 = resp2/j;
                flag = true;
                break;        
            }
        } 
        if (!flag){
            resp3 = resp1;
            resp4 = resp2;
        }
        printf ("%d/%d = %d/%d\n",resp1 , resp2,resp3, resp4);
    }
    return 0;
}   
