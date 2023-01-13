#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define ull                 unsigned long long
#define PI                  3.1415926535897932384626
#define MOD                 1000000007 // 998244353
#define debug(aa)           cout<<(aa)<<endl;
#define debugtwo(aa,bb)     cout<<aa<<" "<<bb<<endl;
#define endl                "\n"
#define end(i,n)            (i + 1 == n ? '\n' : ' ')
#define strc(x)             string(1,x)
#define sz(c)               (int)(c).size()
#define max3(a, b, c)       max((a), max((b), (c)))
#define min3(a, b, c)       min((a), min((b), (c)))
#define mx_all(c)           *max_element((c).begin(), (c).end())
#define mn_all(c)           *min_element((c).begin(), (c).end())

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


    if(n<2020){
        cout<<"NO"<<endl;
    }else if(n%2020<=4 || n%2021>=2017){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int i=0;
    while(t--){
        i++;
        solve();
    }
    return 0;
}