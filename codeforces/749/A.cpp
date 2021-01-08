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

    if(n % 2 == 0)
    {
        cout << n / 2 << endl;
        for(int i = 0; i < (n/2); i++)
        {
            cout << 2 << " ";
        }
        cout << endl;
    }
    else
    {
        cout << n/2 << endl;
        for(int i = 0; i < (n/2)-1;i++)
        {
            cout << 2 << " ";
        }
        cout << 3 << endl;
    }
    
}