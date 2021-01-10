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
        int n;
        cin >> n;
        vector<int> e;
        vector<int> o;
        int v[2*n+1];
        int ele;
        for(int i = 1; i <= 2*n; i++)
        {
            cin >> v[i];
            if(v[i] % 2 == 0)
            {
                e.push_back(i);
            }
            else
            {
                o.push_back(i);
            }
        }
        vector< pair< int, int > > f;

        if(e.size() % 2 == 0 && o.size() % 2 == 0)
        {
            if(e.size() != 0)
            {
                for(int i = 2; i+1 < e.size();i=i+2)
                {

                    f.push_back({e[i],e[i+1]});
                }
                for(int i = 0; i+1 < o.size();i=i+2)
                {

                    f.push_back({o[i],o[i+1]});
                }
            }
            else
            {
                for(int i = 2; i+1 < o.size();i=i+2)
                {
                    f.push_back({o[i],o[i+1]});
                }
            }
        }
        else
        {
                for(int i = 1; i+1 < e.size();i=i+2)
                {
                    f.push_back({e[i],e[i+1]});
                }
                for(int i = 1; i+1 < o.size();i=i+2)
                {
                    f.push_back({o[i],o[i+1]});
                }
        }

        for(int i = 0; i < n-1;i++)
        {
            cout << f[i].first;
            cout << " ";
            cout << f[i].second;
            cout << endl;
        }
        
    }
}
