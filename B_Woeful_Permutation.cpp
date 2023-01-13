#include<bits/stdc++.h>
using namespace std;
#define debug(n) cout<<(n)<<endl;
#define endl "\n"

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
    int n;
    cin>>n;

    if(n%2==0){
        for(int i=1;i<(n);i+=2){
            cout<<(i+1)<<" "<<i<<" ";
        }
        cout<<endl;
    }else{
        cout<<1<<" ";
        for(int i=2;i<(n);i+=2){
            cout<<(i+1)<<" "<<i<<" ";
        }
    }
    cout<<endl;
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