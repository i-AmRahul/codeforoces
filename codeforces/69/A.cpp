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
    int t;
    cin >> t;
    int a = 0;
    int b = 0;
    int c = 0;
    int ele;
    while(t--)
    {
      cin >> ele;
      a += ele;
      cin >> ele;
      b += ele;
      cin >> ele;
      c += ele;
    }
    if((a == 0) && (b == 0) && (c == 0))
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
}
