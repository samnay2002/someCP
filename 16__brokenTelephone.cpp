#include<bits/stdc++.h>
using namespace std;
int main()
{
   #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
   #endif
	long long int t;cin>>t;
	if(1<=t && t<=5)
	{
		while(t--)
		{
		long long int n;cin>>n;
		long long int a[n];
		set<long long int>ans;
		if(2<=n && n<=pow(10,5))
		{
			for(int i=0;i<n;i++)
			{
				int x;cin>>x;
				if(1 <= x && x <= pow(10,9))
				{
					a[i]=x;
				}

			}
			for(int i=0;i<n-1;i++)
			{
				if(a[i]!=a[i+1])
				{
					ans.insert(i);
					ans.insert(i+1);
				}
			}
			cout<<ans.size();
		}
		cout<<endl;
		}
	}
	
	return 0;
}

