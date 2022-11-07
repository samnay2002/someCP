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
    long long maximumSubarraySum(vector<ll>& nums, int k) {
        long long ans = 0, sum = 0;
        unordered_map<int, int> mp;
        int i = 0;
        while(i < k  && i < nums.size()){ // store first k elements in the map
            mp[nums[i]]++;
            sum += nums[i];
            i++;
        }
        if(mp.size() == k) ans = sum; // if all distinct, then ans = sum 
        while(i < nums.size()){
            mp[nums[i]]++;
            mp[nums[i-k]]--;            
            sum += nums[i];
            sum -= nums[i-k];
            if(mp[nums[i-k]] == 0) mp.erase(nums[i-k]);
            if(mp.size() == k) ans = max(ans, sum);
            i++;
        }
        return ans;
    }
//*-----------------------------------------------------------------------------------*
void solve()
{
    re(n)
    vector<string>vect;
    vvb visited(n,vb(n,0));
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        vect.emplace_back(x);
    }
    for(int i=0;i<n;i++){
        int j=n-1;
        while(j>=0&&vect[i][j]=='.'){
            visited[i][j]=1;j--;
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        int j=n-1;
        while(j>=0&&vect[j][i]=='.'){
            if(visited[j][i]==1)
                ans++;
            j--;
        }
    }
    // its solved by own big memory use buy mapping and more time consuming than upper solution
    // cout<<rec(n-1,n-1);      
    // vvl v ;
    // vl vv;
    // unordered_map<ll,unordered_map<ll,ll>>mp;
    // for (int i = 0; i < n; ++i)
    // {
    //     vl ttemp;
    //     for (int j = 0; j < n; ++j)
    //     {
    //         char temp; cin>>temp;
    //         if(temp == '#'){
    //             ttemp.push_back(1);
    //             mp[j][i]++;
    //         }
    //         else ttemp.push_back(0);
    //     }
    //     v.pb(ttemp);
    // }
    // ll ans = 0;
    // for (int i = 0; i < n; ++i)
    // {
    //     bool flag = true;
    //     for(ll j = n-1;j>=0;j--){
    //         if(v[i][j]==1){
    //             flag = false;
    //             mp[j].erase(i);
    //         }
    //         if(flag){   if(mp[j].size()==0){
    //             ans++;
    //         }}
    //     }
    // }
    wr(ans)
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
