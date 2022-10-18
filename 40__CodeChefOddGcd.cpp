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
void iinsert(vl& vecc,ll n){
    for (ll i = 0; i < n; ++i)
    {
        re(temp);
        vecc.pb(temp);
    }
}
//*------------------------------------------------------------------------------------*
void solve()
{
    //Bhai kya kar raha hai tu
    re(n)
    vl v;
    iinsert(v,n);
    ll ans;
    for (int i = 0; i < n; ++i)
    {
        ll temp = v[i];
        ll count = 0;
        while(!(temp%2)){
            temp = temp / 2;
            count++;
        }
        if(i==0 || count < ans){
            ans = count;
        }
    }
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
