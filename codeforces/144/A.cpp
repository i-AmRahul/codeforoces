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

    vector<int> v(n);

    int min = INT_MAX;
    int max = INT_MIN;
    int minindex;
    int maxindex;

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i] <= min)
        {
            min = v[i];
            minindex = i;
        }
        if(v[i] > max)
        {
            max = v[i];
            maxindex = i;
        }
    }

    int ans = 0;
    ans = maxindex + ((n-1) - minindex);
    if(maxindex > minindex){
        cout << ans-1 << endl;
    }
    else
    {
        cout << ans << endl;
    }
}