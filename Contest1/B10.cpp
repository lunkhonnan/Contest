#include<iostream>
using namespace std;
void gray(string &s) {
    for(int i=s.length() - 1;i >= 1; i--) {
        if((s[i] == '1' && s[i-1] == '1') || (s[i] == '0' && s[i-1] == '0')) {
            s[i] = '0';
        }else {
            s[i] = '1';
        }
    }
}
int main() {
    int t;
    string s;
    cin>>t;
    while(t--) {
        cin>>s;
        gray(s);
        cout<<s;
        cout<<endl;
    }
}
