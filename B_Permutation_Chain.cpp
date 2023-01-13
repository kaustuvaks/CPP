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
    int n;
    cin>>n;
    cout<<n<<endl;;
    int ar[n];

    for(int i=0;i<n;i++){
        ar[i] = i+1;
    }

    for(int i=0;i<n;i++){
        print(ar, n);

        if(i<n-1){
            int t;
            t = ar[i+1];
            ar[i+1] = ar[i];
            ar[i] = t;
        }
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