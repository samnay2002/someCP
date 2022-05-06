#include<bits/stdc++.h>
using namespace std;
class Sanmay {
    private:
        vector<int>ans1;
    public:
        void singleNumber(vector<int>&nums) {
        map<int, int> M;
        for(int it : nums)
        {
            ++M[it];
        }
        for(auto i : M)					//for(int i=0;i<n;i++)
        {
        	if(i.second == 1)
        	{
        		ans1.push_back(i.first);
        	}
        }
    }
    void print(vector<int>&nums)
    {
        for(int i=0;i<ans1.size();i++)
        {
            cout<<ans1[i]<<" ";
        }
    }
};
int main()
{
        #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   #endif
    Sanmay ob;
    int n;cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        nums.push_back(x);
    }
    ob.singleNumber(nums);
    ob.print(nums);

}