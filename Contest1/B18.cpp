#include<iostream>
using namespace std;
void nhapMang(long long a[],int n) {
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
}
void swap(long long &a,long long &b) {
    long long temp = a;
    a = b;
    b = temp;
}
void sort(long long a[],int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-1;j++) {
            if(a[j] > a[j+1])
                swap(a[j],a[j+1]);
        }
    }
}
int ATM(long long a[],int n,long long s) {
    int i = n-1;
    int count = 0;
    while(s != 0) {
        s -= a[i];
        if(s>=0) {
            count++;
        }else {
            s += a[i];
        }
        i--;
        if((i == -1 && s>0 ) || (i == 0 && s<0))
            return -1;
    }
    return count;
}
int main() {
    int t;
    cin>>t;
    long long a[100];
    int n;
    long long s;
    while(t--) {
        cin>>n>>s;
        nhapMang(a,n);
        sort(a,n);
        cout<<ATM(a,n,s);
        if(t>0)
            cout<<endl;
    }
    return 0;
}
