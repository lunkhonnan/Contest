#include<iostream>
using namespace std;
bool change = true;
void nhapMang(int a[],int k,int b[]) {
    for(int i=1;i<=k;i++) {
        cin>>a[i];
        b[i] = a[i];
    }
}
void hoanVi(int a[],int n,int k) {
    int i = k;
    while(i>0 && a[i] == n-k+i)
        --i;
    if(i>0) {
        a[i] ++;
        for(int j=i+1;j<=k;j++) {
            a[j] = a[i] +j -i;
        }
    }else {
        change = false;
    }
}
void soSanh(int a[],int b[],int k) {
    int count = 0;
    for(int i=1;i<=k;i++) {
        for(int j=1;j<=k;j++) {
            if(a[i] == b[j])
                count++;
        }
    }
    cout<<k-count;
}
int main() {
    int n,k,t;
    cin>>t;
    int a[100],b[100];
    while(t--) {
        cin>>n>>k;
        nhapMang(a,k,b);
        hoanVi(a,n,k);
        if(change)
            soSanh(a,b,k);
        else 
            cout<<k;
        int h = t-1;
        if(h>=0) {
            cout<<endl;
        }
    }
    return 0;
}
