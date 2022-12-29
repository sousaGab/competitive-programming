#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool ord(pair<int, string> a, pair<int, string> b)
{
    if (a.first > b.first)
        return true;
    return false;
}

int main()
{

    int N, T;
    cin >> N >> T;
    vector<pair<int, string>> alunos;
    pair<int, string> tmp;

    for (int i = 0; i < N; i++)
    {
        cin >> tmp.second >> tmp.first;
        alunos.push_back(tmp);
    }

    sort(alunos.begin(), alunos.end(), ord);

    for (int i = 0; i < T; i++)
    {
        cout << "Time " << i + 1 << endl;
        vector<string> equipe;

        for (int j = i; j < N; j += T)
        {
            equipe.push_back(alunos[j].second);
        }
        sort(equipe.begin(), equipe.end());
        for (int j = 0; j < equipe.size(); j++)
        {
            cout << equipe[j] << endl;
        }
        cout << endl;
        equipe.clear();
    }

    return 0;
}
