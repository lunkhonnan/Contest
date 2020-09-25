#include<bits/stdc++.h>
using namespace std;
#define M 1000000007;
void swap(int &a,int &b) {
    int temp = a;
        a = b;
        b = temp;
}
void sort(int a[],int n) {
    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-1;j++) {
            if(a[j] > a[j+1])
                swap(a[j],a[j+1]);
        }
    }
}
void nhapMang(int a[],int n) {
    for(int i=0;i<n;i++)
        cin>>a[i];
}
int total(int a[],int n) {
    int sum = 0;
    for(int i=0;i<n;i++)
        sum += i*a[i];
    return sum % M;
}

int main() {
    int t;
    cin>>t;
    int n;
    int a[100];
    while(t--) {
        cin>>n;
        nhapMang(a,n);
        sort(a,n);
        cout<<total(a,n);
        cout<<endl;
    }
}