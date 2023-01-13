#include<bits/stdc++.h>
using namespace std;
#define debug(aa) cout<<(aa)<<endl;
#define debugtwo(aa,bb) cout<<aa<<" "<<bb<<endl;
#define endl "\n"
#define end(i,n) (i + 1 == n ? '\n' : ' ')

void print(int ar[], int n){
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}

void arrinit(int ar[],int n){
    for(int i=0;i<n;i++){
        ar[i]=0;
    }
}

void inp(int ar[],int n){
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
}

void swapTwo(int& x, int& y)
{
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
}

void solve(){
    string s;
    cin>>s;
    int len = s.length();
    int ar[26];
    arrinit(ar,26);

    for(int i=0;i<len;i++){
        ar[s[i] - 97]++;
    }
    int pos = 0;
    for(int i=0;i<26;i++){
        if(ar[i] >0){
            char x = (char)(i+97);
            string t = string(1,x);
            pos = s.find(t);
            break;
        }
    }
    if(pos == 0){
        cout<<s[0]<<" "<<s.substr(1)<<endl;
    }else{
        cout<<s[pos]<<" "<<s.substr(0, pos)+s.substr(pos+1)<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}