#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define db double
#define pb push_back
#define vi vector<ll>
#define se set<ll>
#define vvi vector<vector<ll>>
#define yes cout << "YES"<<endl;
#define no cout << "NO"<<endl;
const float N = 3.14;
int solve(string s)
{
//my solution

 //    int max = 0;
 //    int n = s.length();
 //    set<char>same;
 //    for(int i=0;i<s.length();i++)
	// {
	// 	same.insert(s[i]);
	// }
 //    if(n==same.size())return same.size();
	// for (int j = 0; j < n; ++j)
	// {
	// 	int ans;
	// 	map<char,int>check;
	// 	for (int i = j; i < n; ++i)
	// 	{
	// 		char ch = s[i];
	// 		if(check[ch]==0)
	// 		{
	// 			check[ch]++;
	// 		}
	// 		else
	// 		{
	// 			ans = check.size();
	// 			break;
	// 		}
	// 	}
 //        ans = check.size();
	// 	max = (max<ans)?ans:max;
	// }
	// return max;

// optimal solution
        int siz=s.size();
        int ans=0;int left=0,right=0;
        set<char>st;
        while(right<siz){
            if(st.find(s[right])==st.end()){
                st.insert(s[right]);right++;
                ans=max(ans,(int)st.size());
                // cout<<ans<<endl; // for understanding the solution
            }
            else{
                while(st.find(s[right])!=st.end()){
                    st.erase(st.find(s[left]));left++;
                }
                // cout<<"*"<<left<<endl;
            }
        }
        return ans;
}
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
    	string s;cin>>s;
    	int ans = solve(s);
    	cout<<ans<<endl;
    }
    return 0;
}			