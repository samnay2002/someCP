#include <bits/stdc++.h>
using namespace std;

void solve()                       //3 tipes of gcd are available in solve 1- numbers which gcd 2 ,, numbers which gcd 3     
{
    int x,y;cin>>x>>y;                                          //and last one is the numbers whose are x+1,x+3 (ex 3 , 6)
    auto check = [&](int a, int b)
    {
        if(x<=a and b<=y and __gcd(a,b)>1)
        {
            return 1;
        }
        else 
            return 0;
    };
    if(check(x,x+2))
    {
        cout<<x<<" "<<x+2<<endl;
        return;
    }
    else if(check(x,x+3))
    {
        cout<<x<<" "<<x+3<<endl;
        return;
    }
    else if(check(x+1,x+3))
    {
        cout<<x+1<<" "<<x+3<<endl;
        return;
    }
    else
    {
        cout<<-1<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}