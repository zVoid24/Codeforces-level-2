#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 0;
    string str;
    vector<string> v;
    int n;
    cin >> n;
    int m=n;
    while (n--)
    {
        cin >> str;
        v.push_back(str);
    }
    if (m < 3)
    {
        cout << "0" << endl;
        return 0;
    }
    for (int i = 1; i < v.size()-1; i++)
    {
        for (int j = 1; j < v.size()-1; j++)
        {
            if (v[i][j] == 'X' && v[i][j] == v[i - 1][j - 1] && v[i][j] == v[i - 1][j + 1] && v[i][j] == v[i + 1][j + 1] && v[i][j] == v[i + 1][j - 1])
            sum++;
        }
    }
    cout<<sum<<endl;
    return 0;
}