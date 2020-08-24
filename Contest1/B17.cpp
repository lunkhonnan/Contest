#include<bits/stdc++.h>
using namespace std;
bool change = true;
vector <int> A;
void khoiTao() {
    A.push_back(9);
    A.push_back(0);
}
void nextNum(int &count) {
    int i = A.size() - 1;
    while(i>=0 && A[i] != 0)
        --i;
    if(i>=0) {
        A[i] = 9;
        for(int j=i+1;j<A.size();j++) {
            if(A[j] == 9)
                A[j] = 0;
            else A[j] = 9;
        }
    }else {
        change = false;
    }
    if(change == false) {
        A.clear();
        khoiTao();
        for(int k =1;k<=count;k++) 
            A.push_back(0);
        change = true;
        count ++;
    }
}
long long taoSo() {
    long long t = 0;
    for(int i=0;i<A.size();i++) {
        t += A[i]*pow(10,A.size() - i - 1);
    }
    return t;
}
int main() {
    int t;
    int n;
    cin>>t;
    int count = 1;
    while(t--) {
        cin>>n;
        A.clear();
        khoiTao();
        while(change) {
            long long total = taoSo();
            if(total % n == 0){
                cout<<total;
                break;
            }
            nextNum(count);
        }
        count = 1;
        if(t>0)
            cout<<endl;
    }
    return 0;
}