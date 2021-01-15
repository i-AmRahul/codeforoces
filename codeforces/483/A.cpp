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

    long long l,r;
    cin >> l >> r;

    if (r - l + 1 < 3) {
	 	cout << -1 << endl;
	 	return 0;
	}
 
	if (l % 2 == 0) {
	 	cout << l << ' ' << l + 1 << ' ' << l + 2 << endl;
	 	return 0;
	}
 
	if (r - l + 1 > 3){
	 	cout << l + 1 << ' ' << l + 2 << ' ' << l + 3 << endl;
	 	return 0;
	}
 
	cout << -1 << endl;
    

}