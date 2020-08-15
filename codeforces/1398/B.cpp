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
    	string s;
    	cin >> s;

    	int i = 0;
    	int count = 0;
    	vector<int> v;
    	while(i < (s.length()))
    	{
    		if(s[i] == '1')
    		{
    			count++;
    			while(s[++i] == '1')
    			{
    				count++;
    			}
    			v.push_back(count);
    			count = 0;
    		}
    		else
    		{
    			i++;
    		}
    	}
    	sort(v.begin(),v.end(),greater<>());
    	int alice = 0;
    	for(int i = 0; i < v.size();i+=2){
    		alice += v[i];
    	}
    	cout << alice << endl;
    }
}