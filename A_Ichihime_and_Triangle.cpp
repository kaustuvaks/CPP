#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        int x,y,z;

        x=b;
        z=c;
        y=c;
        // if(b==c){
        //     y=b;
        // }else{
        //     for(int i=b;i<=c;i++){
        //         if(x+i > z ){
        //             y=i;
        //             break;
        //         }
        //     }
        // }
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
}