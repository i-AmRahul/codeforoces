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

    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());

    int x = v[n-1];
    int k = 0;
    for(int i = 0; i < n-1; i++)
    {
        if(v[i] == v[i+1])
        {
            k = i+1;
        }
    }
    int y = v[0];
    if(k == n-1)
    {
        y = v[n-1];
    }
    else
    {
        int i;
        bool t = false;
        for(i = k; i < n; i++)
        {
            if(x % v[i] != 0)
            {
                y = v[i];
                t = true;
            }
        }
        if(!t)
        {
            y = v[k];
        }
    }

    cout << x << " " << y << endl;
    
}
