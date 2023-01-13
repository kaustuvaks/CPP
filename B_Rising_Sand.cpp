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

void swapTwo(int& x, int& y){
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
}

int tall(int a[],int n){
    int x = 0;

    for(int i=0;(i+2)<n;i++){
        if(a[i]+a[i+2] < a[i+1] ){
            x++;
        }
    }
    return x;
}

void solve(){
    int n,k;
    cin>>n>>k;

    int ar[n];
    inp(ar,n);

    int c = 0;
    if(k==1){
        c=((n-1)/2);
    }else{
        c = tall(ar,n);
    }
    cout<<c<<endl;

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