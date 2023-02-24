#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define db double
#define pb push_back
#define vi vector<ll>$1
#define se set<ll>
#define vvi vector<vector<ll>>
#define yes cout << "YES"<<endl;
#define no cout << "NO"<<endl;
const float N = 3.14;
int32_t main()
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
        int x;cin>>x;
        int n=x;
        if(x==1)
        {
        	cout<<3<<endl;
        }
        else
        {
        	int i=0,ans;
        	//find first set bit in this number
			while ((n&1) ==0)
			{
   				i++;
				n>>=1;
			}
			ans=pow(2,i);
        	if(ans==x)ans++;
        	cout<<ans<<endl;
        }
    }
    return 0;
}