#include<iostream>
using namespace std;
int k = n;
void khoiTao(int a[],int n) {
    for(int i=1;i<=n-1;i++)
        a[i] = 0;
    a[n] = n;
}
void phanTich(int a[],int n) {
    int i=k;
    while(i>0 && a[i] == 1)
        --i;
    if(i>0) {
        a[i]--;
        S = k-i+1;
        D = D / a[i];
        M = D % a[i];
        for(int j=i+1;j<=i + D;j++) {
            k = i + D;
        }
        if(R != 0) {
            k++;
            x[k] = M;
        }
    } 
}
int main() {
    int n;
    int t;
    int a[100];
    cin>>t;
    while(t--) {
        cin>>n;
        phanTich(a,n);
    }
    return 0;
}