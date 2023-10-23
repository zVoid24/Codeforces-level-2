#include<bits/stdc++.h>
using namespace std;

long long int arr[5]={1,5,10,20,100};

long long int solve(long long int n)
{
    long long int sum=0;
    for(int i=4;i>=0;i--)
    {
        if(n>=arr[i])
        {
            sum+=(n/arr[i]);
            n=n%arr[i];
        }
        
    }
    return sum;
}

int main()
{
    long long int n;
    cin>>n;
    cout<<solve(n)<<endl;
    return 0;
}