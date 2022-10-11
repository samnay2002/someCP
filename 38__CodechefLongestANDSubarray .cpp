/*/ Author: sanmay2002(cf) sanmay320(cc) /*/
/*/ For more details copy & check this URL-> https://www.scrolldroll.com/wp-content/uploads/2022/02/Bhai-kya-kar-raha-hai-tu-Viral-Indian-Meme-Templates-of-2022.webp           /*/
#include<bits/stdc++.h>
using namespace std;
#define ll                      long long int
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
#define MOD                     1000000007;
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
        else if(v[mid]<target)                              // always else if is mandetory in this line
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
ll power(int N,int R){
    ll temp;
   if(R==1)return N;
    if(R%2==0){
        ll y=power(N,R/2);
       return (y*y)%modd;
    }
    if(R%2==1){
        temp = (N*power(N,R-1))%modd;
    }
            return temp;
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
ll GcdOfAll(vl a)
{
   ll n = a.size();
   for (int i = 1; i < n; ++i)
   {
       a[i] = gcd(a[i-1],a[i]);
   } 
   return a[n-1];  
} 
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
string DecimalToBinary(ll n) {
   ll binaryNumber[100], num=n;
   string ans = "";
   ll i = 0;
   while (n > 0) {
      binaryNumber[i] = n % 2;
      n = n / 2;
      i++;
   }
   for (int j = i - 1; j >= 0; j--)
      ans += 48+binaryNumber[j];
  return ans;
}
int BinaryToDecimal(int n) {
   int decimalNumber = 0;
   int base = 1;
   int temp = n;
   while (temp) {
      int lastDigit = temp % 10;
      temp = temp/10;
      decimalNumber += lastDigit*base;
      base = base*2;
   }
    return decimalNumber;
}
void addingZero(string &s,int n){
    for(int i=0;i<n;i++){
        s = "0"+s;
    }
    wr(s)
}
   string addBinary(string a, string b) {
        int mini = min(a.size(),b.size());
        int maxi = max(a.size(),b.size());
        int n = maxi-mini;
        if(mini==a.size()){
            addingZero(a,n);
        }else{
            addingZero(b,n);
        }

        // int as = a.size();
        // int bs = b.size();
        // while(as!=0 && bs!=0){

        // }
        return a;
    }
bool isPalindrome(string S)
{
    // Iterate over the range [0, N/2]
    for (int i = 0; i < S.length() / 2; i++) {
 
        // If S[i] is not equal to
        // the S[N-i-1]
        if (S[i] != S[S.length() - i - 1]) {
            // Return No
            return false;
        }
    }
    return true;
}
bool decToBinary(int n,int k)
{
    int binaryNum[32];
 
    int i = 0;string s;
    while (n > 0) {
 
        binaryNum[i] = n % k;
        n = n / k;
        i++;
    }
 
    for (int j = i - 1; j >= 0; j--)
        s += 48+binaryNum[j];

    wr(s)

    // if(isPalindrome(s)){
    //     wr("yes")
    // }else{
    //     no
    // }
    return isPalindrome(s);
}
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
    int n1=m-1,n2=n-1,i=m+n-1;// i to insert the larger number from back
    while(n1>=0 && n2>=0)
    {
        if(nums1[n1]>nums2[n2])
        nums1[i--]=nums1[n1--];
        else
        nums1[i--]=nums2[n2--];
        for (int i = 0; i < nums1.size(); ++i)
        {
            wr(nums2[i])
        }
        cout<<endl;
    }
    while(n2>=0){
        nums1[i--]=nums2[n2--];//if any element is left in nums1 then it will be copied in nums1
    }
        for (int i = 0; i < nums1.size(); ++i)
        {
            wr(nums1[i])
        }
        cout<<endl;
}
ll abss(ll a){
    if(a>=0){
        // wr(a)
        return a;
    }
    else{
        // wr(a+(-2*a))
        return(a+(-2*a));
    }
}
ll maxe(ll a , ll b){
    if(a>b) return a;
    else return b;
}
int n,maxii,ans;
vl d(vl Quite){
    vl a = Quite;
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()),a.end());
    for (int i = 0; i < Quite.size(); ++i)
    {
        Quite[i] = lower_bound(a.begin(),a.end(),Quite[i]) - a.begin();
    }
    return Quite;
}
ll maxi(vl a){
    ll mm = 0;
    for (int i = 0; i < a.size(); ++i)
    {
        mm = max(mm,a[i]);
    }
    return mm;
}
void iinsert(vl& vecc,ll n){
    for (int i = 0; i < n; ++i)
    {
        re(temp);
        vecc.pb(temp);
    }
}
ll extra(ll a, ll b){
    ll temp = a/b;
    if(a%b!=0){
        return ++temp;
    }
    return temp;
}
bool israinbow(int arr[],int n)
{
    if(arr[0]!=1)
    {
        return 0;
    }
    int s=0,e=n-1;
    while(s<e)
    {
        if(arr[s]!=arr[s+1] && arr[s]+1!=arr[s+1])
        {
            return 0;
        }
        if(arr[s]!=arr[e])
        {
            return 0;
        }
        s++,e--;
    }
    if(arr[s]!=7)
    {
     return 0;
    }
    else
    {
        return 1;
    }
}

