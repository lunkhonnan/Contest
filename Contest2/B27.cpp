#include<bits/stdc++.h>
using namespace std;
int total = 0;
int dem = 0;
int a[100];
void nhapMang(int n) {
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
}
int sumArr(int n,int k) {
    int sum = 0;
    for(int i=0;i<n;i++)
        sum += a[i];
    return sum / k;
}
void Try(int i,int n,int k) {
    for(int j=1;j>=-1;j-=2) {
        total += j*a[i];
        if(i == n-1) {
            if(total == sumArr(n,k)) {
                dem++;
            }
            if(dem == k) {
                cout<<1;
                return ;
            }
        }else {
            Try(i+1,n,k);
        }
    }
}
int main() {
    int t;
    int n,k;
    cin>>t;
    int a[100];
    while(t--) {
        cin>>n>>k;
        nhapMang(n);
        Try(0,n,k);
        cout<<endl;
        dem = 0;
        total = 0;
    }
    return 0;
}