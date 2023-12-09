#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        if(s.at(0)=='a' || s.at(1)=='b' || s[2]=='c') cout<<"YES\n";
        else cout<<"NO\n";
    }
}