#include<bits/stdc++.h>
using namespace std;
void nhapMang(int a[],int n) {
    for(int i=0;i<n;i++)
        cin>>a[i];
}
int sortWork1(int a[],int b[],int n) {
    int count = 0;
    int i = 0;
    while(i<n) {
        int j = 0;
        while(j<n) {
            if(b[i] < a[j]) {
                count++;
                break;
            }
            j++;
        }
        i++;
    }
    return count ;
}
int main() {
    int n;
    int a[100];
    int b[100];
    int t;
    cin>>t;
    while(t--) {
        cin>>n;
        nhapMang(a,n);
        nhapMang(b,n);
        cout<<sortWork1(a,b,n);
        cout<<endl;
    }
    return 0;
}