#include <bits/stdc++.h>

using namespace std;

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
		vector<int> v(n);

		for (int i = 0; i < n; ++i)
		{
			cin >> v[i];
		}
		int fin = v[0] + v[1];

		if(fin <= v[n-1])
		{
			cout << 1 << " " << 2 << " " << (n) << endl;
		}
		else
		{
			cout << -1 << endl;
		}
	}
	return 0;
}

