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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int sum = 0;
    int mn = min(min(a,c),min(c,d));
    sum += 256*mn;
    a-=mn;
    c-=mn;
    d-=mn;

    mn = min(a,b);
    if(mn<0){
        mn=0;
    }
    sum+=32*mn;
    cout<<sum;

    return 0;
}