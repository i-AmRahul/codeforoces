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



  int s;
  int t;
  string bg;

  cin >> s;
  cin >> t;
  cin>> bg;

  while(t--)
  {
    for(int i = 0; i < bg.size()-1;i++)
    {
      if((bg[i]=='B') && (bg[i+1] == 'G'))
      {
        bg[i] = 'G';

        bg[i+1] = 'B';
        i++;
      }
    }
  }
  cout << bg << endl;
}
