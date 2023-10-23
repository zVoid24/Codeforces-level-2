#include<bits/stdc++.h>
using namespace std;

int main()
{
    bool flag=true;
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        if(i&1)
        {
            for(int j=1;j<=m;j++)
            {
                cout<<"#";
            }
            cout<<endl;
        }
        else
        {
            if(flag)
            {
                for(int j=1;j<=m-1;j++)
                {
                    cout<<".";
                }
                cout<<"#"<<endl;
                flag=false;
            }
            else
            {
                cout<<"#";
                for(int j=2;j<=m;j++)
                {
                    cout<<".";
                }
                cout<<endl;
                flag=true;
            }
        }
    }
    return 0;
}