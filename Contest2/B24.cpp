#include<iostream>
using namespace std;
int sum = 0;
int a[100],x[100];
int n,k;
bool have = false;
void nhapMang() {
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
        x[i] = 0;
}
void swap(int &a,int &b) {
    int temp = a;
    a = b;
    b = temp;
}
void sort() {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-1;j++) {
            if(a[j] > a[j+1])
                swap(a[j],a[j+1]);
        }
    }
}
void result() {
    cout<<'[';
    if(x[0] == 1)
        cout<<a[0];
    for(int i=1;i<n;i++) {
        if(x[i] == 1) {
            cout<<" "<<a[i];
        }
    }
    cout<<']';
}
void Try(int i) {
    for(int j=1;j>=0;j--) {
        x[i] = j;
        sum += j*a[i];
        if(i == n-1) {
            if(sum == k) {
                have = true;
                result();
            }
        }else {
            Try(i+1);
        }
        sum -= j*a[i];
    }
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        cin>>n>>k;
        nhapMang();
        sort();
        Try(0);
        if(have == false)   
            cout<<-1;
        if(t>0)
            cout<<endl;
        sum = 0;
    }
    return 0;
}