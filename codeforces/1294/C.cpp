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

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> v;

        for(int i = 2; i*i <= n; i++)
        {
            if(n % i == 0)
            {
                v.push_back(i);
                n = n / i;
            }
            if(v.size() == 2)
            {
                break;
            }
        }
        v.push_back(n);

        if((v[0] == v[1]) || (v[1] == v[2]) || (v[0] == v[2]) || v.size() < 3)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES" << endl;
            for(int x: v)
            {
                cout << x << " " ;
            }
        }
        cout << endl;
        
    }

}