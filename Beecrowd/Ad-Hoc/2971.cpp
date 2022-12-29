#include <bits/stdc++.h>

struct contestant
{

  int cards = 0;
  bool receive = false;
  bool joker = false;
  std::map<int, int> hand;
};

const int NMAX = 20;
int n, k;
char c;
std::map<char, int> mp;
std::map<int, char> mpp;
contestant competidor[NMAX];

bool test()
{

  for (int i = 0; i < n; ++i)
  {
    if (competidor[i].joker == false && competidor[i].cards == 4)
    {
      std::map<int, int>::iterator it = competidor[i].hand.begin();
      for (; it != competidor[i].hand.end(); ++it)
      {
        if (it->second == 4)
        {
          printf("%d\n", i + 1);
          return true;
        }
      }
    }
  }

  return false;
}

int main()
{

  mp['A'] = 0;
  mp['1'] = 1;
  mp['2'] = 2;
  mp['3'] = 3;
  mp['4'] = 4;
  mp['5'] = 5;
  mp['6'] = 6;
  mp['7'] = 7;
  mp['8'] = 8;
  mp['9'] = 9;
  mp['D'] = 10;
  mp['Q'] = 11;
  mp['J'] = 12;
  mp['K'] = 13;

  scanf("%d%d", &n, &k);

  for (int i = 0; i < n; ++i)
  {
    std::string in;
    std::cin >> in;
    for (int j = 0; j < 4; ++j)
    {
      competidor[i].hand[mp[in[j]]]++;
      competidor[i].cards++;
    }
  }

  int next;
  k--;
  competidor[k].receive = true;
  competidor[k].joker = true;
  competidor[k].cards++;

  while (true)
  {

    next = (k + 1) % n;

    if (test())
      return 0;

    if (competidor[k].receive)
    {

      competidor[k].receive = false;

      std::map<int, int>::iterator it = competidor[k].hand.begin();
      std::vector<std::pair<int, int>> vp;
      for (; it != competidor[k].hand.end(); ++it)
      {
        vp.push_back({it->second, it->first});
      }
      sort(vp.begin(), vp.end());

      int x = 0;
      for (; x < vp.size(); x++)
      {
        if (vp[x].first != 0)
          break;
      }

      competidor[k].hand[vp[x].second]--;
      competidor[next].hand[vp[x].second]++;
      competidor[k].cards--;
      competidor[next].cards++;

      if (test())
        return 0;
    }
    else
    {
      if (competidor[k].joker)
      {
        competidor[k].joker = false;
        competidor[next].joker = true;
        competidor[next].receive = true;
        competidor[k].cards--;
        competidor[next].cards++;
        if (test())
          return 0;
      }
      else
      {

        std::map<int, int>::iterator it = competidor[k].hand.begin();
        std::vector<std::pair<int, int>> vp;

        for (; it != competidor[k].hand.end(); ++it)
        {
          vp.push_back({it->second, it->first});
        }
        sort(vp.begin(), vp.end());

        int x = 0;
        for (; x < vp.size(); x++)
        {
          if (vp[x].first != 0)
            break;
        }

        competidor[k].hand[vp[x].second]--;
        competidor[next].hand[vp[x].second]++;
        competidor[k].cards--;
        competidor[next].cards++;

        if (test())
          return 0;
      }
    }
    k = next;
  }

  return 0;
}