ll solve1(ll indexxx,string & s,vl & dp,map<string,string>&check,string curr,set<string>&disuster){
     if(indexxx < 0){
        auto it = disuster.find(curr);
        if(it == disuster.end()){
            disuster.insert(curr);
            return 1;        
        }
        return 0;
    }

    if(dp[indexxx] != -1)return dp[indexxx];

    ll ttemp = solve1(indexxx-1,s,dp,check,check[s.substr(indexxx,1)+curr],disuster);
    ll tttemp = 0;
    if(indexxx-1 >= 0 && check.find(s.substr(indexxx-1,2)) != check.end()){
        tttemp = solve1(indexxx-2, s, dp,check,check[s.substr(indexxx-1,2)]+curr,disuster);
    }
    return dp[indexxx] = (tttemp+ttemp) %modd;

   
}
ll powerrr(ll a , ll b){
    ll s= 1;
    while(b){
        if(b%2)s = s*a%modd;
        a = a*a%modd;
        b/=2;
    }
    return s;
}
ll count(ll inn,ll jnn){
    return ((inn/(1<<(jnn+1)))<<jnn) + (max(0ll,inn%(1<<(jnn+1))-(1<<jnn)+1));
}
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;
 
    return (ceil(log2(n)) == floor(log2(n)));
}
//*------------------------------------------------------------------------------------*
void solve()
{
    //Bhai kya kar raha hai tu
    re(n)
    if(n <= 2) {
        cout << "1" ;
        return;
    }
    if(n == 3) {
        cout << "2" ;
        return;
    }
    long i = 1;
    while((1 << i) < n) {
        i++;
    }
    if((1 << i) > n) i--;
    long prevLen = (1 << i) - (1 << (i - 1));
    long currLen = n - (1 << i) + 1;
    cout << max(prevLen, currLen);
    // if(!isPowerOfTwo(n))v.pb(n);
    // // for(auto i : v)wr(i)
    // for(int i=1;i<v.size();i++){
    //     // wr(v[i])
    //     temp = v[i]-v[i-1];
    //     if(!isPowerOfTwo(v[i]) && i==v.size()-1)temp++;
    //     maxi = max(maxi,temp);
    // }
    // string s;cin>>s;
    // ll n = s.length(),count1=0,count2=0,ans=0;
    // for (int i = 0; i < n-1; ++i)
    // {
    //     if(s[i]=='a'&&s[i+1]=='b')
    //     count1++;
    // }
    // for (int i = 0; i < n-1; ++i)
    // {
    //     if(s[i]=='b'&&s[i+1]=='a')
    //     count2++;
    // }
    // if(count1==0 && count2 ==0){
    //     ans++;
    // }else{
    //     ans = pow(2,(count1+count2));
    // }
    // ans %= 998244353;
    // wr(ans)
    // string s;cin>>s;
    // ll n = s.length();
    // vl dp(n,-1);
    // map<string,string> check {{"a","01"},{"b","10"},{"ab","010"},{"ba","101"}};
    // set<string>disuster;
    // wr(solve1((n-1),s,dp,check,"",disuster))
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
    int n = t;
    while(t--)
    {
        // cout<<"Case #"<<n-t<<": ";
        solve();
        cout<<endl;
    }
    return 0;
}






