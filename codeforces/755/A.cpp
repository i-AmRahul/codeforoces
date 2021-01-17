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

    int n;
    cin >> n;
    if(n == 1)
    {
        cout << 3 << endl;
    }
    else if(n == 2)
    {
        cout << 4 << endl;
    }
    else if(n % 2 == 0)
    {
        cout << n-2 << endl;
    }
    else
    {
        cout << 1 << endl;
    }
    
}