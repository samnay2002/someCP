/*/ Author: sanmay2002(cf) sanmay320(cc) /*/
/*/ For more details copy & check this URL-> https://www.scrolldroll.com/wp-content/uploads/2022/02/Bhai-kya-kar-raha-hai-tu-Viral-Indian-Meme-Templates-of-2022.webp           /*/
#include<bits/stdc++.h>
using namespace std;
#define ll                     long long int
#define str                     string
#define mii                     map<int,int>
#define mll                     map<ll,ll>
#define mci                     map<char,int>
#define msi                     map<string,int>
#define msl                     map<string,ll>
#define pii                     pair<int, int>
#define pli                     pair<ll, int>
#define pil                     pair<int, ll>
#define pll                     pair<ll, ll>
#define vi                      vector<int>
#define vl                      vector<ll>
#define vb                      vector<bool>
#define vd                      vector<double>
#define vs                      vector<string>
#define vc                      vector<char>
#define ff                      first
#define ss                      second
#define db                      double
#define pb                      push_back
#define vvi                     vector<vi>
#define vvl                     vector<vl>
#define vvb                     vector<vb>
#define vvc                     vector<vc>
#define vvs                     vector<vs>
#define se                      set<int>
#define re(x)                   ll x;cin>>x;
#define ree(x,y)                ll x,y;cin>>x>>y;
#define reee(x,y,z)             ll x,y,z;cin>>x>>y>>z;
#define wr(x)                   cout<<x<<" ";
#define wrr(x,y)                cout<<x<<" "<<y;
#define wrrr(x,y,z)             cout<<x<<' '<<y<<' '<<z<<' ';
#define yes                     cout << "YES";
#define no                      cout << "NO";
#define fast_io                 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define MOD                     1000000000;
const float PI = 3.14;
ll modd = 998244353;
inline void inout()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif
}
void Traverse(TreeNode* root, vector<int>&v){
        if(!root)
            return;
        stack<TreeNode* >q;
        q.push(root);   
        TreeNode* temp =new TreeNode();
        while(!q.empty() )
        {
            // v.push_back(q.top()->val);
            // if(q.top()->right)
            //     q.push(q.top()->right);                  in this total comment part when i use one push operation for right side
            // if(q.top()->left)                            then top will change so the loop round is infinity thats why we should use 
            //     q.push(q.top()->left);                   a temp veriable
            // cout<<q.top()->val<<" ";
            // q.pop();

            
            temp = q.top();
            q.pop();
              v.push_back(temp->val);
                 if(temp->right)
                q.push(temp->right); 
                 if(temp->left)
                q.push(temp->left); 
         }
      return ;    
}
vector<int> preorderTraversal(TreeNode* root) {
    vector<int>vt;
    Traverse(root,vt);
    return vt;
}
//*-----------------------------------------------------------------------------------*
void solve() {
    TreeNode* root = insert a tree as you wish;
    vi ans = preorderTraversal(root);
    for (int i = 0; i < ans.size(); i++)
    {
        wr(ans[i])
    }
    
}
//*------------------------------------------------------------------------------------*
inline bool isTakeTestcase()
{
    return true;
    // return false;
}
int main()
{
    inout();
    ll t=1;
    if(isTakeTestcase ( )) cin>>t;
    int n = t;
    while(t--)
    {
        // cout<<"Case #"<<n-t<<": ";
        solve();
        cout<<endl;
    }
    return 0;
}
