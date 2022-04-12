#include <iostream>

using namespace std;




int main() {
 
    int t;
    cin>>t;
    while(t--)
    {
        long long n=4;
        // cin>>n;
        
        if(n%4==3 || n%4 ==2) cout<<"3\n";
        else if (n%4==0) cout<<3+n<<endl;
        else if (n%4==1) cout<<n<<endl;
    }
	return 0;
}