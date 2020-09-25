#include<iostream>
using namespace std;
bool chuaxet[10];
char a[100];
void init(string s) {
    for(int i=0;i<s.length();i++)
        chuaxet[i] = false;
}
void Try(int i,string s) {
    for(int j=0;j<s.length();j++) {
        if(!chuaxet[j]) {
            a[i] = s[j];
            chuaxet[j] = true;
            if(i == s.length()-1) {
                for(int t=0;t<s.length();t++) {
                    cout<<a[t];
                }
                cout<<" ";
            }else {
                Try(i+1,s);
            }
            chuaxet[j] = false;
        }
    }
}
int main() {
    string s;
    cin>>s;
    Try(0,s);
    return 0;
}