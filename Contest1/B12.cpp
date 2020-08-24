#include<iostream>
using namespace std;
bool change = true;
void khoiTao(int a[],int n,int k) {
    int count = 0;
    for(int i=n-1;i>=0;i--) {
        if(count != k) {
            a[i] = 1;
            count++;
        }else {
            a[i] = 0;
        }
    }
    for(int i=0;i<n;i++)
        cout<<a[i];
        cout<<endl;
}
void nextBin(int a[],int n,int k) {
    int i=n-1;
    while(i>=0 && a[i] != 0)
        --i;
    if(i>=0) {
        a[i] = 1;
        for(int j=i+1;j<n;j++) {
            if(a[j] == 1)
                a[j] = 0;
            else a[j] = 1;
        }
    }else {
        change = false;
    }
}
void countBin(int a[],int n,int k) {
    int count = 0;
    for(int i=0;i<n;i++) {
        if(a[i] == 1)
            count++;
    }
    if(count == k) {
        for(int i=0;i<n;i++)
            cout<<a[i];
            cout<<endl;
    }
}
int main() {
    int n,k;
    int a[100];
    int t;
    cin>>t;
    while(t--) {
        cin>>n>>k;
        khoiTao(a,n,k);
        while(change) {
            nextBin(a,n,k);
            countBin(a,n,k);
        }
        change = true;
    }
    return 0;
}