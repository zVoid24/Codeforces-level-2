#include <bits/stdc++.h>
using namespace std;

map<char, int> mp;

void initialize()
{
    mp['a'] = 0;
    mp['b'] = 0;
    mp['c'] = 0;
    mp['d'] = 0;
    mp['e'] = 0;
    mp['f'] = 0;
    mp['g'] = 0;
    mp['h'] = 0;
    mp['i'] = 0;
    mp['j'] = 0;
    mp['k'] = 0;
    mp['l'] = 0;
    mp['m'] = 0;
    mp['n'] = 0;
    mp['o'] = 0;
    mp['p'] = 0;
    mp['q'] = 0;
    mp['r'] = 0;
    mp['s'] = 0;
    mp['t'] = 0;
    mp['u'] = 0;
    mp['v'] = 0;
    mp['w'] = 0;
    mp['x'] = 0;
    mp['y'] = 0;
    mp['z'] = 0;
}

void solve(string &str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] > 64 && str[i] < 91)
            str[i] += 32;
    }
}

int main()
{
    int n,sum=0;
    string str;
    map<char, int> :: iterator it;
    cin >> n >> str;
    solve(str);
    for(int i=0;i<n;i++)
    {
        mp[str[i]]=1;
    }
    for(it=mp.begin();it!=mp.end();it++)
    {
        sum+=it->second;
    }
    if(sum==26)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}