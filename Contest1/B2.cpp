#include<iostream>
using namespace std;
bool change = true;
void nhapMang(int a[],int k) {
    for(int i=1;i<=k;i++) {
        cin>>a[i];
    }
}
void xuat(int a[],int k) {
    for(int i=1;i<=k;i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void tapCon(int a[],int n,int k) {
    int i=k;
    while(i>0 && a[i] == n-k+i)
        i--;
    if(i>0) {
        a[i] ++ ;
        for(int j=i+1;j<=k;j++) {
            a[j] = a[i] +j -i;
        }
    }else {
        change = false;
    }
}
int main() {
    int n,k,t;
    int a[100];
    cin>>t;
    while(t--) {
        cin>>n>>k;
        nhapMang(a,k);
        tapCon(a,n,k);
        if(change) 
            xuat(a,k);
        else
        {
            for(int i=1;i<=k;i++) {
                a[i] = i;
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}