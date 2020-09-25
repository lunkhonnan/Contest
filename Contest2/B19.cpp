#include<iostream>
using namespace std;
void nhapMang(int a[],int n) {
    for(int i=0;i<n;i++)
        cin>>a[i];
}
void daySo(int a[],int n) {
    while(n!=0) {
        cout<<"[";
        for(int i=0;i<n;i++) {
            cout<<a[i];
            if(i<n-1)
                cout<<" ";
        }
        cout<<"]";
        cout<<endl;
        n--;
        for(int i=0;i<n;i++) {
            a[i] = a[i] + a[i+1];
        }
    }
}
int main() {
    int a[100];
    int n;
    int t;
    cin>>t;
    while(t--) {
        cin>>n;
        nhapMang(a,n);
        daySo(a,n);
    }
    return 0;
}