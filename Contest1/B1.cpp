// can truyen vao tham
#include<iostream>
using namespace std;
bool change = true;
void nextBinary(string &s) {
    int i=s.length() - 1;
    while( i>=0 && s[i] != '0')
        i--;
    if(i>=0) {
        s[i] = '1';
        for(int j=i+1;j<s.length();j++) {
            if(s[j] == '1')
                s[j] = '0';
            else s[j] ='1';
        }
    }else 
        change = false;
}
int main() {
    int t;
    cin>>t;
    string s;
    while(t--) {
        cin>>s;
        nextBinary(s);
        if(change) {
            cout<<s<<endl;
        }
        else {
            for(int i=0;i<s.length();i++) {
                s[i] = '0';
            }
            cout<<s<<endl;
        }
    }
    return 0;
}