#include<bits/stdc++.h>
using namespace std;
vector<int> s1;
vector<int> s2;
void nhapMang(int a[],int n) {
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
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
int makeTotal(int a[],int n) {
    for(int i=0;i<=n-1;i += 2) {
        s1.push_back(a[i]);
        if((i+1) <= n-1) 
            s2.push_back(a[i+1]);
    }
    int sum1 =0;
    int sum2 =0;
    for(int i=0;i<s1.size();i++)
        sum1 += s1[i]*pow(10,s1.size()-1-i);
    for(int i=0;i<s2.size();i++) 
        sum2 += s2[i]*pow(10,s2.size()-1-i); 
    return sum1 + sum2;
} 
int main() {
    int t;
    cin>>t;
    int a[10];
    int n;
    while(t--) {
        cin>>n;
        nhapMang(a,n);
        sort(a,n);
        cout<<makeTotal(a,n)<<endl;
        s1.clear();
        s2.clear();
    }
    return 0;
}

