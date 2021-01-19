#include <bits/stdc++.h>

using namespace std;

/* bool isPrime(long long n)
{
    if(n == 1){
        return false;
    }
    else{
        for(long long i = 2; i*i <= n; i++)
        {
            if(n % i == 0)
            {
                return false;
            }
        }
    }
    return true;
} */


/* set<int> seive(int n)
{
    set<int> s;

    for(int i = 1; i <= n;i++)
    {
        if(n % i == 0 && isPrime(i))
        {
            s.insert(i);
        }
    }
    return s;
} */

long long solve(long long n)
{
    for(long long i = 3; i*i <= n; i++)
    {
        if(n % i == 0)
        {
            return i;
        }
    }
    return n;
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
        int m;
        cin >> m;
        string n;
        cin >> n;

        string s = "1";
        int prev;
        prev = (n[0] - '0') + (1);
        
        for(int i = 1; i < m; i++)
        {
            int curr = n[i]-'0' + 1;
            if(curr == prev)
            {
                s += "0";
            }
            else
            {
                s += "1";
            }
            prev = (n[i] - '0') + (s[i] - '0');
        }
        cout << s << endl;
    }

}