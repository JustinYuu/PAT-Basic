#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;


struct person
{
  int height;
  string name;
};

bool my_compare(person a, person b)
{
  if (a.height != b.height)
  {
    return a.height > b.height;
  }
  else
  {
    return a.name < b.name;
  }
}

int main()
{
  int N, K,m,m_last;
  person per;
  vector<person> list_p;
  cin >> N >> K;
  for (int i = 0; i < N; ++i)
  {
    cin >> per.name >> per.height;
    list_p.push_back(per);
  }
  sort(list_p.begin(), list_p.end(), my_compare);
  m = N / K;
  m_last = m + N%m;
  for (int i = 0,cnt=0,m_real; i < K; ++i)
  {
    if (i == 0)
    {
      m_real = m_last;
    }
    else
    {
      m_real = m;
    }
    string list_i;
    for (int j = 0; j < m_real; ++j)
    {
      if (j == 0)
      {
        list_i = list_p[cnt++].name;
        continue;
      }
      if (j % 2 == 0)
      {
        list_i = list_i + " " + list_p[cnt++].name;
      }
      else
      {
        list_i = list_p[cnt++].name + " " + list_i;
      }
    }
    cout << list_i << endl;
  }
  system("pause");
  return 0;
}
