/*/ Author: sanmay2002(cf) sanmay320(cc) /*/
/*/ For more details copy & check this URL-> https://www.scrolldroll.com/wp-content/uploads/2022/02/Bhai-kya-kar-raha-hai-tu-Viral-Indian-Meme-Templates-of-2022.webp           /*/
#include<bits/stdc++.h>
using namespace std;
#define ll                     long long int
#define str                     string
#define mii                     map<int,int>
#define mll                     map<ll,ll>
#define mci                     map<char,int>
#define msi                     map<string,int>
#define msl                     map<string,ll>
#define pii                     pair<int, int>
#define pli                     pair<ll, int>
#define pil                     pair<int, ll>
#define pll                     pair<ll, ll>
#define vi                      vector<int>
#define vl                      vector<ll>
#define vb                      vector<bool>
#define vd                      vector<double>
#define vs                      vector<string>
#define vc                      vector<char>
#define ff                      first
#define ss                      second
#define db                      double
#define pb                      push_back
#define vvi                     vector<vi>
#define vvl                     vector<vl>
#define vvb                     vector<vb>
#define vvc                     vector<vc>
#define vvs                     vector<vs>
#define se                      set<int>
#define re(x)                   ll x;cin>>x;
#define ree(x,y)                ll x,y;cin>>x>>y;
#define reee(x,y,z)             ll x,y,z;cin>>x>>y>>z;
#define wr(x)                   cout<<x<<" ";
#define wrr(x,y)                cout<<x<<" "<<y;
#define wrrr(x,y,z)             cout<<x<<' '<<y<<' '<<z<<' ';
#define yes                     cout << "YES";
#define no                      cout << "NO";
#define fast_io                 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define MOD                     1000000000;
const float PI = 3.14;
ll modd = 998244353;
inline void inout()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif
}
/*
Consider two map - one for keep track of total views and second for tracking best id with max view for each creator.

So the map storage looks like : { creator : view_count } & { creator : {view_count, id } }

So now just we need to keep track of max view count while adding to the map, and at the end, acan for the creators with sam view as that of max view found.

Note: Do not forget to define view count as long long as the view count can be more than max int size.
*/

vector<vector<string>> mostPopularCreator(vector<string>& creators, vector<string>& ids, vector<int>& views) {
    
    unordered_map<string, long long> mp;
    unordered_map<string, pair<int, string>> imp;
    long long mx = -1;
    for(int i = 0; i < creators.size(); ++i){
        long long v = views[i];
        mp[creators[i]] += v;
        if(mx < mp[creators[i]]) mx = mp[creators[i]];
            
        if(imp.find(creators[i]) == imp.end())   imp[creators[i]] = {views[i], ids[i]};
        else{                                                                               //Evaluate max view for each creator
            if( imp[creators[i]].first < views[i])  imp[creators[i]] = {views[i], ids[i]};  //checking if maximum then changed 
            else if(imp[creators[i]].first == views[i] && imp[creators[i]].second > ids[i]){    //checking if same then check the ids lexicographically smallest 
                imp[creators[i]] = {views[i], ids[i]};
            }
        }
    }
        
    vector<vector<string>> ans;
    for(auto m: mp){                         //scan for the creators with view equal to max
        if(mx == m.second){
            ans.push_back({m.first, imp[m.first].second});
        }
    }
    return ans;
}
void solve()
{
    vector<string>creators;
    vector<string>ids; 
    vector<int>views;
    creators = {"alice","alice","alice"}, ids = {"a","b","c"}, views = {1,2,2};
    vector<vector<string>> ans = mostPopularCreator(creators,ids,views);
    for (int i = 0; i < ans.size(); ++i)
    {
        wrr(ans[i][0],ans[i][1])
        cout<<endl;
    }
}

//*------------------------------------------------------------------------------------*
inline bool isTakeTestcase()
{
    return true;
    // return false;
}
int main()
{
    inout();
    ll t=1;
    if(isTakeTestcase ( )) cin>>t;
    int n = t;
    while(t--)
    {
        // cout<<"Case #"<<n-t<<": ";
        solve();
        cout<<endl;
    }
    return 0;
}
