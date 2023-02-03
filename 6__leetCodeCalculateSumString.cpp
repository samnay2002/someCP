//please run it on the leecode compiler
class Solution {
public:
    string digitSum(string s, int k) {
    while(s.size()>k){
        string res="";
        int i=0;
        while(i<s.size()){
            int sum=0,j=i;
            while(j<i+k and j<s.size())
            {
                sum+= (s[j]-'0');
                j++;
            }
            cout<<sum<<" ";
            res+= to_string(sum);
            i=j; 
        }
        cout<<res<<endl;
        s=res;
    }
    return s;
    }
};