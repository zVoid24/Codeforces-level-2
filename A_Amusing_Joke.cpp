#include<bits/stdc++.h>
using namespace std;

map<char,int>mp;
map<char,int>mp2;

int main()
{
    string str,str1,str2;
    cin>>str>>str1>>str2;
    for(int i=0;i<str.length();i++)
    {
        mp[str[i]]++;
    }
    for(int i=0;i<str1.length();i++)
    {
        mp[str1[i]]++;
    }
    for(int i=0;i<str2.length();i++)
    {
        mp2[str2[i]]++;
    }
    map<char,int>::iterator it;
    map<char,int>::iterator it2;
    it2=mp2.begin();
    if((mp.size()<mp2.size())||(mp.size()>mp2.size()))
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(it=mp.begin();it!=mp.end();it++)
    {
        if(it->second!=it2->second)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        it2++;
    }
    cout<<"YES"<<endl;
    return 0;
}