#include<bits/stdc++.h>
using namespace std;
void nhapMang(int a[],int n) {
    for(int i=0;i<n;i++)
        cin>>a[i];
}
void sort(int a[],int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-1;j++) {
            if(a[j] < a[j+1])
                swap(a[j],a[j+1]);
        }
    }
}
void sort2(int a[],int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-1;j++) {
            if(a[j] > a[j+1])
                swap(a[j],a[j+1]);
        }
    }
}
int main() {
    int n;
    int a[100];
    int b[100];
    int t;
    cin>>t;
    while(t--) {
        cin>>n;
        nhapMang(a,n);
        nhapMang(b,n);
        sort(a,n);
        sort2(b,n);
        int sum = 0;
        for(int i=0;i<n;i++) {
            sum += a[i]*b[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}