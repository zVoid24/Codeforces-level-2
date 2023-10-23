#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b;
    cin>>a>>b;
    if(abs(a-b)<2)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    if(abs(a-b)<=2 && (a&1))
    {
        cout<<"-1"<<endl;
        return 0;
    }
    if(a==1 && (b-a)==2)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    if(a&1)
    a++;
    cout<<a<<" "<<a+1<<" "<<a+2<<endl;
    return 0;
}