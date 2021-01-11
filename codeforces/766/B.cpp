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
    vector<int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(),v.end());
    int i;

    for(i = 1; i < n-1; i++)
    {
        if(v[i+1] < (v[i] + v[i-1]))
        {
            cout << "YES" << endl;
            break;
        }
    }
    if(i == n-1)
    {
        cout << "NO" << endl;
    }

    
}