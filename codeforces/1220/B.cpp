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

    int n;
    cin >> n;
    int a[n][n];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    long long x = a[0][1];
    long long y = a[0][2];
    long long z = a[1][2];

    long long d = sqrt((long long)(x*y / z));

    cout << d << " ";

    for(int i = 1; i < n; i++)
    {
        cout << a[0][i]/d << " ";
    }
    cout << endl;

}