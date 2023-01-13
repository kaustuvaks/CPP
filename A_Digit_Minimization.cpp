#include<bits/stdc++.h>
using namespace std;
#define debug(n) cout<<(n)<<endl;
 
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
    string str;
    cin>>str;
 
    if(str.length()==1){
        cout<<str;
    }else if(str.length()==2){
        cout<<str[1];
    }else{
        sort(str.begin(), str.end());
        cout<<str[0];
    }
    cout<<"\n";
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