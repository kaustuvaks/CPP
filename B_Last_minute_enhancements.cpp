#include<bits/stdc++.h>
using namespace std;
#define debug(n) cout<<(n)<<endl;

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
int diversity(int ar[], int n){
    int d = 0;
    
    for (int i=0; i<n; i++){
        for (int j=0; j<=i; j++){
            if (ar[i] == ar[j]){
                if (i == j){
                    d++;
                }
                break;
            }
        }
    }

    return d;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int ar[n];
        inp(ar,n);
        int d = diversity(ar, n);
        
        int dar[n+1];
        arrinit(dar,n+1);
        dar[0] = d;

        for(int i=0;i<n;i++){
            ar[i]+=1;
            d = diversity(ar,n);
            
            if(d>dar[i]){
                dar[i+1] = d;
            }else{
                dar[i+1] = dar[i];
            }
        }
    cout<<dar[n]<<endl;

    }
    return 0;
}