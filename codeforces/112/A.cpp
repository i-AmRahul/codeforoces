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

   /*  int t;
    cin >> t;

    while(t--) */
/*  {*/


        /* The below code converts a string to lower-case */
        string a;
        cin >> a;
        string b;
        cin >> b;

        int flag = 0;

       

        transform(a.begin(), a.end(), a.begin(), ::tolower);
        transform(b.begin(), b.end(), b.begin(), ::tolower);


        for(int i = 0; i < a.length();i++)
        {
            if(!(a[i] == b[i]))
            {
                flag = 1;
                if(a[i] > b[i])
                {
                    cout << 1 << endl;
                    break;
                }
                else
                {
                    cout << -1 << endl;
                    break;
                }
                
            }
        }

        if(flag == 0)
        {
            cout << 0 << endl;
        }
        
        
    /* } */
}