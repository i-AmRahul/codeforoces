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

    long long n;
    cin >> n;

    long long res = 0;

    if(n % 2 != 0)
    {
        n -= solve(n);
        res++;
    }

    cout << res + (n/2) << endl;

}