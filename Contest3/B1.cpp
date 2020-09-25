#include<iostream>
using namespace std;
int dem = 0;
int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
void greedy(int n) {
    int  i = 9;
    int sum = n;
    while(i >=  0) {
        if(a[i] <= sum) {
            dem++;
            sum -= a[i];
        }
        if(sum == 0) {
            cout<<dem;
            break;
        }else i--;
    }
}
int main() {
    int t;
    int n;
    cin>>t;
    while(t--) {
        cin>>n;
        greedy(n);
        dem = 0;
        cout<<endl;
    }
    return 0;
}