#include<bits/stdc++.h>
using namespace std;
#define debug(n) cout<<(n)<<endl;
 
int gcd(int a, int b){
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int gcd_arr(int arr[], int n){
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
void swapTwo(int& x, int& y){
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
}

void solve(){
    int l,r,k;
        cin>>l>>r>>k;
 
        if(l==r){
            if(l==1){
                cout<<"NO\n";
                return ;
            }else{
                cout<<"YES\n";
                return ;
            }
        }
    
    	int minReq = 0;
 
    	if ((l%2 == 0) && (r%2==0))
    		minReq = (r-l+1)-(((r-l+1)/2)+1);
    	else
    		minReq = (r-l+1)-((r-l+1)/2);
    
    	cout << ((minReq <= k) ? "YES\n" : "NO\n");
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