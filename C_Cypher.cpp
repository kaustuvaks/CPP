#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }

        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            string s;
            cin>>s;

            for(int j=0;j<s.length();j++){
                if(s[j]=='D'){
                    ar[i]=(ar[i]+1)%10;
                }else{
                    ar[i]=(ar[i]-1+10)%10;
                }
            }
        }
        
        for(int i=0;i<n;i++){
            cout<<ar[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}