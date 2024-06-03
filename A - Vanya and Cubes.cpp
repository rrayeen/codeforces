#include <bits/stdc++.h>
using namespace std;
int plas(int n){
    int s=0;
    for (int i=1;i<=n;i++){
        s=s+i;
    }
    return s;
}


void solve() {
    int n,i=1,s;
    cin >> n;
    while(plas(i)<=n){
        n=n-plas(i);
        i++;
    }
    
    cout << i-1;
    



    


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