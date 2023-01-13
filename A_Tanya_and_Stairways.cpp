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
    int ar[n];
    inp(ar,n);

    vector<int> v;
    int c= -1 ;
    bool flag = true;

    for(int i=0;i<n;i++){
        if(ar[i] == 1 && i>0){
            v.push_back(ar[i-1]);
        }
    }
    v.push_back(ar[n-1]);
    cout<<v.size()<<endl;

    for (int i: v)
        cout <<i<< " ";

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