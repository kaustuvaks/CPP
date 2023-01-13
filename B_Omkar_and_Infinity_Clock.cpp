#include<bits/stdc++.h>
using namespace std;
#define debug(aa) cout<<(aa)<<endl;
#define debugtwo(aa,bb) cout<<aa<<" "<<bb<<endl;
#define endl "\n"

bool comp(int a, int b) { 
 return (a < b); 
} 

int maxx(int ar[],int n){
    int mm = INT_MIN;
    for(int i=0;i<n;i++){
        if(ar[i]>mm){
            mm = ar[i];
        }
    }
    return mm;
}

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
    long long int k;
    cin>>n>>k;

    int ar[n];
    inp(ar,n);

    int loop = k%2==1?1:2;

    for(int i=1;i<=loop;i++){
        int mx = maxx(ar,n);
        for(int i=0;i<n;i++){
            ar[i] = mx - ar[i];
        }
    }
    print(ar,n);
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