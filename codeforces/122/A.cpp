#include <bits/stdc++.h>
 
using namespace std;
 
bool isVowel(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' | c == 'y')
    {
        return true;
    }
    return false;
}
 
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
 
 
 
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    
    int n;
    cin >> n;
 
    int c = n;
    int flag = 0;
 
    while(c > 0)
    {
        int res = c % 10;
        c /= 10;
        if((res != 4) && (res != 7))
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        cout << "YES" << endl;
    }
    else if(((n % 4) == 0) || ((n % 7) == 0) || ((n % 44) == 0) || ((n % 47) == 0) || ((n % 74) == 0) || ((n % 77) == 0) || ((n % 444) == 0) || ((n % 447) == 0) || ((n % 474) == 0) || ((n % 477) == 0) || ((n % 744) == 0) || ((n % 747) == 0) || ((n % 774) == 0) || ((n % 777) == 0)  ){
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
 
}