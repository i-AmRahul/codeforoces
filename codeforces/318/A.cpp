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

    long long n,k;
    cin >> n >> k;

    long long q = (n % 2) ? n / 2 + 1 : n / 2;

    if(k <= q)
    {
        cout << 2*k - 1 << endl;
    }
    else
    {
        k -= q;
        cout << 2*k << endl;
    }

    
}