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

    int n,m;
    cin >> n >> m;

    int res = 0;

    while(n > 0 && m > 0 && (n+m) > 2)
    {
        if(n < m)
        {
            n -= 1;
            m-=2;
        }
        else
        {
            n-=2;
            m-=1;
        }
        res++;
        
    }

    cout << res << endl;

    

}