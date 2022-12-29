#include <bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f

int main()
{
    int N, M, u, v, w;
    scanf("%d%d", &N, &M);
    int graph[N][N];

    memset(graph, INF, sizeof(graph));
    for (int i = 0; i < M; i++)
    {
        scanf("%d%d%d", &u, &v, &w);
        graph[u][v] = w;
        graph[v][u] = w;
    }
    for (int k = 0; k < N; k++)
        graph[k][k] = 0;

    for (int k = 0; k < N; k++)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
            }
        }
    }
    int out = INF;
    for (int i = 0; i < N; i++)
    {
        int aux = -1;
        for (int j = 0; j < N; j++)
        {
            aux = max(graph[i][j], aux);
        }
        out = min(aux, out);
    }
    cout << out << endl;

    return 0;
}
