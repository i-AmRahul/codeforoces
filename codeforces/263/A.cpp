//Solution By Rahul Yadav

#include <iostream>
#include <map>
#include <vector>
#define M 1000000007

using namespace std;


int main() {
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);



  #endif
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);



  int v[5][5];

  int aai;
  int jay;
  for(int i = 0; i < 5; i++)
  {
    for(int j = 0; j < 5; j++)
    {
      cin >> v[i][j];
      if(v[i][j] == 1)
      {
        aai = i;
        jay = j;
        i = 100;
        break;
      }
    }
  }

  cout << abs(jay-2) + abs(aai-2) << endl;
}
