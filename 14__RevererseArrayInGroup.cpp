
#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
    void reverseInGroups(vector<long long>& arr, int n, int k)
    {
    	long long int i,j,l=0;
    	vector<int>v;
    	if(k<n)
    	{
    		for(j=0;j<n;j+=k)
        	{
          		for(i=j-1;i>=l;i--) v.push_back(arr[i]); 
          		l=j;
        	}
    		i-=k;
        	for(int j=n-1;j>=i;j--)  v.push_back(arr[j]);
    	}
        
        else
        {
        	for(int j=n-1;j>=0;j--)  v.push_back(arr[j]);
        }
        
        for(int m=0;m<n;m++) arr[m]=v[m];
    }
};

int main() {
// 			#ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
//    #endif
    int t; 
    cin >> t; 
    while(t--){ 
        int n;
        cin >> n; 
        vector<long long> arr; 
        int k;
        cin >> k; 

        for(long long i = 0; i<n; i++)
        {
            long long x;
            cin >> x; 
            arr.push_back(x); 
        }
        Solution ob;
        ob.reverseInGroups(arr, n, k);
        
        for(long long i = 0; i<n; i++){
            cout << arr[i] << " "; 
        }
        cout << endl;
    }
}
