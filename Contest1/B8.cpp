#include<iostream>
using namespace std;
bool change = true;
void dayDau(int a[],int n) {
    for(int i=n;i>=1;i--) 
        a[n-i+1] = i;
}
void xuatMang(int a[],int n) {
    for(int i=1;i<=n;i++)
        cout<<a[i];
        cout<<" ";
}
void swap(int &a,int &b) {
    int temp = a;
        a = b;
        b = temp;
}
void hoanVi(int a[],int n) {
    int i = n-1;
    while(i>0 && a[i] <= a[i+1])
        --i;
    if(i>0) {
        int j = n;
        while(j>0 && a[j] >= a[i])
            j--;
        swap(a[i],a[j]);
        int l=i+1;
        int r=n;
        while(l<r) {
            swap(a[l],a[r]);
            r--;l++;
        }
    }else {
        change = false;
    }
}
int main() {
    int n;
    int a[100];
    int t;
    cin>>t;
    while(t--) {
        cin>>n;
        dayDau(a,n);
        while(change) {
            xuatMang(a,n);
            hoanVi(a,n);
        } 
        change = true;
        cout<<endl;
    }
    return 0;
}