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

int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);   
}

int arrGCD(int arr[], int n){
    int result = arr[0];
    for (int i = 1; i < n; i++){
        result = gcd(arr[i], result);

        if(result == 1){
            return 1;
        }
    }
    return result;
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
    cin>>n;

    int ar[n];
    inp(ar,n);

    int cost=0;

    if(n==1){
        if(ar[0] == 1){
            cost=0;
        }else{
            cost=1;
        }
    }else if(n==2){
        int x1 = gcd(ar[0],1);
        int x2 = gcd(ar[1],2);

        if(gcd(x1,x2)==1){
            cost=0;
        }else if(x2 == 1){
            cost = 1;
        }else{
            cost = 2;
        }
    
    }else{
        int arrgcd = arrGCD(ar,n);
        if(arrgcd == 1){
            cost=0;
        }else if(gcd(arrgcd, n)== 1){
            cost=1;
        }else if(gcd(arrgcd, n-1) == 1){
            cost=2;
        }else{
            cost=3;
        }
    }

    cout<<cost<<endl;
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