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

/* bool isPerfectSquare(long double n) 
{
  long double sr = sqrt(n); 
  
  return ((sr - floor(sr)) == 0); 
} 

bool isPrime[1000001]; */

/* void sieve()

{
    //true means composite number.
    long long N = 1000000;

    isPrime[0] = true;
    isPrime[1] = true;

    for(int i = 2; i*i <= N; i++)
    {
        if(!isPrime[i]){
            for(int j = i*i; j <= N; j+=i)
            {
                isPrime[j] = true;
            }
        }
    }
} */

int gcd(int a,int b)
{
    if(b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b,a % b);
    }
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
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int a = v[0] % 2;
        for(int x: v)
        {
            if(x % 2 != a)
            {
                a = -1;
                cout << "NO" << endl;
                break;
            }
        }
        if(a != -1)
        {
            cout << "YES" << endl;
        }
    }
}
