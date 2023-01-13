#include<bits/stdc++.h>
using namespace std;
#define debug(aa) cout<<(aa)<<endl;
#define debugtwo(aa,bb) cout<<aa<<" "<<bb<<endl;
#define endl "\n"

void print(int ar[], int n){
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}

void print(long long ar[], int n){
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

    int ar[n];
    long long presum[n+1];
    long long sufsum[n+1];
    presum[0] = 0;
    sufsum[0] = 0;

    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    sort(ar+0,ar+n);
    for(int i=1;i<=n;i++){
        presum[i] = presum[i-1]+ar[i-1];
        sufsum[i] = sufsum[i-1] + ar[n-i];
    }


    long long x = 0;
    int i,cnt=0;
    bool flag = false;

    for(i=1;i<=n;i++){
        if(2*i+1 <= n){
            if(presum[i+1] < sufsum[i]){
                flag = true;
            }
        }
        if(flag) break;
    }

    
    if(flag){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
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