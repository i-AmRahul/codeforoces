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

   /*  int t;
    cin >> t;

    while(t--) */
/*  {*/
        string s;
        cin >> s;

        transform(s.begin(), s.end(), s.begin(), ::tolower);

        string ans = "";

        for(int i = 0; i < s.length();i++)
        {
            if(!isVowel(s[i]))
            {
                ans = ans + "." + s[i];
            }
        }
        cout << ans << endl;
        
    /* } */
}