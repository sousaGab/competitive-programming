#include <bits/stdc++.h>
using namespace std;

typedef long long T;
typedef complex<T> pt;

#define X real()
#define y imag()

int inter(pt a, pt b, pt c, pt d)
{

    if (a == c || a == d || b == c || b == d)
    {
        return 1;
    }

    T c1, c2, c3, c4;

    c1 = (conj(c - a) * (c - b)).y;
    c2 = (conj(d - a) * (d - b)).y;
    c3 = (conj(a - c) * (a - d)).y;
    c4 = (conj(b - c) * (b - d)).y;

    double da, db, dc, dd;

    if (c1 == 0 && c2 == 0 && c3 == 0 && c4 == 0)
    {
        da = abs(a);
        db = abs(b);
        dc = abs(c);
        dd = abs(d);

        if (da < db)
        {
            if (dc > da && dc < db || dd > da && dd < db)
            {
                return 1;
            }
        }
        else
        {
            if (dc > db && dc < da || dd > db && dd < da)
            {
                return 1;
            }
        }
        if (dc < dd)
        {
            if (da > dc && da < dd || db > dc && db < dd)
            {
                return 1;
            }
        }
        else
        {
            if (da > dd && da < dc || db > dd && db < dc)
            {
                return 1;
            }
        }
    }

    if (c1 > 0 && c2 < 0)
    {
        if (c4 > 0 && c3 < 0)
        {
            return 1;
        }
        if (c3 > 0 && c4 < 0)
        {
            return 1;
        }
    }
    if (c2 > 0 && c1 < 0)
    {
        if (c4 > 0 && c3 < 0)
        {
            return 1;
        }
        if (c3 > 0 && c4 < 0)
        {
            return 1;
        }
    }

    if (c3 > 0 && c4 < 0)
    {
        if (c2 > 0 && c1 < 0)
        {
            return 1;
        }
        if (c1 > 0 && c2 < 0)
        {
            return 1;
        }
    }
    if (c4 > 0 && c3 < 0)
    {
        if (c2 > 0 && c1 < 0)
        {
            return 1;
        }
        if (c1 > 0 && c2 < 0)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{

    T lx0, ly0, lx1, ly1;

    pt A[2], B[2], C[2], D[2];

    for (int i = 0; i < 2; i++)
    {
        cin >> lx0 >> ly0 >> lx1 >> ly1;
        A[i] = {lx0, ly0};
        B[i] = {lx0, ly1};
        C[i] = {lx1, ly1};
        D[i] = {lx1, ly0};
    }

    for (int i = 0; i < 2; i++)
    {

        int x = (i + 1) % 2;
        if (inter(A[i], B[i], A[x], B[x]) == 1)
        {
            cout << 1 << endl;
            return 0;
        }
        if (inter(A[i], B[i], B[x], C[x]) == 1)
        {
            cout << 1 << endl;
            return 0;
        }
        if (inter(A[i], B[i], D[x], C[x]) == 1)
        {
            cout << 1 << endl;
            return 0;
        }
        if (inter(A[i], B[i], A[x], D[x]) == 1)
        {
            cout << 1 << endl;
            return 0;
        }

        if (inter(B[i], C[i], A[x], B[x]) == 1)
        {
            cout << 1 << endl;
            return 0;
        }
        if (inter(B[i], C[i], B[x], C[x]) == 1)
        {
            cout << 1 << endl;
            return 0;
        }
        if (inter(B[i], C[i], D[x], C[x]) == 1)
        {
            cout << 1 << endl;
            return 0;
        }
        if (inter(B[i], C[i], A[x], D[x]) == 1)
        {
            cout << 1 << endl;
            return 0;
        }

        if (inter(D[i], C[i], A[x], B[x]) == 1)
        {
            cout << 1 << endl;
            return 0;
        }
        if (inter(D[i], C[i], B[x], C[x]) == 1)
        {
            cout << 1 << endl;
            return 0;
        }
        if (inter(D[i], C[i], D[x], C[x]) == 1)
        {
            cout << 1 << endl;
            return 0;
        }
        if (inter(D[i], C[i], A[x], D[x]) == 1)
        {
            cout << 1 << endl;
            return 0;
        }

        if (inter(D[i], A[i], A[x], B[x]) == 1)
        {
            cout << 1 << endl;
            return 0;
        }
        if (inter(A[i], D[i], B[x], C[x]) == 1)
        {
            cout << 1 << endl;
            return 0;
        }
        if (inter(A[i], D[i], D[x], C[x]) == 1)
        {
            cout << 1 << endl;
            return 0;
        }
        if (inter(A[i], D[i], A[x], D[x]) == 1)
        {
            cout << 1 << endl;
            return 0;
        }
    }

    for (int i = 0; i < 2; i++)
    {

        int x = (i + 1) % 2;

        if (abs(A[i]) < abs(A[x]) && abs(B[i]) > abs(B[x]) && abs(C[i]) > abs(C[x]) && abs(D[i]) > abs(D[x]))
        {
            cout << 1 << endl;
            return 0;
        }
    }

    cout << 0 << endl;
    return 0;
}