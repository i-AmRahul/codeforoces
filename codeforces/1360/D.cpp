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

/* int gcd(int a,int b)
{
    if(b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b,a % b);
    }
} */
 
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
        int n,k;
        cin >> n >> k;

        if(n <= k)
        {
            cout << 1 << endl;
        }
        else
        {
            int ans = INT_MAX;
            for(int i = 1; i*i <= n; i++)
            {
                if(n % i == 0 && (i <= k))
                {
                    ans = min(ans,n/i);
                }
                if(n % i == 0 && (n/i <= k))
                {
                    ans = min(ans,i);
                }
            }
            cout << ans << endl;
        }
        
    }
}
