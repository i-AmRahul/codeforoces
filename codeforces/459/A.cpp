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

    int x1,y1,x2,y2,y3,y4,x3,x4;

    cin >> x1 >> y1 >> x2 >> y2;


    if((x1 == x2) || (y1 == y2))
    {
        if(x1 > x2)
        {
            swap(x1,x2);
        }
        if(y1 > y2)
        {
            swap(y1,y2);
        }

        y3 = y1 + (x2 - x1);
        y4 = y2 + (x2 - x1);
        x3 = x1 + (y2 - y1);
        x4 = x2 + (y2 - y1);

        cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
    }
    else if(abs(x2 - x1) == abs(y2 - y1))
    {
        x3 = x1;
        y3 = y2;
        x4 = x2;
        y4 = y1;

        cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    



    
}