#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n,s=0;
    string ch;
   cin >>n;
   for(int i =0 ;i<n;i++){
        cin >> ch;
        if (ch=="X++" || ch=="++X" ){
            s++;
        }
        else{
            s--;
        }
   }
   cout << s;
    
 
 
 
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