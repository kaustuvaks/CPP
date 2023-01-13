#include<bits/stdc++.h>
using namespace std;
#define debug(aa) cout<<(aa)<<endl;
#define debugtwo(aa,bb) cout<<aa<<" "<<bb<<endl;
#define endl "\n"
#define end(i,n) (i + 1 == n ? '\n' : ' ')

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
    string s;
    cin>>s;
    int n = s.length();
    int a=0,b=0;

    for(int i=0;i<n;i++){
        if(s[i] == ')' && a>0 ){
            a--;
            b++;
        }else if(s[i] == '('){
            a++;
        }
    }
    a=0;
    for(int i=0;i<n;i++){
        if(s[i] == ']' && a>0 ){
            a--;
            b++;
        }else if(s[i] == '['){
            a++;
        }
    }


    cout<<b<<endl;
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