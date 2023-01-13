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
struct item{
    int m;
    int c;
};

struct segtree{
    int size;

    vector<item> values;
    item NEUTRAL_ELEMENT = {INT_MAX, 0};
    
    item merge(item a, item b){
        if(a.m > b.m){
            return b;
        }else if(b.m > a.m){
            return a;
        }

        return {a.m, a.c + b.c};
    }


    item single(int a){
        return {a,1};
    }

    void init(int n){
        size=1;
        while(size<n) size*=2;
        values.assign(2*size, NEUTRAL_ELEMENT);
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
        if(rx - lx == 1){
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

    item calc(int l, int r, int x, int lx ,int rx){

        if(lx>=r || l>=rx){
            return NEUTRAL_ELEMENT;
        }
        if(lx>=l  && rx<=r){
            return values[x];
        }

        int m = (lx +rx)/2;

        item s1 = calc(l, r, 2*x+1,lx, m);
        item s2 = calc(l, r, 2*x+2, m, rx);
        return merge(s1,s2); 
    }

    item calc(int l, int r){
        return calc(l, r, 0, 0, size);
    }

    void set(int i, int v){
        set(i, v, 0, 0, size);
    }

    vector<item> getVec(){
        return values;
    }
};

void solve(){
    int n,m;
    cin>>n>>m;
    segtree st;
    vector<int> var(n);
    for(int i=0;i<n;i++){
        cin>>var[i];
    }
    st.init(n);
    // cout<<st.size;
    st.build(var);

    // vector<item> vals = st.getVec();
    // for (auto elem : vals) {
    //     cout << elem.m<<" "<< elem.c<<endl;
    // }

    while(m--){
        int op;
        cin>>op;
        if(op==1){
            int i,v;
            cin>>i>>v;

            st.set(i,v);
            var[i] = v;

        }else{
            int l,r;
            cin>>l>>r;

            st.build(var);
            item res = st.calc(l,r);
            cout<<res.m<<" "<<res.c<<endl;
        }
    }
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;
    // cin>>t;
    // while(t--){
    // }
        solve();
    return 0;
}