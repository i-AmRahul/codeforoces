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
    int tot = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        tot += v[i];

    }
    sort(v.begin(),v.end(),greater<int>());

    int sum = 0;

    int i;

    for ( i = 0; i < n; i++)
    {
        if(sum > tot/2)
        {
            break;
        }
        else
        {
            sum += v[i];
        }
    }

    cout << i << endl;
    
}