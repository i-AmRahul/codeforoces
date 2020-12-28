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

    
    string s;
    cin >> s;

    string fin = "hello";

    int x = 0;

    
    for(int i = 0; i < s.length();i++)
    {
        if(s[i] == fin[x])
        {
            x++;
        }
    }
    if(x==5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

}