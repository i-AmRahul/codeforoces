#include <bits/stdc++.h>
 
using namespace std;

int gcd(int a, int b)
{
    if(b == 0)
    {
        return a;
    }

    return gcd(b, a%b);

    
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

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        int min = INT_MAX;

        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i] < min)
            {
                min = v[i];
            }
        }
/*         cout << min << endl; */
        vector<int> check;

        for(int i = 0; i < n; i++)
        {
            if(gcd(v[i],min) == min)
            {
                check.push_back(v[i]);
                v[i] = -1;
            }
        }
        sort(check.begin(),check.end());
/*         for(int x: check)
        {
            cout << x << " "; 
        }
        cout << endl; */
        int k = 0;
        for(int i = 0; i < n; i++)
        {
            if(v[i] == -1)
            {
                v[i] = check[k++];
            }
        }

/*         for(int x: v)
        {
            cout << x << " ";
        }
        cout << endl; */

        if(is_sorted(v.begin(),v.end()))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }
    
}
