#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t-->0){
        int l ;
        cin>>l;
        string s;
        cin>>s;

        int ar[26];
        for(int i=0;i<26;i++){
            ar[i] = 0;
        }
        for(int i=0;i<l;i++){
            ar[s[i]-65]++;
        }
        int sum=0;
        for(int i=0;i<26;i++){
            if(ar[i]){
                sum+=2+(ar[i]-1);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}