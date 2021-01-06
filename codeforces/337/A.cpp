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

    int n,s;
    cin >> s >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(),v.end());

    int x = 0;
    int y = s-1;
    
    int diff = INT_MAX;


    while(y < n)
    {
        if(abs(v[y]-v[x]) < diff)
        {
            diff = v[y] - v[x];
            
        }       
        x++;

        y++;
    }   

    cout << diff << endl;
}