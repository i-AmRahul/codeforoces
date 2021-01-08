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

bool isPerfectSquare(long double n) 
{
  long double sr = sqrt(n); 
  
  return ((sr - floor(sr)) == 0); 
} 

bool isPrime[10000001];

void sieve()
{
    //true means composite number.
    long long N = 10000000;

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
    vector<long long> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sieve();

    for(long long x: v)
    {
        long double p = x;
        if(x == 1 || x == 2)
        {
            cout << "NO" << endl;
        }
        else if(isPerfectSquare(p))
        {
            if(!isPrime[int(sqrt(x))]){
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
            
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }
}