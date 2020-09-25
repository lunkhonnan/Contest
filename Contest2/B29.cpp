#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int dem = 0;
void nhapMang(int m,int n) {
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>a[i][j];
        }
    }
}
int check(int i,int j,int m,int n) {
    if(i>=0 && i<=m-1 && j>=0 && j<=n-1) {
        return 1;
    }
    return 0;
}
void Try(int i,int j,int m,int n) {
    if(check(i,j,m,n) == 1) {
        // check Down 
        if(a[i+1][j] != 0) {
            Try(i+1,j,m,n);
        }
        // check Right
        if(a[i][j+1] != 0) {
            Try(i,j+1,m,n);
        }

        if(i == m-1 && j == n-1) {
            dem ++;
        }
    }
    return ;
}
int main() {
    int m,n;
    int t;
    cin>>t;
    while(t--) {
        cin>>m>>n;
        nhapMang(m,n);
        Try(0,0,m,n);
        cout<<dem;
        cout<<endl;
        dem = 0;
    }
    return 0;
}