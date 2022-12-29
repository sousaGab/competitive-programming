#include <iostream>
#include <stack>
using namespace std;
int main()
{

    int N;
    string a;
    bool ok;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        stack<char> pilha;
        ok = true;
        char c;
        for (int j = 0; j < a.size(); j++)
        {
            if (a[j] == '(' || a[j] == '[' || a[j] == '{')
            {
                if (a[j] == '(')
                {
                    pilha.push(')');
                }
                else if (a[j] == '[')
                {
                    pilha.push(']');
                }
                else if (a[j] == '{')
                {
                    pilha.push('}');
                }
            }
            else if (a[j] == ')' || a[j] == ']' || a[j] == '}')
            {
                if (pilha.empty() || pilha.top() != a[j])
                {
                    ok = false;
                    break;
                }
                else
                {
                    pilha.pop();
                }
            }
        }
        if (!pilha.empty())
        {
            ok = false;
        }
        if (ok)
        {
            cout << "S\n";
        }
        else
        {
            cout << "N\n";
        }
    }
    return 0;
}
