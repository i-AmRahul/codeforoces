#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long n)
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
}


set<int> seive(int n)
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

    for(int i = 0; i < n; i ++)
    {
        cin >> v[i];
    }

    for(int i = 0; i < n; i++)
    {
        while(v[i] % 2 == 0)
        {
            v[i] /= 2;
            
        }
        while (v[i] % 3 == 0)
        {
            v[i] /= 3;
        }
    }

    for(int i = 0; i < n-1; i++)
    {
        if(v[i] != v[i+1])
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}