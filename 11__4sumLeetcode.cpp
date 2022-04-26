// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int>> fourSum(vector<int> &nums, int target) {
        if(nums.size()<4)
           return {};
        sort(nums.begin(),nums.end());
        
        vector<vector<int>> res1;
        //if(nums.size()==0)return res1;
      for(int j=0;j<nums.size()-3;j++)
      {
        for(int i=j+1;i<nums.size()-2;i++)
        {
           if(i==j+1||(i>j+1&&nums[i]!=nums[i-1]))
           {
               int lo=i+1;
               int hi=nums.size()-1;
               int sum=target-nums[i]-nums[j];
               while(lo<hi)
               {
                   if(nums[lo]+nums[hi]==sum)
                   {
                        vector<int>temp;
                        int myarray[] ={nums[i],nums[j],nums[lo],nums[hi]};   //creating array for sorting the main four elements
                        temp.insert (temp.begin(), myarray, myarray+4);
                        sort(temp.begin(),temp.end());
                        res1.push_back(temp);
                        while(lo<hi&&nums[lo]==nums[lo+1])lo++;
                        while(lo<hi&&nums[hi]==nums[hi-1])hi--;
                        lo++;
                        hi--;
                       
                   }
                   else if(nums[lo]+nums[hi]>sum){
                       hi--;}
                   else lo++;
               }
               while(j<nums.size()-1&&nums[j]==nums[j+1])j++;
           }
            while(i<nums.size()-1&&nums[i]==nums[i+1])i++;
        }
      }      
        return res1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << " | ";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code End