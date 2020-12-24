#include <bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);



    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        int l = s.length();
        string ans = "";

        if(l > 10)
        {
            ans += s[0] + to_string(l-2) + s[l-1];
            cout << ans << endl;
        }
        else
        {
            cout << s << endl;
        }
        
    }
}