/*/ Author: sanmay2002(cf) sanmay320(cc) /*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define db double
#define pb push_back
#define vi vector<int>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define vvi vector<vi>
#define vvb vector<vb>
#define vvc vector<vc>
#define vvs vector<vs>
#define se set<int>
#define re(x) int x;cin>>x;
#define ree(x,y) ll x,y;cin>>x>>y;
#define reee(x,y,z) ll x,y,z;cin>>x>>y>>z;
#define wr(x) cout<<x<<' ';
#define wrr(x,y) cout<<x<<' '<<y<<' ';
#define wrrr(x,y,z) cout<<x<<' '<<y<<' '<<z<<' ';
#define yes cout << "YES";
#define no cout << "NO";
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const float PI = 3.14;
map<pair<int, int>, int> s;
ll dx[8] = {2,2,-2,-2,1,1,-1,-1};
ll dy[8] = {1,-1,1,-1,2,-2,2,-2};
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
void inserting(int a , int b)
{
    if((a<1||8<a) || (b<1||8<b))
    {
        return;
    }
    else
    {
        s[{a,b}]++;
    }
}
void count(int a , int b )
{
    for (int i = 0; i < 8; ++i)
    {
        inserting((a+dx[i]),(b+dy[i]));
    }
}
//*------------------------------------------------------------------------------------*
void solve()
{
    ree(a,b)
    ree(x,y)
    count(a,b);
    count(x,y);
    for(auto i : s)
    {
        if(i.second==2)
        {
            yes
            return;
        }
    }
    no
 
}
//*------------------------------------------------------------------------------------*
int main()
{
    fast_io;inout();
    re(t)
    while(t--)
    {
        s.clear();
        solve();
        cout<<endl;
        cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
    }
    return 0;
}









