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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        if(n%2 == 0){
            for(int i=1;i<=(n/2);i++){
                cout<<(i*2)<<" "<<((i*2) -1)<<" ";
            }
            cout<<endl;
        }else{
            cout<<1;
            int mid = (n-1)/2;
            for(int i=1;i<=mid;i++){
                cout<<(i*2+1)<<" "<<(i*2)<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}