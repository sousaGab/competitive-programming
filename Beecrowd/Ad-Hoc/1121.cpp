#include <stdio.h>
using namespace std;
int main()
{
    int n, m, s;
    while (1)
    {
        scanf("%d %d %d", &n, &m, &s);
        if (n == 0 && m == 0 && s == 0)
            break;

        char mapa[n][m], comandos[s];
        int position[2], figurinha = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf(" %c ", &mapa[i][j]);
                if (mapa[i][j] != '.' && mapa[i][j] != '*' && mapa[i][j] != '#')
                {
                    position[0] = i;
                    position[1] = j;
                }
            }
        }

        for (int i = 0; i < s; i++)
        {
            scanf("%c", &comandos[i]);
        }
        for (int i = 0; i < s; i++)
        {

            if (comandos[i] == 'F')
            {
                if (mapa[position[0]][position[1]] == 'N')
                {

                    if (position[0] == 0)
                    {
                        continue;
                    }

                    else if (mapa[position[0] - 1][position[1]] == '#')
                    {
                        continue;
                    }

                    else if (mapa[position[0] - 1][position[1]] == '.')
                    {
                        mapa[position[0] - 1][position[1]] = 'N';
                        mapa[position[0]][position[1]] = '.';
                        position[0]--;
                    }
                    else if (mapa[position[0] - 1][position[1]] == '*')
                    {
                        mapa[position[0] - 1][position[1]] = 'N';
                        mapa[position[0]][position[1]] = '.';
                        position[0]--;
                        figurinha++;
                    }
                }
                else if (mapa[position[0]][position[1]] == 'S')
                {

                    if (position[0] == n - 1)
                    {
                        continue;
                    }

                    else if (mapa[position[0] + 1][position[1]] == '#')
                    {
                        continue;
                    }

                    else if (mapa[position[0] + 1][position[1]] == '.')
                    {
                        mapa[position[0] + 1][position[1]] = 'S';
                        mapa[position[0]][position[1]] = '.';
                        position[0]++;
                    }
                    else if (mapa[position[0] + 1][position[1]] == '*')
                    {
                        mapa[position[0] + 1][position[1]] = 'S';
                        mapa[position[0]][position[1]] = '.';
                        position[0]++;
                        figurinha++;
                    }
                }
                else if (mapa[position[0]][position[1]] == 'O')
                {

                    if (position[1] == 0)
                    {
                        continue;
                    }

                    else if (mapa[position[0]][position[1] - 1] == '#')
                    {
                        continue;
                    }

                    else if (mapa[position[0]][position[1] - 1] == '.')
                    {
                        mapa[position[0]][position[1] - 1] = 'O';
                        mapa[position[0]][position[1]] = '.';
                        position[1]--;
                    }
                    else if (mapa[position[0]][position[1] - 1] == '*')
                    {
                        mapa[position[0]][position[1] - 1] = 'O';
                        mapa[position[0]][position[1]] = '.';
                        position[1]--;
                        figurinha++;
                    }
                }
                else if (mapa[position[0]][position[1]] == 'L')
                {

                    if (position[1] == m - 1)
                    {
                        continue;
                    }

                    else if (mapa[position[0]][position[1] + 1] == '#')
                    {
                        continue;
                    }

                    else if (mapa[position[0]][position[1] + 1] == '.')
                    {
                        mapa[position[0]][position[1] + 1] = 'L';
                        mapa[position[0]][position[1]] = '.';
                        position[1]++;
                    }
                    else if (mapa[position[0]][position[1] + 1] == '*')
                    {
                        mapa[position[0]][position[1] + 1] = 'L';
                        mapa[position[0]][position[1]] = '.';
                        position[1]++;
                        figurinha++;
                    }
                }
            }
            else if (comandos[i] == 'D')
            {
                if (mapa[position[0]][position[1]] == 'N')
                {
                    mapa[position[0]][position[1]] = 'L';
                }
                else if (mapa[position[0]][position[1]] == 'O')
                {
                    mapa[position[0]][position[1]] = 'N';
                }
                else if (mapa[position[0]][position[1]] == 'S')
                {
                    mapa[position[0]][position[1]] = 'O';
                }
                else if (mapa[position[0]][position[1]] == 'L')
                {
                    mapa[position[0]][position[1]] = 'S';
                }
            }
            else if (comandos[i] == 'E')
            {
                if (mapa[position[0]][position[1]] == 'N')
                {
                    mapa[position[0]][position[1]] = 'O';
                }
                else if (mapa[position[0]][position[1]] == 'O')
                {
                    mapa[position[0]][position[1]] = 'S';
                }
                else if (mapa[position[0]][position[1]] == 'S')
                {
                    mapa[position[0]][position[1]] = 'L';
                }
                else if (mapa[position[0]][position[1]] == 'L')
                {
                    mapa[position[0]][position[1]] = 'N';
                }
            }
        }
        printf("%d\n", figurinha);
    }
    return 0;
}