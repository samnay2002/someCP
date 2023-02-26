#define ll long long int 
class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        ll mm = m,vlu = 0;
        vector<int>ans;
        for(int i=0;i<word.size();i++){
            vlu = vlu * 10;
            // cout<<vlu<<" ";
            vlu += (word[i]-48) ;
            // cout<<vlu<<" ";
            vlu %= mm;
            if(vlu == 0){
                // cout<<vlu<<endl;
                ans.push_back(1);
            }
            else {
                // cout<<vlu<<" "<<"---0----"<<endl;
                ans.push_back(0);
            }
        }
        return ans;
    }
};