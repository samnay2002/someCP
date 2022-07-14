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
void reverse(int &n)
{
  int reversed_number = 0, remainder;
  while(n != 0) {
    remainder = n % 10;
    reversed_number = reversed_number * 10 + remainder;
    n /= 10;
  }
}
int countDigit(int n)
{
   if(n == 0)
     return 1;
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}
int check(int n)
{
    // string str= to_string(n);
    // if(str[0]==str[3] && str[1]==str[2]) 
    int h,m;
    string s1 = "";
    string s2 = "";
    h = n/ 60;
    m = n%60;
    // wrr(h,m)
    if(h<10)
    {
        s1 += '0';
    }
    if(m<10)
    {
        s2+='0';
    }
    s1+=to_string(h);
    s2+=to_string(m);
    if(s1[0]==s2[1] && s1[1]==s2[0])
    {
        return 1;
    }
    return 0;
}
//*------------------------------------------------------------------------------------*
void solve()
{
    //Bhai kya kar raha hai tu
    int t,h,m,x;
    // while (t--){
        scanf("%d:%d %d",&h,&m,&x);
        int ans=0,dh=h,dm=m;
        do{
            dm+=x%60;dh+=x/60;
            if (dm>=60) dm-=60,++dh;
            if (dh>=24) dh-=24;
            if (dh/10==dm%10&&dh%10==dm/10) ++ans;
        }while (dh!=h||dm!=m);
        printf("%d",ans);
    // string s ;cin>>s;
    // vi all(17,0);
    // re(a)
    // int i =0;
    // all[i]=i;
    // i++;
    // for (int j = 10; i < 6 ; ++i,j+=10)
    // {
    //     all[i] = j;
    // // }
    // // all[i]=1;i++;
    // // for (int j = 11; i < 12; ++i,j+=10)
    // // {
    // //     all[i] = j;
    // // }
    // // all[i]=2;i++;
    // // for (int j = 12; i < 17; ++i,j+=10)
    // // {
    // //     all[i] = j;
    // // }
    // // // for(auto i : all)
    // // // {
    // // //     wr(i);
    // // // }
    // int h,m;
    // h = (int)s[0]-'0';
    // h = (h*10)+((int)s[1]-'0');
    // m = (int)s[3]-'0';
    // m = (m*10)+((int)s[4]-'0');
    // int start = (h*60)+m;
    // // // wr(start)
    // // int count=0;m+=a;
    // // for (int i = h; i < 24; i+=(a/60))
    // // {
    // //     // auto it = all.find(i%60);
    // //     int j;
    // //     for (j = m; j < 60; j+=a)
    // //     {
    // //         if (all[i]==j)
    // //         {
    // //             count++;
    // //         }
    // //     }
    // //     m=j%60;
    // // }
 
    // // wr(count)
    // int count=0;
    // // for (int i = m; i <= 60; i+=a)
    // // {
    // //     int j = reverse(h);
    // //     if(m%10==0)
    // //     {
    // //         m==
    // //     }
    // // }
    // // for (int i = h; i < 24; ++i)
    // // {
        
    // // }
    // for (int i = start+1; i < 1440; i+=a)
    // {
    //     // int hours = i/60;
    //     // int minute = i%60;
    //     // reverse(minute);
    //     // if(hours==minute)
    //     // {
    //     //     count++;
    //     // }
    //     if(check(i))
    //     {
    //         count++;
    //     }
    // }
    // wr(count)
    // wr(check(951))
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
    int t=1;
    if(isTakeTestcase ( )) cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}
