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

    long long t;
    cin >> t;

    while(t--){
        long long n,x;
        cin >> n >> x;

        vector<long long> v(n);
        long long sum = 0;
        for(long long i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }

        long long min = 0;

        min = (sum % x) ? (sum / x) + 1 : sum / x;

        

        long long max = 0;

        for(long long i = 0; i < n; i++)
        {
            max += (v[i] % x) ? v[i] / x + 1 : v[i] / x;
        }

        cout << min << " " << max << endl;

        

    }
}
