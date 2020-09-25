#include<bits/stdc++.h>
using namespace std;
bool chuaxet[50];
vector <int> s;
int sum = 0;
int prime(int n) {
    if(n<=1)
        return 0;
    for(int i=2;i<=sqrt(n);i++) {
        if(n%i == 0)
            return 0;
    }
    return 1;
}
void Try(int k,int n,int p,int a) {
    for(int i=p;i<=n;i++) {
        if(prime(i) == 1 && chuaxet[i] == true) {
            chuaxet[i] = false;
            sum += i;
            s.push_back(i);
            if(k == 1) {
                if(sum == a) {
                    for(int t=0;t<s.size();t++) {
                        cout<<s[t]<<" ";
                    }
                    cout<<endl;
                    s.clear();
                    chuaxet[i] = true;
                    sum -= i;
                }else {
                    sum -= i;
                    chuaxet[i] = true;
                    s.pop_back();
                }
            }else {
                Try(k-1,n-i,p,a);
                sum -= i;
                s.pop_back();
                chuaxet[i] = true;
            }
        }
    }
}
int main() {
    int t;
    cin>>t;
    int n,p,k;
    while(t--) {
        cin>>k>>p>>n;
        int a = n;
        for(int i=p;i<=n;i++) {
            chuaxet[i] = true;
        }
        Try(k,n,p,a);
        sum = 0;
        s.clear();
    }
    return 0;
}