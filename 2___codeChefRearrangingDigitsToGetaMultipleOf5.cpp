#include<iostream>
using namespace std;
 int main(){
     int t;
     cin>>t;
     while(t--){
         int n;
         cin>>n;
         string s;
          cin>>s;
          int num=0;
          for(int i = 0;i<n;i++){
              if(s[i]=='0'|| s[i]=='5'){
                  num++;
              }  
          }  
          if(num>0){
              cout<<"Yes"<<'\n';
          }
          else{
              cout<<"No"<<'\n';
          }
         
     }
     return 0;
 }
