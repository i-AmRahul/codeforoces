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
    getline(cin,s);

    unordered_set<char> m;

    for(char c: s)
    {
        if((c != ' ' ) && (c != '{') && (c != '}') && (c != ','))
        {
            m.insert(c);
        }
    }

    cout << m.size() << endl;
}