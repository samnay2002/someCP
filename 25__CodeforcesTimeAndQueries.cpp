/*/ Author: sanmay2002(cf) sanmay320(cc) /*/
/*/ For more details copy & check this URL-> https://www.scrolldroll.com/wp-content/uploads/2022/02/Bhai-kya-kar-raha-hai-tu-Viral-Indian-Meme-Templates-of-2022.webp           /*/
#include<bits/stdc++.h>
using namespace std;
#define ll                     long long int
#define str                     string
#define mii                     map<int,int>
#define mll                     map<ll,ll>
#define mcl                     map<char,ll>
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
#define MOD                     1000000007
#define rep(i,a,b) for (ll i = a; i <= b; i++)
#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()
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
// bool isPrimeBig(int n){
//     if(n==1) return false;
//     int p=2;
//     while(true){
//         if(n>=p*p){
//             if(n%p==0){
//                 return false;
//                 n/=p;
//             }else p++;
//         }else{
//             return true;
//             break;
//         }
//     }
//     return false;
// }
// int binarySearch(vi v,int start,int end,int target)
// {
//     if (end >= start) 
//     {
//         int mid = start + (end - start) / 2;
//         if(v[mid]==target)return mid;
//         else if(v[mid]<target)                              // always else if is mandetory in this line
//         {   
//             return(binarySearch(v,mid+1,end,target));
//         }
//         else
//         {
//             return(binarySearch(v,start,mid-1,target));
//         }
//     }
//     return -1;
// }
// ll power(int N,int R){
//     ll temp;
//     if(R==0)return 1;
//    if(R==1)return N;
//     if(R%2==0){
//         ll y=power(N,R/2);
//        return (y*y)%MOD;
//     }
//     if(R%2==1){
//         temp = (N*power(N,R-1))%MOD;
//     }
//             return temp;
// }
// void permutation()
// {
//     int arr[] = { 0, 1, 2 ,3 };
//     int nums[4] ;
//     for (int i = 0; i < 4; ++i)
//     {
//         cin>>nums[i];
//     }
//     int count =0;
//     while (next_permutation(arr, arr + 4)){
//         if(nums[arr[0]]*nums[arr[3]]==nums[arr[1]]*nums[arr[2]])
//         {
//             count++;           
//             break;
//         }
//     } 
//     if(count!=0)wr("Possible")
//     else {
//         wr("Impossible")
//     }
// }
// bool primec(ll n)
// {
//     ll m=n/2;  
//     for(ll i = 2; i <= m; i++)  
//     {  
//         if(n % i == 0)  
//         {   
//             return false; 
//         }  
//     }  
//     return true;
// }
// ll GcdOfAll(vl a)
// {
//    ll n = a.size();
//    for (int i = 1; i < n; ++i)
//    {
//        a[i] = gcd(a[i-1],a[i]);
//    } 
//    return a[n-1];  
// } 
// // ll GcdOfAllline(vl a,ll k)
// // {
// //    ll n = a.size();
// //    for (int i = 1; i < n; ++i)
// //    {
// //        if(i!=k)a[i] = gcd(a[i-1],a[i]);
// //    } 
// //    return a[n-1];  
// // }
// void reverse(int &n)
// {
//   int reversed_number = 0, remainder;
//   while(n != 0) {
//     remainder = n % 10;
//     reversed_number = reversed_number * 10 + remainder;
//     n /= 10;
//   }
// }
// int countDigit(int n)
// {
//    if(n == 0)
//      return 1;
//     int count = 0;
//     while (n != 0)
//     {
//         n = n / 10;
//         ++count;
//     }
//     return count;
// }
// string DecimalToBinary(ll n) {
//    ll binaryNumber[100], num=n;
//    string ans = "";
//    ll i = 0;
//    while (n > 0) {
//       binaryNumber[i] = n % 2;
//       n = n / 2;
//       i++;
//    }
//    for (int j = i - 1; j >= 0; j--)
//       ans += 48+binaryNumber[j];
//   return ans;
// }
// void addingZero(string &s,int n){
//     for(int i=0;i<n;i++){
//         s = "0"+s;
//     }
//     wr(s)
// }
//    string addBinary(string a, string b) {
//         int mini = min(a.size(),b.size());
//         int maxi = max(a.size(),b.size());
//         int n = maxi-mini;
//         if(mini==a.size()){
//             addingZero(a,n);
//         }else{
//             addingZero(b,n);
//         }

