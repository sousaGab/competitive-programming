#include <stdio.h>
using namespace std;

int z,x,y,v;

void formula(int a, int b, int c){
    z = a;
    v = ( z - (b+c) ) / 2;
    x = v + b;
    y = v + c;
}

int main(){
  int n;
  scanf ("%d", &n);
  for(int c=0; c<n; c++){
    int s1,s2[2],s3[3],s4[4],s5[5],s6[6],s7[7],s8[8],s9[9];
    scanf ("%d", &s1);
    scanf ("%d%d", &s3[0], &s3[2]);
    scanf ("%d%d%d", &s5[0], &s5[2], &s5[4]);
    scanf ("%d%d%d%d", &s7[0], &s7[2], &s7[4],&s7[6]);
    scanf ("%d%d%d%d%d", &s9[0], &s9[2], &s9[4],&s9[6],&s9[8]);
    formula(s1,s3[0],s3[2]);
    s2[0] = x;
    s2[1] = y;
    s3[1] = v;
    formula(s3[0],s5[0],s5[2]);
    s4[0] = x;
    s4[1] = y;
    s5[1] = v;
    formula(s3[2],s5[2],s5[4]);
    s4[2] = x;
    s4[3] = y;
    s5[3] = v;
    formula(s5[0],s7[0],s7[2]);
    s6[0] = x;
    s6[1] = y;
    s7[1] = v;
    formula(s5[2],s7[2],s7[4]);
    s6[2] = x;
    s6[3] = y;
    s7[3] = v;
    formula(s5[4],s7[4],s7[6]);
    s6[4] = x;
    s6[5] = y;
    s7[5] = v;
    formula(s7[0],s9[0],s9[2]);
    s8[0] = x;
    s8[1] = y;
    s9[1] = v;
    formula(s7[2],s9[2],s9[4]);
    s8[2] = x;
    s8[3] = y;
    s9[3] = v;
    formula(s7[4],s9[4],s9[6]);
    s8[4] = x;
    s8[5] = y;
    s9[5] = v;
    formula(s7[6],s9[6],s9[8]);
    s8[6] = x;
    s8[7] = y;
    s9[7] = v;

    printf ("%d\n", s1);
    for (int i=0;i<2;i++){
        if (i== 2-1)
            printf ("%d", s2[i]);
        else
            printf ("%d ", s2[i]);
    }
    printf("\n");
    for (int i=0;i<3;i++){
        if (i== 3-1)
            printf ("%d", s3[i]);
        else
            printf ("%d ", s3[i]);
    }
    printf("\n");
    for (int i=0;i<4;i++){
        if (i== 4-1)
            printf ("%d", s4[i]);
        else
            printf ("%d ", s4[i]);
    }
    printf("\n");
    for (int i=0;i<5;i++){
        if (i== 5-1)
            printf ("%d", s5[i]);
        else
            printf ("%d ", s5[i]);
    }
    printf("\n");
    for (int i=0;i<6;i++){
        if (i== 6-1)
            printf ("%d", s6[i]);
        else
            printf ("%d ", s6[i]);
    }
    printf("\n");
    for (int i=0;i<7;i++){
        if (i== 7-1)
            printf ("%d", s7[i]);
        else
            printf ("%d ", s7[i]);
    }
    printf("\n");
    for (int i=0;i<8;i++){
        if (i== 8-1)
            printf ("%d", s8[i]);
        else
            printf ("%d ", s8[i]);
    }
    printf("\n");
    for (int i=0;i<9;i++){
        if (i== 9-1)
            printf ("%d", s9[i]);
        else
            printf ("%d ", s9[i]);
    }
    printf("\n");
  }
  return 0;
}