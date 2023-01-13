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

void maxMEX(int arr[], int N, int K)
{
    // Stores element from 1 to N + 1
    // is nor present in subarray
    set<int> s;
    string ans;
    // Store number 1 to N + 1 in set s
    for (int i = 1; i <= N + 1; i++)
        s.insert(i);
 
    // Find the MEX of K length subarray
    // starting from index 0
    for (int i = 0; i < K; i++)
        s.erase(arr[i]);
 
    int mex = *(s.begin());
 
    // Find the MEX of all subarray of
    // length K by erasing arr[i]
    // and inserting arr[i-K]
    for (int i = K; i < N; i++) {
        s.erase(arr[i]);
 
        s.insert(arr[i - K]);
 
        // Store first element of set
        int firstElem = *(s.begin());
 
        // Updating mex
        mex = max(mex, firstElem);
    }
 
    // Print maximum MEX of all K
    // length subarray
    cout << mex << ' ';
}

void solve(){
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    int ar[n];
    arrinit(ar,n);

    for(int i=0;i<n;i++){
        ar[i] = s[i] - 97;
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