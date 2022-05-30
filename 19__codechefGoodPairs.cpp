#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define db double
#define pb push_back
#define vi vector<int>
#define se set<int>
#define vvi vector<vector<int>>
const float N = 3.14;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;cin>>t;
    while(t--)
    {
        ll x,ans=0;cin>>x;
        vector<ll> total(x,0);
        int a[x],b[x];
        map<ll,ll>final;
        for(int i=0;i<x;i++)
        {
            cin>>a[i];       }
        for(int i=0;i<x;i++)
        {
            cin>>b[i];
        }
        for (int i = 0; i < x; ++i)
        {
            total[i]=a[i]^b[i];
        }
        ll count=0;
        for(int i=0;i<x;i++)
        {
            final[total[i]]++;
        }
        ll com=0;
        for(auto i : final)
        {
            ll temp=i.second;
            com+=((temp*(temp-1))/2);
        }
        cout<<com<<endl;    
    }
    return 0;
}           