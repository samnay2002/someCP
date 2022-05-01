#include <iostream>
#include<vector>

using namespace std;
string longestCommonPrefix(vector<string>& s) {
    
    if(s.empty())
        return "";
    
    for(int i=0; i<s[0].size(); i++){
        for(int j=1; j<s.size(); j++){
            if(i == s[j].size() || s[0][i] != s[j][i])
                return s[0].substr(0,i);
        }
    }
    return s[0];
  }

int main()
{
    int n;cin>>n;
    vector<string>a;
    for(int i=0;i<n;i++)
    {
        string s;cin>>s;
        a.push_back(s);
    }
    string ans = longestCommonPrefix(a);
    cout<<ans;
    return 0;
}
