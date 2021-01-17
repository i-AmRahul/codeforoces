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

    int n,a,b;
    cin >> n >> a >> b;
    int x = 0;
    int y;
/*     cout << n << a << b << endl; */

    while(x*a <= n)
    {
        if((n-(x*a))%b == 0)
        {
/*             cout << n << a << b << endl;
            cout << n-x*b << "dh" << a << endl; */

            y = (n-x*a) / b;
            cout << "YES" << endl;
            cout << x << " " << y << endl;
            return 0;
        }
        x++;
    }
    cout << "NO" << endl;
    
}