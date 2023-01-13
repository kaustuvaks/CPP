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

void print(long ar[], int n){
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

void inp(long ar[],int n){
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

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int partition(long arr[], long arr2[], int start, int end){
 
    int pivot = arr[start];
 
    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot)
            count++;
    }
 
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);
    swap(arr2[pivotIndex], arr2[start]);
 
    int i = start, j = end;
 
    while (i < pivotIndex && j > pivotIndex) {
 
        while (arr[i] <= pivot) {
            i++;
        }
 
        while (arr[j] > pivot) {
            j--;
        }
 
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
            swap(arr2[i++], arr2[j--]);
        }
    }
 
    return pivotIndex;
}
 
void quickSort(long arr[],long arr2[], int start, int end){
    if (start >= end)
        return;

    int p = partition(arr,arr2, start, end);
 
    quickSort(arr,arr2, start, p - 1);
 
    quickSort(arr,arr2, p + 1, end);
}
 


void solve(){
    int n;
    cin>>n;

    long a[n];
    long b[n];

    inp(a,n);
    inp(b,n);


    int i, j, min_idx;

    // for (i = 0; i < n-1; i++){

    //     min_idx = i;
    //     for (j = i+1; j < n; j++)
    //     if (b[j] < b[min_idx])
    //         min_idx = j;
 
    //     if(min_idx!=i){
    //         swap(&a[min_idx], &a[i]);
    //         swap(&b[min_idx], &b[i]);
    //     }
    // }

    // quickSort(b,a , 0, n - 1);

    long long sum = 0;
    int temp = b[0];
    // for(int i=0;i<n;i++){
    //     sum+=a[i]+b[i];
    //     if(b[i]>temp){
    //         temp=b[i];
    //     }
    // }

    // print(a,n);
    // print(b,n);


    for(i=0;i<n;i++){
        sum+=a[i]+b[i];
    }

    cout<<sum-b[n-1]<<endl;
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