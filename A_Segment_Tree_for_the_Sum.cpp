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


template <typename S>
ostream& operator<<(ostream& os,
                    const vector<S>& vector)
{
    // Printing all the elements
    // using <<
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

struct segtree{
    int size;
    vector<long long> values;

    void init(int n){
        size=1;
        while(size<n) size*=2;
        values.assign(2*size, 0);
    }

    void set(int i, int v, int x, int lx, int rx){
        if(rx - lx == 1){
            values[x] = v;
            return;
        }

        int m = (lx + rx)/2;

        if(i<m){
            set(i, v, 2*x+1, lx, m);
        }else{
            set(i, v, 2*x+2, m, rx);
        }

        values[x] = (values[2*x+1]+values[2*x+2]);
    }

    long long sum(int l, int r, int x, int lx ,int rx){

        if(lx >=r || l>=rx){
            return 0ll;
        }
        if(lx>=l  && rx<=r){
            return values[x];
        }

        int m = (lx +rx)/2;

        long long s1 = sum(l, r, 2*x+1,lx, m);
        long long s2 = sum(l, r, 2*x+2, m, rx);

        return s1+s2; 
    }

    long long sum(int l, int r){
        return sum(l, r, 0, 0, size);
    }

    void set(int i, int v){
        set(i, v, 0, 0, size);
    }

    vector<long long> getVec(){
        return values;
    }
};

void solve(){
    int n,m;
    cin>>n>>m;

    segtree st;
    st.init(n);

    for(int i=0;i<n;i++){
        int xv;
        cin>>xv;
        st.set(i, xv);
    }

    while(m--){
        int op;
        cin>>op;

        if(op==1){
            int i,v;
            cin>>i>>v;

            st.set(i, v);
        }else{
            int l,r;
            cin>>l>>r;
            int val;
            val = st.sum(l,r);
            cout<<val<<endl;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;
    // cin>>t;
    // while(t--){
    //     solve();
    // }
    solve();
    return 0;
}