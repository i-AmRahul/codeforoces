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

    int t;
    cin >> t;


    while(t--)
    {
        int w,h,n;
        cin >> w >> h >> n;

        int count = 0;

        while(w % 2 == 0)
        {
            count++;
            w = w / 2;
        }
        while(h % 2 == 0)
        {
            count++;
            h = h / 2;
        }

        int max = pow(2,count);

        if(max >= n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
