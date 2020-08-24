#include<iostream>
using namespace std;
void grayToBin(string &s) {
    for(int i=1;i<s.length();i++) {
        // s[i] = s[i-1] + s[i]
        if((s[i-1] == '1' && s[i] == '1') || (s[i-1] == '0' && s[i] == '0')) {
            s[i] = '0';
        }else {
            s[i] = '1';
        }
    }
}
int main() {
    string s;
    int t;
    cin>>t;
    while(t--) {
        cin>>s;
        grayToBin(s);
        cout<<s;
        cout<<endl;
    }
    return 0;
}