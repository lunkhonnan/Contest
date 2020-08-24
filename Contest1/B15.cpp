#include<iostream>
using namespace std;
bool change = true;
void swap(char &a,char &b) {
    char temp = a;
    a = b;
    b = temp;
}
void hoanVi(string &s) {
    int i = s.length()-2;
    while(i>=0 && s[i] >= s[i+1]) {
        --i;
    }
    if(i>=0) {
        int k = s.length() - 1;
        while(k>=0 && s[k] <= s[i])
            k--;
        swap(s[k],s[i]);
        int l = i+1;
        int r = s.length() - 1;
        while(l<r) {
            swap(s[r],s[l]);
            l++;
            r--;
        }
    }else {
        change = false;
    }
}
int main() {
    int t;
    string s;
    cin>>t;
    int a = 1;
    while(t--) {
        cout<<a<<" ";
        cin>>s;
        cout<<a<<" ";
        hoanVi(s);
        if(change)
            cout<<s;
        else cout<<"BIGGEST";
        if(t>0)
            cout<<endl;
        a++;
    }
    return 0;
}