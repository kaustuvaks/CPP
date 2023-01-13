#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define ull                 unsigned long long
#define PI                  3.1415926535897932384626
#define MOD                 1000000007 // 998244353
#define debug(aa)           cout<<(aa)<<endl;
#define debugtwo(aa,bb)     cout<<aa<<" "<<bb<<endl;
#define endl                "\n"
// #define end(i,n)            (i + 1 == n ? '\n' : ' ')
#define strc(x)             string(1,x)
#define sz(c)               (int)(c).size()
#define max3(a, b, c)       max((a), max((b), (c)))
#define min3(a, b, c)       min((a), min((b), (c)))
#define mx_all(c)           *max_element((c).begin(), (c).end())
#define mn_all(c)           *min_element((c).begin(), (c).end())

typedef int node;

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

struct segtree{
    int size;
    vector<node> values;
    struct pair{
        int a;
        int b;
    };

    pair item;

    node merge(node a, node b){
        return a+b;
    }

    node single(int a){
        return a;
    }

    void init(int n){
        size=1;
        while(size<n) size*=2;
        values.assign(2*size, 0);
    }

    void build(vector<int> &a, int x, int lx, int rx){
        if(rx - lx == 1){
            if(lx <= (int)a.size()){
                values[x] = single(a[lx]);
            }
            return;
        }

        int m = (lx +rx)/2;
        
        build(a, 2*x+1, lx, m);
        build(a, 2*x+2, m, rx);
    
        values[x] = merge(values[2*x+1], values[2*x+2]);
    
    }

    void build(vector<int> &a){
        build(a, 0, 0, size);
    }

    void set(int i, int v, int x, int lx, int rx){
        if(lx - rx == 1){
            values[i] = single(v);
            return;
        }

        int m = (lx + rx)/2;

        if(i<m){
            set(i, v, 2*x+1, lx, m);
        }else{
            set(i, v, 2*x+2, m, rx);
        }

        values[x] = merge(values[2*x+1] ,values[2*x+2]);
    }

    node calc(int l, int r, int x, int lx ,int rx){

        if(lx >=r || l>=rx){
            return 0;
        }
        if(lx>=l  && rx<=r){
            return values[x];
        }

        int m = (lx +rx)/2;

        node s1 = calc(l, r, 2*x+1,lx, m);
        node s2 = calc(l, r, 2*x+2, m, rx);
        return s1+s2; 
    }

    node calc(int l, int r){
        return calc(l, r, 0, 0, size);
    }

    void set(int i, int v){
        set(i, v, 0, 0, size);
    }
};

// void solve(){
//     int n;
//     cin>>n;

//     int zero=0,pos=0,neg=0;
//     int posarr[n];
//     int negarr[n];
//     int ar[n];
//     inp(ar,n);

//     int ans = 1;
//     if(n%2==0){
//         ans+=(n/2);
//     }else{
//         ans+=(n-1)/2;
//     }

//     cout<<(n/2)<<endl;
// }


void solve(){
    int n;
    cin>>n;

    int zero = 0;
    int ar[n];
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==0){
            zero++;
        }
        ar[i] = abs(x);
    }

    sort(ar,ar+n);
    int pairs=0;
    for(int i=0;i<n-1;i++){
        if(ar[i] == 0){
            continue;
        }
        if(ar[i] == ar[i+1]){
            pairs++;
            i++;
        }
    }

    int nonneg = (n-zero)-(2*pairs);
    int ans = pairs;


    if(n == zero){
        ans=zero;
    }else if(nonneg == zero){
        ans += zero;
    }else{

        ans+=min(nonneg, zero);
        if(zero>nonneg){
            ans+= (zero-nonneg)/2;
        }

        if(zero%2==0){
            ans+=1;
        }if((zero+nonneg)%2==0){
            ans+=1;
        }
    }
    // cout<<nonneg<<" ";
    // cout<<zero<<" ";
    // cout<<pairs<<" ";
    cout<<ans<<endl;
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