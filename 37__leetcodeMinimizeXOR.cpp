#define ll long long int
class Solution {
public:
    ll power(int N,int R){
        if(!R)return 1;
        ll temp;
        if(R==1)return N;
        if(R%2==0){
            ll y=power(N,R/2);
           return (y*y)%1000000007;
        }
        if(R%2==1){
            temp = (N*power(N,R-1))%1000000007;
        }
        return temp;
    }
    inline int setBits(int n){
        bitset<64> bs(n);
        return bs.count();
    }
    int minimizeXor(int num1, int num2) {
        // cout<<"ok"<<endl;
        vector<ll> temp1(32,0),temp2(32,0);
        ll noBits = setBits(num2);
        int pos = 0;
        // cout<<"ok"<<endl;
        while(num1){
            if(num1&1){
                temp1[pos]++;
            }pos++;
            num1>>=1;
        }
        // cout<<"ok"<<endl;
        for(int i=31;i>=0;i--){
            if(temp1[i] && noBits){
                temp2[i]++;
                noBits--;
            }    
        }
        // cout<<"okk"<<endl;
        for(int i=0;i<=31;i++){
             if(!temp1[i] && noBits){
                temp2[i]++;
                noBits--;
            }            
        }
        // cout<<"ok"<<endl;
        ll ans = 0;
        for(int i=0;i<32;i++){
             if(temp2[i]){
                 // cout<<"okllllll"<<endl;
                ans += power(2,i);
            }            
        }
        // cout<<"okkk"<<endl;
        return ans;
    }
};