#include<iostream>
using namespace std;
bool change = true;
void khoiTao(char a[],int n) {
    for(int i=0;i<n-1;i++)
        a[i] = 'A';
    a[n-1] = 'B';
}
void nextBin(char a[],int n) {
    int i = n-1;
    while(i>=0 && a[i] != 'A')
        --i;
    if(i>=0) {
        a[i] = 'B';
        for(int j=i+1;j<n;j++) {
            if(a[j] == 'B')
                a[j] = 'A';
            else a[j] = 'B';
        }
    }else {
        change = false;
    }
}
void countChar(char a[],int n,int k) {
    int count = 0;
    for(int i=0;i<n;i++) {
        if(a[i] == 'A') {
            count++;
        }
        if(a[i] == 'B') {
            count = 0;
        }
        if((count == k && a[i+1] == 'B') || (count == k && a[i+1] == '\0')) {
            for(int j=0;j<n;j++) {
                cout<<a[j];
            }
            cout<<endl;
            break;
        }
    }
}
int main() {
    char a[100];
    int n;
    int k;
    cin>>n>>k;
    khoiTao(a,n);
    while(change) {
        countChar(a,n,k);
        nextBin(a,n);
    }
    return 0;
}