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
    int r,c;
    cin>>r>>c;

    if(r==1 || c==1){
        if(r==c){
            cout<<0<<"\n";
        }else{
            cout<<max(r,c)<<"\n";
        }
    }else if(r==2 || c==2){
        if(r==c){
            cout<<"4\n";
        }else{
            cout<<min((r-1)+2*(c-1)+1,(c-1)+2*(r-1)+1)<<"\n";
        }
    }else{
        cout<<min((r-1)+2*(c-1)+1,(c-1)+2*(r-1)+1)<<"\n";
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