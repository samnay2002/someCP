#include <bits/stdc++.h>
using namespace std;

int main() {
	// 	#ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
 //   #endif
	int t;
	cin>>t;
	while(t--){
		int m,n;cin>>m;
		vector<int> nums1,nums2;
		for(int i=0;i<m;i++)
		{
			int x;cin>>x;
			nums1.push_back(x);
		}
		cin>>n;
		for(int i=0;i<n;i++)
		{
			int x;cin>>x;
			nums2.push_back(x);
		}
        vector<int> arr;
		unordered_map<int,int> ump;
        for(auto num : nums1){
            ump[num]++;   
        }
        for(auto num : nums2){
            if(ump[num]>0){
                arr.push_back(num);
                ump[num]--;
            }
        }
		for (auto i: arr) 
		{
			cout<<i<<" ";
		}

	cout<<endl<<"hello world";
}
	return 0;
}





