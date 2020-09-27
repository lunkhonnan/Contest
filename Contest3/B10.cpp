#include<bits/stdc++.h>
using namespace std;

#define MAX 100000

int main() {
    int a[MAX];
    int n;
    int t;
    cin>>t;
    while(t-->0) {
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        long long sum = 0;
        while(n != 1) {
            int i = n-1;
            sort(a,a+n,greater<int>());
            a[i-1] = a[i] + a[i-1];
            sum += a[i-1];
            n--;
        }
        cout<<sum<<endl;
    }
    return 0;
}