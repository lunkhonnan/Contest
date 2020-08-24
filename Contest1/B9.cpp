/*
    Sai lúc đi thi : 
        mảng a bị thay đổi vẫn dùng nên bị rút đi số nghiệm
    Giải pháp : 
        cần phải thêm một mảng kết quả b
*/
#include<iostream>
using namespace std;
bool change =true;
void nhapMang(int a[],int n) {
    for(int i=0;i<n;i++) {
        a[i] = 0;
    }
}
void xuatMang(int a[],int n) {
    for(int i=0;i<n;i++)
        cout<<a[i];
        cout<<" ";
}
void nextBinary(int a[],int n) {
    int i = n-1;
    while(i>=0 && a[i] != 0)
        --i;
    if(i>=0) {
        a[i] = 1;
        for(int j=i+1;j<n;j++) {
            if(a[j] == 0)
                a[j] = 1;
            else a[j] = 0;
        }
    }else {
        change = false;
    }
}
void binToGray(int a[],int b[],int n) {
    a[-1] = 0;
    for(int i=n-1;i>=0;i--) {
        b[i] = a[i] + a[i-1];
        if(b[i] == 2)
            b[i] = 0;
    }
    for(int i=0;i<n;i++)
        cout<<b[i];
        cout<<" ";
}
int main() {
    int a[100];
    int b[100];
    int n;
    int t;
    cin>>t;
    while(t--) {
        cin>>n;
        nhapMang(a,n);
        while(change) {
            binToGray(a,b,n);
            nextBinary(a,n);
        }
        cout<<endl;
        change = true;
    }
    return 0;
}