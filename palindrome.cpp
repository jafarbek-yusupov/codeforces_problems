// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string ns = to_string(n);
    string p = "";
    bool lead = true;
    for(int i=n; i>0; i/=10){
        if(i%10 == 0 && lead) {
            continue;
        }
        else{
            lead = false;
            p+= to_string(i%10);
        }
    }
    cout << p << endl;
    if(ns.length() != p.length()){
        cout << "NO" << endl;
        return 0;
    }
    for(int i=0; i<p.length(); i++){
        if( ns[i] != p[i]){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
