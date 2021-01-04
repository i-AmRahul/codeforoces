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
        int n;
        cin >> n;

        int count = 0;
        int ele;

        int hash[2] = {0};

        for(int i = 0; i < n; i++)
        {
            cin >> ele;
            count += ele;
            hash[ele-1]++;
        }

        string ans;
        
        if((hash[0] + 2*(hash[1])) % 2 != 0){
            ans = "no";
        }
        else
        {
            count /= 2;

            while((hash[1] > 0) && (count >= 2))
            {
                count -= 2;
                hash[1]--;
            }

            while((hash[0] > 0) && (count > 0))
            {
                count--;
                hash[0]--;
            }

            if(count != 0)
            {
                ans = "no";
            }

            else
            {
                int fin = 0;

                fin = fin + (hash[0]);
                fin += hash[1]*2;

                if(fin >= count)
                {
                    ans = "yes";
                }
                else
                {
                    ans = "no";
                }
            }
            


            
        }

        cout << ans << endl;
        



    }
}
