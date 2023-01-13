#include<bits/stdc++.h>
using namespace std;

void print(int ar[],int begin, int end){
    for(int i=begin;i<end;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}
void inp(int ar[],int n){
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
}
void swap(int& x, int& y)
{
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        for(int i=1;i<=n;i++){
            ar[i] = i;
        }

        if(n%2==0){
            for(int i=0;i<n;i+=2){
                swap(ar[i],ar[i+1]);
            }
            print(ar,0,n);
        }else{
            cout<<n<<" ";
            for(int i=1;i<n;i+=2){
                swap(ar[i],ar[i+1]);
            }
            print(ar,1,n);
        }
    }
    return 0;
}