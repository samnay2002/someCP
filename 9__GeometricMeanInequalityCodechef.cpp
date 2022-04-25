#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n],min=0,plus=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==-1)
            {
                min++;
            }
            else if(a[i]==1)
            {
                plus++;
            }
        }
        int ans=abs(min-plus);
        if(n>=3)
        {
            if(ans==2 && min%2==0)
            {
                cout<<"Yes"<<endl;
            }
            else if(ans<2)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        else
        {
            cout<<"No"<<endl;
        }

    }
    return 0;
}
