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
    int n,c;
    cin>>n>>c;

    int x = 0;
    int ar[n];
    inp(ar,n);
    int diff[n];
    diff[0] = 0;
    //debug(n);

    for(int i=1;i<n;i++){
        diff[i] = abs(ar[i] - ar[i-1]);
    }
    //print(diff,n);
    for(int i=1;i<n;i++){
        if(diff[i] <= c){
            x++;
        }else{
            x=1;
        }
    }
    x = n>1?x:0;
    cout<<x<<endl;
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}