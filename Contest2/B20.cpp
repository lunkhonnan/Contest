#include<iostream>
using namespace std;
void nhapMang(int a[],int n) {
    for(int i=0;i<n;i++)
        cin>>a[i];
}
void daySo(int a[],int &n) {
    while(n!=0) {
        n--;
        for(int i=0;i<n;i++) {
            a[i] = a[i] + a[i+1];
        }
    }
}
void daySo2(int a[],int n) {
    int x = n;
    daySo(a,n);
    cout<<"[";
    cout<<a[0];
    cout<<"]";
    cout<<endl;
    n += 1;
    while(n != x) {
        for(int i=n-1;i>=0;i--) {
            a[i] = a[i] - a[i+1];
        }
        n++;
        cout<<"[";
        for(int i=0;i<n;i++) {
            cout<<a[i];
            if(i<n-1)
                cout<<" ";
        }
        cout<<"]";
        if(n<=x)
            cout<<endl;
    }
}
int main() {
    int t;
    int n;
    int a[100];
    cin>>t;
    while(t--) {
        cin>>n;
        nhapMang(a,n);
        daySo2(a,n);
    }
    return 0;
}