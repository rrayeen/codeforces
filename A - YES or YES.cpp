#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
 
    string ch,c="";
    cin >>  ch;
    for (int i=0; i<ch.length();i++){
        c.push_back(toupper(ch[i]));
        
        
    }
    if (c!="YES"){
            cout << "NO"<< endl;
        }
        else {
            cout << "YES"<< endl;
        }
 
 
}
 
int main(){
    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    #endif
    int t = 1 ; 
    cin >> t ; 
    while ( t-- ) solve();
    return 0;
 
    
 
}