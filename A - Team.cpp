#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n ,x,s,s1=0;
    cin >> n;
    vector<vector<int>> v ;
    for (int i=0;i<n;i++){
        vector<int>row;
        for (int j=0;j<3;j++){
            cin >> x;
            row.push_back(x);
        }
        v.insert(v.begin()+i, row);
 
    }
    for (auto row : v){
        s=0;
        
        for (int  i: row){
            if (i==1){
            s++;
            }
        }
        if (s>=2) {
            s1++;
        }
        
    }
    cout << s1  << endl;
    
 
 
 
    
 
 
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