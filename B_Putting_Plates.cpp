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
    int r,c;
    cin>>r>>c;

    int max,min;
    max = (r>c)?r:c;
    min = r+c-max;

    c=max;
    r=min;

    for(int i=1;i<=c;i++){
        cout<<(i%2);
    }
    cout<<endl;

    for(int i=2;i<=r-1;i++){
        if(i%2==1){
            for(int j=1;j<=c;j++){
                if(j==1 || i==1 || j==c || i==r){
                    cout<<(1);
                }else{
                    cout<<0;
                }
            }
            cout<<endl;
        }else{
            for(int j=1;j<=c;j++){
                cout<<(0);
            }
            cout<<endl;
        }
    }

    if(r%2==1){
        for(int i=1;i<=c;i++){
        cout<<(i%2);;
        }
        cout<<endl;
    }else{
        for(int i=1;i<=c;i++){
            cout<<0;;
        }
        cout<<endl;
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){

        solve();
        cout<<endl;
    }
    return 0;
}