// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int searchInsertK(vector<int>Arr, int N, int k)
    {
        for(int i=0;i<N;i++)
        {
            if(Arr[i]>=k && i==0)
            {
                return 0;
            }
            else if(i==N && Arr[i]<=k)
            {
                return N;
            }
            else if(Arr[i]<=k && Arr[i+1]>=k)
            {
                return (i+1);
            }
        }
        return 0;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<int>Arr(N);
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.searchInsertK(Arr, N, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends