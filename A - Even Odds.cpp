#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll m;
    ll n,k;
    
    cin >> n;
    cin >> k;
    m=(n+1)/2;

    
    if(k<=m){
        cout << (k*2)-1;
    }
    else{
        cout << (k-m)*2;
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