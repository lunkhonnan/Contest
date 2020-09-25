#include<bits/stdc++.h>
using namespace std;
int a[100];
int n;
void nhapMang(int n) {
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
}
void daoMang(int x,int y) {
    while(x != n/2 && y != n/2) {
        swap(a[x],a[y]);
        x++;
        y--;
    }
}
int check(int x,int y) {
    for(int i=x;i<y;i++) {
        if(a[i] < a[i+1])
            return 0;
    }
    return 1;
}
int checkFinal() {
    for(int i=0;i<n-1;i++) {
        if(a[i] > a[i+1])
            return 0;
    }
    return 1;
}
void problem() {
    int i=n/2-1;
    int j=n/2+1;
    while(i>0 && j<n-1) {
        daoMang(i,j);
        i--;
        j++;
        if(check(i,j) == 0 && i>0 && j<n-1 ) {
            daoMang(i+1,j-1);
        }
    }
    if(checkFinal() == 0) {
        cout<<"No";
    }else cout<<"Yes";
    
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        cin>>n;
        nhapMang(n);
        problem();
        cout<<endl;
    }
    return 0;
}