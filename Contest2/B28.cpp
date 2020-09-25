#include<bits/stdc++.h>
using namespace std;
int a[100];
int sum = 0;
bool chuaxet[10];
int x[10];
void nhapMang(int n) {
    int sum = 0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
}
void result(int n) {
    cout<<"[";
    for(int i=0;i<n;i++) {
        cout<<x[i]<<" ";
    }
    cout<<"]";
}
void Try(int i,int n,int k) {
    
}
int main() {
    int n,k;
    int t;
    cin>>t;
    while(t--) {
        cin>>n>>k;
        nhapMang(n);
        Try(0,n,k);
        cout<<endl;
    }
    return 0;
}