#include<bits/stdc++.h>
using namespace std;
int main()
{
				#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
   #endif
	int t;cin>>t;
	while(t--)
	{
		int n,x,y;cin>>n>>x>>y;
		int ans = ((2*n)-2);
		int left=min(x-1,y-1);
        int upperleft=min(x-1,n-y);
        int right=min(n-x,y-1);
        int upperRight=min(n-x,n-y);
        ans+=left+upperleft+right+upperRight;
        cout<<ans<<endl;

    }
	return 0;
}