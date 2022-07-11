/*/ Author: sanmay2002(cf) sanmay320(cc) /*/
/*/ For more details copy & check this URL-> https://www.scrolldroll.com/wp-content/uploads/2022/02/Bhai-kya-kar-raha-hai-tu-Viral-Indian-Meme-Templates-of-2022.webp           /*/
#include<bits/stdc++.h>
using namespace std;
#define ll                      long long
#define mii                     map<int,int>
#define mci                     map<char,int>
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
#define vvb                     vector<vb>
#define vvc                     vector<vc>
#define vvs                     vector<vs>
#define se                      set<int>
#define re(x)                   int x;cin>>x;
#define ree(x,y)                ll x,y;cin>>x>>y;
#define reee(x,y,z)             ll x,y,z;cin>>x>>y>>z;
#define wr(x)                   cout<<x<<' ';
#define wrr(x,y)                cout<<x<<' '<<y<<' ';
#define wrrr(x,y,z)             cout<<x<<' '<<y<<' '<<z<<' ';
#define yes                     cout << "YES"<<endl;
#define no                      cout << "NO"<<endl;
#define fast_io                 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define MOD                     1000000007;
const float PI = 3.14;
inline void inout()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif
}
inline int setBits(int n){
    bitset<64> bs(n);
    return bs.count();
}
bool isPrimeBig(int n){
    if(n==1) return false;
    int p=2;
    while(true){
        if(n>=p*p){
            if(n%p==0){
                return false;
                n/=p;
            }else p++;
        }else{
            return true;
            break;
        }
    }
    return false;
}
int binarySearch(vi v,int start,int end,int target)
{
    if (end >= start) 
    {
        int mid = start + (end - start) / 2;
        if(v[mid]==target)return mid;
        else if(v[mid]<target)
        {
            return(binarySearch(v,mid+1,end,target));
        }
        else
        {
            return(binarySearch(v,start,mid-1,target));
        }
    }
    return -1;
}
ll power(ll a , ll b)
{
    ll ans = 1;
    while(b)
    {
        if(b&1)
        {
            ans = (ans*a)%MOD;
        }
        a = (a*a)%MOD;
        b/=2;
    }
    return ans;
}
void permutation()
{
    int arr[] = { 0, 1, 2 ,3 };
    int nums[4] ;
    for (int i = 0; i < 4; ++i)
    {
        cin>>nums[i];
    }
    int count =0;
    while (next_permutation(arr, arr + 4)){
        if(nums[arr[0]]*nums[arr[3]]==nums[arr[1]]*nums[arr[2]])
        {
            count++;           
            break;
        }
    } 
    if(count!=0)wr("Possible")
    else {
        wr("Impossible")
    }
}
bool primec(ll n)
{
    ll m=n/2;  
    for(ll i = 2; i <= m; i++)  
    {  
        if(n % i == 0)  
        {   
            return false; 
        }  
    }  
    return true;
}
// ll GcdOfAll(vi a)
//{
//    ll n = a.size();
//    for (int i = 1; i < n; ++i)
//    {
//        a[i] = gcd(a[i-1],a[i]);
//    } 
//    return a[n-1];  
//} 
vector<int> sortArrayByKBit(int n, int k, vector<int> &arr) {
   // Write your code here.
   int K = 1<<(k-1);
   int l=0,r=0;
   while(r<n){
       if(!(K&arr[r])){
           int p = r;
           while(p>l){
               swap(arr[p],arr[p-1]);
               p--;
           }
           l++;
       }
       r++;
   }
   return arr;

}
//*------------------------------------------------------------------------------------*
void solve()
{
    //Bhai kya kar raha hai tu
    ree(n,k)
    vi v;
    for (int i = 0; i < n; ++i)
    {
        int temp;cin>>temp;
        v.pb(temp);
    }
    vi ans = sortArrayByKBit(n,k,v);
    for(auto i : ans)
    {
        cout<<i;
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
    fast_io;inout();
    int t=1;
    if(isTakeTestcase ( )) cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}