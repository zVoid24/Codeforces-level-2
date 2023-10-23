#include <bits/stdc++.h>
using namespace std;

map<char, int> mp;

int main()
{
    int n;
    string str;
    cin>>n;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        mp[str[i]]++;
    }
    map<char, int>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second % n != 0)
        {
            cout << "-1" << endl;
            return 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (it = mp.begin(); it != mp.end(); it++)
        {
            for(int j=1;j<=it->second/n;j++)
            {
                cout<<it->first;
            }
        }
    }
    cout<<endl;
    return 0;
}