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

typedef int node;
template <typename S>

ostream& operator<<(ostream& os,const vector<S>& vector){
    for (auto element : vector) {
        os << element << " ";
    }
    return os;
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

bool isPowerOfTwo(int n){
    if (n == 0)
        return false;
    return (ceil(log2(n)) == floor(log2(n)));
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

void solve(){
    int n, x;
    cin>>n>>x;

    if(n%2 == 0){

        if((x == n || x==(n/2)) || (isPowerOfTwo(x) and x<(n/2))){
            cout<<x<<" ";
            for(int i=2;i<x;i++){
                cout<<i<<" ";
            }

            cout<<n<<" ";
            for(int i=x+1;i<n;i++){
                cout<<i<<" ";
            }
            cout<<1<<endl;
        }else{
            cout<<-1<<endl;
        }
    }else{
        if(n==x){
            cout<<x<<" ";
            for(int i=2;i<n;i++){
                cout<<i<<" ";
            }
            cout<<1<<endl;
        }else{
            cout<<-1<<endl;
        }
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