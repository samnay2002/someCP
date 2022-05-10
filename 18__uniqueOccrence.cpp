#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define du double
#define vi vector<int>
#define se set<int>
#define ma map<int,int>
#define vvi vector<vector<int>>
const int N = 100;
bool uniqueOccurrences(vector<int>& nums)
{
    ma v;int total = 0;
    se ans;
    for(int it : nums)
    {
        ++v[it];
    }
    for(auto i : v)     
    {
        total++;        //number of map elements
        ans.insert(i.second);
    }
    if(ans.size() == total)
    {
        return true;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll t;cin>>t;
    while(t--)
    {
        vi v = {1,2,2,1,1,4,20,4,4,4};
        cout<<uniqueOccurrences(v);

    }
    return 0;
}       