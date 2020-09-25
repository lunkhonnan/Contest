#include<iostream>
using namespace std;
int sum = 0;
int total = 0;
int a[100],n;
bool have = false;
void swap(int &a,int &b) {
    int temp = a;
    a = b;
    b = temp;
}
void sort() {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-1;j++) {
            if(a[j] > a[j+1])
                swap(a[j],a[j+1]);
        }
    }
}
void Try(int i) {
    for(int j=1;j>=0;j--) {
        total += j*a[i];
        sum -= j*a[i];
        if(i == n-1) {
            if(total == sum) {
                have = true;
            }
        }else {
            Try(i+1);
        }
        total -= j*a[i];
        sum += j*a[i];
    }
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        cin>>n;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            sum += a[i];
        }
        sort();
        Try(0);
        if(have == true)
            cout<<"YES";
        else 
            cout<<"NO";
        have = false;
        total = 0;
        sum = 0;
        if(t>0)
            cout<<endl;
    }
    return 0;
}