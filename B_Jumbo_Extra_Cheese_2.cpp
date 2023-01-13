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

void print(long long int ar[], int n){
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

    long long ax[n];
    long long bx[n];
    long suma=0,sumb=0;

    for(int i=0;i<n;i++){

        long long ai,bi;
        cin>>ai>>bi;

        if(ai>bi){
            ax[i]=ai;
            bx[i]=bi;
        }else{
            ax[i] = bi;
            bx[i] = ai;
        }

        suma+=ax[i];
        sumb+=bx[i];
    }

    long long int peri=0;
    if(suma > sumb){
        std::sort(ax, ax+n,greater<int>());
        peri = 2*sumb;

        long long l=ax[0], r=ax[0];

        for(int i=1;i<n;i++){

            
            if(r-ax[i] > l-ax[i]){
                peri+=l-ax[i];
                l=ax[i];
            }else{
                peri+=r-ax[i];
                r=ax[i];
            }
            //cout<<"peri = "<< peri<<endl;

        }

        peri+=l+r;
    }else{
        std::sort(bx, bx+n,greater<int>());
        peri = 2*suma;

        long long l=bx[0], r=bx[0];

        for(int i=0;i<n-1;i++){

            if(r-bx[i] > l-bx[i]){
                peri+=l-bx[i];
                l=bx[i];
            }else{
                peri+=r-bx[i];
                r=bx[i];
            }
        }

        peri+=l+r;
    }
    cout<<peri<<endl;
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