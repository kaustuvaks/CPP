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
    int n,m;
    cin>>n>>m;

    int ar[m+1];
    arrinit(ar,m+1);
    int cnt = 0;

    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;

        for(int j=l;j<=r;j++){
            ar[j]++;
        }
    }

    //print(ar,m+1);
    for(int i=1;i<=m;i++){
        if(ar[i] == 0){
            cnt++;
        }
    }

    cout<<cnt<<endl;
    for(int i=1;i<=m;i++){
        if(ar[i] == 0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}