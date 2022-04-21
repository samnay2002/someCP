#include <bits/stdc++.h>
using namespace std;
// long long int _ceil(long long int x,long long int temp)
// {
//     return x%temp==0 ? x/temp:(x/temp)+1;
// }
int main() {
    int t;cin>>t;
    while(t--)
    {
        long long int n,x,ans;cin>>n>>x;
        long long a[n];
        for(long long int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int temp=a[0];
        // ans=_ceil(x,temp);
        ans= x/temp + (x%temp!=0);
        cout<<max(ans,n)<<endl;
    }
	return 0;
}
