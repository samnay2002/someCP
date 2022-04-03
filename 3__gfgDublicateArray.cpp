// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int a[],int n){
              int k = 1;
       for (int i=1; i<n; i++){
           if (a[i] != a[k-1]){
               a[k] = a[i];
               k++;
           }
       }return k;
        // int k,N=n;
        // sort(a,a+n);
        // for(int i=0;i<n;i++)
        // {
        //     if(a[i]==a[i+1])
        //     {
        //         k=i+1;
        //         N--;
                // continue;                   //this is my 1st code actually🥲
        //     }
        //     else
        //     {
        //         if(a[i-1]==a[i])
        //         {
        //             a[k]=a[i+1];
        //         }
        //     }
        // }
        // return N;
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}  // } Driver Code Ends