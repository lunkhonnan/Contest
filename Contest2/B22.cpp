#include<iostream>
#include<vector>
using namespace std;
bool have = false;
vector<char> s;
void nhapMang(int a[][100],int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>a[i][j];
        }
    }
}
// kiểm tra xem điểm có thỏa mãn ma trận hay không 
int check(int a[][100],int n,int i,int j) {
    if(i>=0 && i<= n-1 && j>=0 && j<=n-1 && a[i][j] == 1)
        return 1;
        return 0; 
}
// hàm quay lui đi sâu nhất cỏ thể
void Try(int i,int j,int a[][100],int n) {
    if(check(a,n,i,j) == 1) {
        // check Down direction
        if(a[i+1][j] == 1) {
            s.push_back('D');
            Try(i+1,j,a,n);
            s.pop_back();
        }
        // check Right direction
        if(a[i][j+1] == 1) {
            s.push_back('R');
            Try(i,j+1,a,n);
            s.pop_back();
        }
        // Output
        if(i==n-1 && j==n-1) {
            have = true;
            for(int i=0;i<s.size();i++) {
                cout<<s[i];
            }
            cout<<" ";
        }
    }
    return ;
}
int main() {
    int t;
    int a[100][100];
    int n;
    cin>>t;
    while(t--) {
        cin>>n;
        nhapMang(a,n);
        Try(0,0,a,n);
        if(have == false)
            cout<<-1;
        s.clear();
        if(t>0) {
            cout<<endl;
        }
    }
    return 0;
}
