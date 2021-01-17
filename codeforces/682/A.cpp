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

    long long x , y;
    cin >> x >> y;
    long long ymod = y % 5;
    long long ans = 0;

    for(long long i = 1; i <= x; i++)
    {
        ans += (y/5);
        long long m = i % 5;
        if((m+ymod >= 5) && (m != 0))
        {
            ans += 1;
        }
    }
    cout << ans << endl;
    
}