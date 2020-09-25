#include<bits/stdc++.h>
using namespace std;
vector<int> s1;
vector<int> s2;
void nhapMang(int a[],int n) {
    for(int i=0;i<n;i++)
        cin>>a[i];
}
void swap(int &a,int &b) {
    int temp = a;
        a = b;
        b = temp;
} 
void sort(int a[],int n) {
    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-1;j++) {
            if(a[j] > a[j+1])
                swap(a[j],a[j+1]);
        }
    }
}
int anything(int a[],int n,int k) {
    for(int i=0;i<=n-1;i ++) {
        while(k != 0) {
            s1.push_back(a[i]);
            k--;
            i++;
        }
        s2.push_back(a[i]);
    }
    int sum1=0;
    int sum2=0;
    for(int i=0;i<s1.size();i++) 
        sum1 += s1[i];
    for(int i=0;i<s2.size();i++)
        sum2 += s2[i];
    return abs(sum1 - sum2);
}
int main() {
    int t;
    int n,k;
    int a[20];
    cin>>t;
    while(t--) {
        cin>>n>>k;
        nhapMang(a,n);
        sort(a,n);
        cout<<anything(a,n,k)<<endl;
        s1.clear();
        s2.clear();
    }
    return 0;
}