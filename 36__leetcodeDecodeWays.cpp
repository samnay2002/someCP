#define vi vector<int>
#define pb push_back
class Solution {
public:
//     string sss ;
// bool check(string s , int& i , int c){
//         if(c==1){
//             if(s[i++]=='0'){
//                 return false;
//             }
//         }
//         if(c==2){
//             string temp = "";
//             temp += s[i];
//             temp += s[i+1];
//             if(s[i]=='0' || temp > "26"){
//                 i+=2;
//                 return false;
//             }
//             i+=2;
//         }
//         return true;
//     }
// int clglabexamStirProblem(int n,vi v,vi have) // i can go 2 or 1 stair how many ways to go n stair
// {
//         if(n==0)
//         {
//             int j = 0;
//             for(int i=0;i<v.size();i++){
//                 cout<<v[i]<<" ";
//                 if(!check(sss,j,v[i])){
//                     cout<<"false";
//                     return 0;
//                 }
                
//             }
//             cout<<endl;
//             return 1;
//         }
//     int sum = 0;
//     for(int j=0;j<have.size();j++)
//     {
//         if(n-have[j]>=0)
//         {
//             v.pb(have[j]);
            
//             sum+=clglabexamStirProblem(n-have[j],v,have);
//             v.pop_back();
//         }
//     }
//     return sum;
// }
    // int numDecodings(string s) {
    //     sss = s;
    //     vi have = {1,2},v;
    //     return clglabexamStirProblem(s.length(),v,have);
    // }  
    int numDecodings(string s) {
        if(s.length()==0 || s[0]=='0')return 0;
        if(s.length()==1)return 1;
        
        int count1=1,count2=1;
        for(int i=1;i<s.length();i++){
            int d = s[i] - '0';
            int dd = (s[i-1]-'0')*10+d;
            int count = 0;
            if(d>0) count += count2;
            if(dd >= 10 && dd <= 26)count += count1;
            count1 = count2;
            count2 = count;
        }
        return count2;
        
    }
};