//         // int as = a.size();
//         // int bs = b.size();
//         // while(as!=0 && bs!=0){

//         // }
//         return a;
//     }
// bool isPalindrome(string S)
// {
//     // Iterate over the range [0, N/2]
//     for (int i = 0; i < S.length() / 2; i++) {
 
//         // If S[i] is not equal to
//         // the S[N-i-1]
//         if (S[i] != S[S.length() - i - 1]) {
//             // Return No
//             return 0;
//         }
//     }
//     // Return "Yes"
//     return 1;
// }
// bool isPalindromev(vl S)
// {
//     // Iterate over the range [0, N/2]
//     for (int i = 0; i < S.size() / 2; i++) {
 
//         // If S[i] is not equal to
//         // the S[N-i-1]
//         if (S[i] != S[S.size() - i - 1]) {
//             // Return No
//             return false;
//         }
//     }
//     return true;
// }
// bool decToBinary(int n,int k)
// {
//     int binaryNum[32];
 
//     int i = 0;string s;
//     while (n > 0) {
 
//         binaryNum[i] = n % k;
//         n = n / k;
//         i++;
//     }
 
//     for (int j = i - 1; j >= 0; j--)
//         s += 48+binaryNum[j];

//     wr(s)

//     // if(isPalindrome(s)){
//     //     wr("yes")
//     // }else{
//     //     no
//     // }
//     return isPalindrome(s);
// }
// void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
// {
//     int n1=m-1,n2=n-1,i=m+n-1;// i to insert the larger number from back
//     while(n1>=0 && n2>=0)
//     {
//         if(nums1[n1]>nums2[n2])
//         nums1[i--]=nums1[n1--];
//         else
//         nums1[i--]=nums2[n2--];
//         for (int i = 0; i < nums1.size(); ++i)
//         {
//             wr(nums2[i])
//         }
//         cout<<endl;
//     }
//     while(n2>=0){
//         nums1[i--]=nums2[n2--];//if any element is left in nums1 then it will be copied in nums1
//     }
//         for (int i = 0; i < nums1.size(); ++i)
//         {
//             wr(nums1[i])
//         }
//         cout<<endl;
// }
// ll abss(ll a){
//     if(a>=0){
//         // wr(a)
//         return a;
//     }
//     else{
//         // wr(a+(-2*a))
//         return(a+(-2*a));
//     }
// }
// ll maxe(ll a , ll b){
//     if(a>b) return a;
//     else return b;
// }
// int n,maxii,ans;
// vl d(vl Quite){
//     vl a = Quite;
//     sort(a.begin(),a.end());
//     a.erase(unique(a.begin(),a.end()),a.end());
//     for (int i = 0; i < Quite.size(); ++i)
//     {
//         Quite[i] = lower_bound(a.begin(),a.end(),Quite[i]) - a.begin();
//     }
//     return Quite;
// }
// ll maxi(vl a){
//     ll mm = 0;
//     for (int i = 0; i < a.size(); ++i)
//     {
//         mm = max(mm,a[i]);
//     }
//     return mm;
// }
void iinsert(vl& vecc,ll n){
    for (ll i = 0; i < n; ++i)
    {
        re(temp);
        vecc.pb(temp);
    }
}
// ll extra(ll a, ll b){
//     ll temp = a/b;
//     if(a%b!=0){
//         return ++temp;
//     }
//     return temp;
// }
// bool israinbow(int arr[],int n)
// {
//     if(arr[0]!=1)
//     {
//         return 0;
//     }
//     int s=0,e=n-1;
//     while(s<e)
//     {
//         if(arr[s]!=arr[s+1] && arr[s]+1!=arr[s+1])
//         {
//             return 0;
//         }
//         if(arr[s]!=arr[e])
//         {
//             return 0;
//         }
//         s++,e--;
//     }
//     if(arr[s]!=7)
//     {
//      return 0;
//     }
//     else
//     {
//         return 1;
//     }
// }

// ll solve1(ll indexxx,string & s,vl & dp,map<string,string>&check,string curr,set<string>&disuster){
//      if(indexxx < 0){
//         auto it = disuster.find(curr);
//         if(it == disuster.end()){
//             disuster.insert(curr);
//             return 1;        
//         }
//         return 0;
//     }

