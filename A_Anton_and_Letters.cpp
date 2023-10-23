#include<bits/stdc++.h>
using namespace std;

map<char,int>mp;

int main()
{
    int sum=0;
    char a,b,c;
    cin>>a;
    while(a!='}')
    {
        cin>>a;
        if(a>96 && a<123)
        mp[a]=1;
    }
    map<char,int>::iterator it;

    for(it=mp.begin();it!=mp.end();it++)
    {
        sum+=it->second;
    }
    cout<<sum<<endl;
    return 0;
}