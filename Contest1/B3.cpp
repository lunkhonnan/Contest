#include<iostream>
using namespace std;
bool change = true;
void nhapMang(int a[],int n) {
    for(int i=0;i<n;i++)
        cin>>a[i];
}
void xuatMang(int a[],int n) {
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
void swap(int &a,int &b) {
    int temp = a;
        a = b;
        b = temp;
}
void hoanVi(int a[],int n) {
    int i = n - 2;
    while(i>=0 && a[i] >= a[i+1])
        i--;
    int j = n-1;
    while(j>0 && a[j] < a[i])
        j--;
    if(i>=0){
        swap(a[i],a[j]);
        int l = i+1;
        int r = n-1;
        while(l<r) {
            swap(a[l],a[r]);
            r--;l++;
        }
    }else {
        change = false;
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
        hoanVi(a,n);
        if(change)
            xuatMang(a,n);
        else {
            for(int i=0;i<n;i++) {
                a[i] = i+1;
                cout<<a[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}