//     if(dp[indexxx] != -1)return dp[indexxx];

//     ll ttemp = solve1(indexxx-1,s,dp,check,check[s.substr(indexxx,1)+curr],disuster);
//     ll tttemp = 0;
//     if(indexxx-1 >= 0 && check.find(s.substr(indexxx-1,2)) != check.end()){
//         tttemp = solve1(indexxx-2, s, dp,check,check[s.substr(indexxx-1,2)]+curr,disuster);
//     }
//     return dp[indexxx] = (tttemp+ttemp) %modd;

   
// }
// ll powerrr(ll a , ll b){
//     ll s= 1;
//     while(b){
//         if(b%2)s = s*a%modd;
//         a = a*a%modd;
//         b/=2;
//     }
//     return s;
// }
// ll count(ll inn,ll jnn){
//     return ((inn/(1<<(jnn+1)))<<jnn) + (max(0ll,inn%(1<<(jnn+1))-(1<<jnn)+1));
// }
// bool isPowerOfTwo(int n)
// {
//     if (n == 0)
//         return false;
 
//     return (ceil(log2(n)) == floor(log2(n)));
// }
// bool if_dsorted(vl& v,ll check) {

//   for (int i = 1; i < v.size() - 1; i++) {
//     if(check==1 && (i==v.size()/2 || i==(v.size()/2)-1 || i==(v.size()/2)+1))continue;
//      if(!(v[i] <= v[i + 1] && v[i] >= v[i - 1])){
//         return false; 
//   }
// }
// return true;
// }
// ll bitTemp(ll n)
// {
//         int pos = 0;
//         while (n > 0) {
//             n = n >> 1;
//             pos++;
//         }
//         return pos;
// }
// const int N=(int)(1e9+7);
//     string longestCommonSubsequence(string x, string y) {
//         int n=x.size(),m=y.size();
//         string s;
//         int dp[n+1][m+1];
//         for(int i=0;i<=n;i++)dp[i][0]=0;
//         for(int i=0;i<=m;i++)dp[0][i]=0;
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=m;j++){
//                 if(x[i-1]==y[j-1])dp[i][j]=1+dp[i-1][j-1];
//                 else {
//                     dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
//                 }
//             }
//         }
//         // for printing longest common subsequence
//         int i=n,j=m;
//         while(i>0 && j>0){    // if any of this i and j becomes 0 means one string is empty 
//             if(x[i-1]==y[j-1]){
//                 s+=x[i-1];    //if character matches then add that to result string and move diagonally up
//                 i--;j--;
//             }
//             else{
//                 if(dp[i][j-1]>dp[i-1][j])j--;    // else find the max of up and right position of dp table and move accordingly to up or left
//                 else i--;
//             }
//         }
//         reverse (s.begin(),s.end());    // reverse the string as we started from last
//         return s;
//     }
// int trans(string s){
//     stringstream geek(s);
//     int x = 0;
//     geek >> x;  
//     return x;  
// }
// map<int,int>mp;
// vi a;
// ll anss= 0;
// int subarrayGCD(vector<int>& nums, int k) {
//         int count=0;
//         int n=nums.size();
//         for(int i=0;i<n;i++)
//         {
//             int sum=nums[i];
//             for(int j=i;j<n;j++)
//             {
//                 sum=gcd(sum,nums[j]);
//                 if(sum==k)
//                 {
//                     count++;
//                     wr(i)
//                 }
//             }
//         }
//         return count;
// }
// bool stringHalfSame(string s){
//     ll mid = s.length()/2;
//     for (int i = 0; i < mid; ++i)
//     {
//         // wr((s.length()/2)+i)
//         if(s[i] != s[mid+i])return false;
//     }
//     return true;
// }
// void solve1(string& s){
//     ll n = s.length()/2,i = 0;
//     while(i<n){
//         s.pop_back();
//         i++;
//     }
// }
// bool fun(string &s, int idx){
//     if(idx== 0)
//         return true;
//     if(idx%2== 1)
//         return fun(s, idx-1);
//     int md= idx/2;
//     for(int i= 0;i<md;i++)
//         if(s[i]!= s[md+i])
//             return false;
//     return fun(s, idx/2);
// }
// bool checkperfectsquare(int n)
// {
     
//     // If ceil and floor are equal
//     // the number is a perfect
//     // square
//     if (ceil((double)sqrt(n)) == floor((double)sqrt(n))) {
//         return 1;
//     }
//     else {
//         return 0;
//     }
// }
// int intbinaryToDecimal(int n)
// {
//     int num = n;
//     int dec_value = 0;
 
//     // Initializing base value to 1, i.e 2^0
//     int base = 1;
 
//     int temp = num;
//     while (temp) {
//         int last_digit = temp % 10;
//         temp = temp / 10;
 
//         dec_value += last_digit * base;
 
//         base = base * 2;
//     }
 
//     return dec_value;
// }
// int strbinaryToDecimal(string n)
// {
//     string num = n;
//     int dec_value = 0;
 
//     // Initializing base value to 1, i.e 2^0
//     int base = 1;
 
//     int len = num.length();
//     for (int i = len - 1; i >= 0; i--) {
//         if (num[i] == '1')
//             dec_value += base;
//         base = base * 2;
//     }
 
//     return dec_value;
// }
// string DecimalToBinary(int num)
// {
//     string str;
//     while(num){
//     if(num & 1) // 1
//         str+='1';
//     else // 0
//         str+='0';
//     num>>=1; // Right Shift by 1
//     }
//     return str;
// }

// void reverseStr(string& str)
// {
//     int n = str.length();
 
//     // Swap character starting from two
//     // corners
//     for (int i = 0; i < n / 2; i++)
//         swap(str[i], str[n - i - 1]);
// }
 
// ll calSolve(ll n){
//     ll ans = 0;
//     for (int i = 0; i < n; ++i)
//     {
//         ans += power(2,i);
//     }
//     return ans;
// }
// string last(ll n,ll i){
//     string s = "";
//     for (int i = 0; i < n; ++i)
//     {
//         s += "0";
//     }
//     // wr(s)
//     str temp = DecimalToBinary(i);
//     // wr(temp)
//     reverseStr(temp);
//     for (int i = 0; i < temp.length(); ++i)
//     {
//         s[i] = temp[i];
//     }
//     reverseStr(s);
//     return s;
// }
//     unsigned int getFirstSetBitPos(int n)
//     {
//         return log2(n & -n) + 1;
//     }
//     int shift(char a, char b){
//     if (b > a)
//         return (b - a) ;
//     else
//         return (('z' - a) + (b - 'a') + 1) ;
// }
// bool upper(vvl&v,int n,int m,bool check){
//     ll ans = 0;
//     if(check)ans++;
//     return ans;
// }
// bool down(vvl&v,int n,int m,bool check){
//     ll ans = 0;
//     if(check){
//         if(n<v.size()-1){
//            if(v[n+1][m]==0)ans++; 
//         }else ans++;
//     }
//     else{
//         if(n<v.size()-1){
//            if(v[n+1][m]==1)ans++; 
//         }    
//     }
//     return ans;    
// }
// bool left(vvl&v,int n,int m,bool check){
//     ll ans = 0;
//     if(check)ans++;
//     return ans;    
// }
// bool right(vvl&v,int n,int m,bool check){
//     ll ans = 0;
//     if(check){
//         if(m<v[0].size()-1){
//            if(v[n][m+1]==0)ans++; 
//         }else ans++;
//     }
//     else{
//         if(m<v[0].size()-1){
//            if(v[n][m+1]==1)ans++; 
//         }     
//     }
//     return ans;    
// }
// ll help(vvl&v,int n,int m,msl mp){
//     ll ans = 0;
//     for(auto i:mp){
//         if(i.ss){
//             ll temp;
//             if(i.ff=="up"){
//                 // wr(i.ss)
//                 temp = upper(v,n,m,v[n][m]);
//             }
//             else if(i.ff=="do"){
//                 // wr(i.ss)
//                 temp = down(v,n,m,v[n][m]);
//             }
//             else if(i.ff=="le"){
//                 // wr(i.ss)
//                 temp = left(v,n,m,v[n][m]);
//             }
//             else if(i.ff=="ri"){
//                 // wr(i.ss)
//                 temp = right(v,n,m,v[n][m]);
//             }
//             // wr(temp)
//             ans += temp;
//         }
//     }
//     // cout<<endl;
//     return ans;
// }
// //do le ri up ]
// void pprint(vl &v){
//     for (int i = 0; i < v.size(); ++i)
//     {
//         wr(v[i])
//     }
   
// }
//     string makeGood(string s) {
//         bool flag = true;
//         string ans = "";
//         while(flag){
//             bool temp = true;
//             string ts = "";
//             for(int i=0;i<s.length()-1;i++){
//                 if(abs((int)s[i]-(int)s[i+1])==32){
//                     temp = false;i+=2;
//                     cout<<temp;
//                 }else{
                    
//                     ts += s[i];
//                     cout<<ts<<endl;
//                     // return ts;
//                 }
//             }
//             s = ts;
//             cout<<ts<<endl;
//             if(1)flag = false;
//         }
//         return s;
//     }
// //*------------------------------------------------------------------------------------*
// const double e=1e-5;
// bool check(double &x,vector<double> &arr,int &n,double &t){
//     double last=arr[n-1]+x;
//     for(int i=n-2;i>=0;i--){
//         if(last-arr[i]>=t){
//             last=arr[i]+min(x,last-t-arr[i]);
//         }else{
//             double req=arr[i]-last+t;
//             if(req>x)return false;
//             last=arr[i]-req;
//         }
//     }
//     return last>=0.0;;
// }
// double getResult(vector<double> &arr,int &n,double &t){
//     double l=0,r=t*n,mid;
//     while(r-l>e){
//         mid=(l+r)/2;
//         if(check(mid,arr,n,t)){
//             r=mid;
//         }else{
//             l=mid;
//         }
//     }
//     return l;
// }
// // int findMinforN(Node* root, int N)
// // {
// //     if (root->left == NULL && root->right == NULL
// //                                 && root->data < N)
// //         return -1;

// //     // If node's value is greater than N and left value
// //     // is NULL or smaller then return the node value
// //     if ((root->data >= N && root->left == NULL)
// //         || (root->data >= N && root->left->data < N))
// //         return root->data;

// //     // if node value is smaller than N search in the
// //     // right subtree
// //     if (root->data <= N)
// //         return findMinforN(root->right, N);

// //     // if node value is greater than N search in the
// //     // left subtree
// //     else
// //         return findMinforN(root->left, N);
// // }
// // int findMaxforN(Node* root, int N)
// // {
// //     // Base cases
// //     if (root == NULL)
// //         return -1;
// //     if (root->key == N)
// //         return N;

// //     // If root's value is smaller, try in right
// //     // subtree
// //     else if (root->key < N) {
// //         int k = findMaxforN(root->right, N);
// //         if (k == -1)
// //             return root->key;
// //         else
// //             return k;
// //     }

// //     // If root's key is greater, return value
// //     // from left subtree.
// //     else if (root->key > N)
// //         return findMaxforN(root->left, N);
// // }
// void mpPrint(unordered_map<ll,pair<ll,ll>>mp){
//     for(auto i:mp){
//         // wr(i.ff)
//         wrr(i.ss.ff,i.ss.ss);
//         cout<<endl;
//     }
// }
// const int MN = 1e5+5;
// ll x[MN], y[MN];
// vector <long double> vt1, vt2;
// void cal(int m) {
//     long double s=0;
//     for (int i=0; i<m-1; i++) {
//         s += (x[i]*y[i+1] - x[i+1]*y[i])/2;
//     }
//     s += (x[m-1]*y[0] - x[0]*y[m-1])/2;
//     s = abs(s);
//     vt1.push_back (s);
//     vt2.push_back (s);
//     //cout << s << "\n";
// }
// string simplest_form(string s)
// {
//     int i = 0;
//     while (i < s.length() && s[i] == '0')
//     {
//         i++;
//     }
//     if (i == s.length())
//     {
//         return "";
//     }
//     s.erase(0, i);
//     i = 0;
//     while (i < s.length() && s[i] != '.')
//     {
//         i++;
//     }
//     if (i == s.length())
//     {
//         return s;
//     }
//     int k = i - 1;
//     for (int j = i; j < s.length(); j++)
//     {
//         if (s[j] != '0' && s[j] != '.')
//         {
//             k = j;
//         }
//     }
//     s.erase(k + 1);
//     return s;
// }
// int binarySearchGreaterEqualto(vl arr,ll start,ll end,ll k)
// {
//     int l = start;
//     int r = end;
 
//     // Stores the index of the left most element
//     // from the array which is greater than k
//     int leftGreater = n;

//     // Finds number of elements greater than k
//     while (l <= r) {
//         int m = l + (r - l) / 2;

//         // If mid element is greater than
//         // k update leftGreater and r
//         if (arr[m] <= k) {
//             leftGreater = m;
//             r = m - 1;
//         }

//         // If mid element is less than
//         // or equal to k update l
//         else
//             l = m + 1;
//     }

//     // Return the count of elements greater than k
//     return leftGreater;
// }
// bool palindroimCheck(string s, int i, int j)
// {
//     while(i<j)
//     {
//         if(s[i]!=s[j]) return false;
//         else
//         {
//             i++;
//             j--;
//         }
//     }
    
//     return true;
// }
// vl dp(N+1,-1);
// ll helper(vector<vl>&a,ll ind)
// {
//     if(ind==n)return 0;
//     if(dp[ind]!=-1)return dp[ind];

//     ll ind2=-1;
//     for (int i = ind+1; i < n; ++i)
//     {
//         if(a[i][0]>=a[ind][1])
//         {
//             ind2=i;break;
//         }
//     }

//     ll ans=max(helper(a,ind+1),(((ind2!=-1)?helper(a,ind2):0ll)+a[ind][2]));

//     dp[ind]=ans;
//     return ans;

// } 
int longestCommonSubsequence(string &a, string &b) {
    short m[1001][1001] = {};
    for (auto i = 0; i < a.size(); ++i)
        for (auto j = 0; j < b.size(); ++j)
            m[i + 1][j + 1] = a[i] == b[j] ? m[i][j] + 1 : max(m[i + 1][j], m[i][j + 1]);
    return m[a.size()][b.size()]; 
}
bool slve(map<ll,pair<ll,ll>>&mp)
{
    ree(a,b)
    bool flag = false ; 
    if(mp[a].ff && mp[b].ff)
    {
        if(mp[a].first < (mp[b].second ? mp[b].second : mp[b].first))
        {
            flag = true;
        }
    }
    return flag;
}
void solve()
{
    ree(x,y)
    vl v;
    map<ll,pair<ll,ll>>m;
    for (int i = 1; i <= x; ++i)
    {
        ll temp ; cin>>temp;
        if(!m[temp].ff)
        {
            m[temp].ff = i;
        }
        m[temp].ss=i; 
    }
    for (int i = 0; i < y ; ++i)
    {
        if(slve(m)) yes
        else no
        cout<<endl;
    }
    // // ree(n,m);
    // vector<ll>rt;
    // unordered_map<ll,ll> rmp;
    // ll maxi = INT_MIN;
    // for (int i = 0; i < n; ++i)
    // {
    //     re(n);
    //     maxi = max(maxi,n);
    //     rt.pb(n);
    //     rmp[n]++;
    // }
    // vector<unordered_map<ll,ll>>temp(maxi);
    // unordered_map<ll,ll> mp;
    // for (int i = 0; i < n; ++i)
    // {
    //     mp[rt[i]]++;
    //     temp[rt[i]] = mp;
    // }
    // for (int i = 0; i < m; ++i)
    // {
    //     ree(a,b);
    //     // cout<<a<<" "<<b<<endl;
    //     // cout<<temp[b][a]<<" ";
    //     if(rmp[a] && rmp[b]){
    //         if(temp[b][a])yes
    //         else no
    //     }else no
    //     cout<<endl;
    // }
}
ll apowerbmodm(ll a, ll b, ll m)
{
    ll result{1}/**/;
    ll currVal{a};
    while(b > 0)
    {
        if((b&1 )== 1)
        {
            result = ((result * currVal) % m);
        }
        currVal = ((currVal * currVal) % m);
        b >>= 1;
    }
    return result;
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
    fast_io
    ll t=1;
    if(isTakeTestcase ( )) cin>>t;
    int n = t;
    while(t--)
    {
        // cout<<"Case #"<<n-t<<": ";
        solve();
        // cout<<endl;
    }
    return 0;
}


