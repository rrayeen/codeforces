#include <bits/stdc++.h>
using namespace std;
void solve(){
int w,s;
cin >> w;
 
if (w>2){
if (w%2==0 ){
    cout << "YES";
}
else{
    cout << "NO";
}
    
}
 
else{
    cout << "NO";
}
}
 
int main(){
    #ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    #endif
    int t = 1 ; 
    //cin >> t ; 
    while ( t-- ) solve();
    return 0;
 
    
 
}