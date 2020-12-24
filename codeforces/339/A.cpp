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


        /* The below code converts a string to lower-case */
        string a;
        cin >> a;
        sort(a.begin(),a.end());

        string ans = "";

        for(int i = 0; i < a.length(); i++)
        {
            if(int(a[i]) >= 49 && i < (a.length() - 1))
            {
                ans = ans + a[i] + "+";
            }
            else if(int(a[i]) >= 49)
            {
                ans = ans + a[i];
            }
        }
        cout << ans << endl;
        
    /* } */
}