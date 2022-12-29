#include <stdio.h>

int main()
{

    int A, B, C, M = 0;
    scanf("%d"
          "%d"
          "%d",
          &A, &B, &C);
    if (A == B || B == C || C == A)
    {
        printf("S\n");
    }
    else
    {
        if ((A == B || B == C || C == A) || A == (B + C) || B == (A + C) || C == (B + A))
            printf("S\n");
        else
            printf("N\n");
    }
    return 0;
}