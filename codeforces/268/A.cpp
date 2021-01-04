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

    vector<int> home(n);
    vector<int> away(n);
    int j = 0;
    int k = 0;

    for(int i = 0; i < 2*n; i++)
    {
        if((i+1) % 2 == 0)
        {
            cin >> away[j++];
        }
        else
        {
            cin >> home[k++];
        }
    }
/* 
    for(int x: home)
    {
        cout << x << " ";
    }
    cout << endl;

    for(int x: away)
    {
        cout << x << " ";
    } */
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(home[i] == away[j])
            {
                count++;
            }
        }
    }

    cout << count << endl;
}
