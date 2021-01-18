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

    int n;
    cin >> n;

    int arr[100002] = {0};

    int c = 1;

    for(int i = 2; i <= n; i++)
    {
        if(arr[i] == 0)
        {
            arr[i] = c++;

            for(int j = i; j <= n; j+=i)
            {
                arr[j] = arr[i];
            }
        }
        cout << arr[i] << " ";
    }
    cout << endl;
}