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

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        set<int> s;

        for(int i = 0; i < n; i++)
        {
            int ele;
            cin >> ele;
            s.insert(ele);
        }

        int res = 0;

        while (s.size() != 0)
        {
            int c = *s.rbegin();
            s.erase(c);

            if(c % 2 == 0)
            {
                s.insert(c/2);
                res++;
            }
        }
        
            

            
        
        cout << res << endl;
    }
}