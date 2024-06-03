#include <bits/stdc++.h>
using namespace std;
void solve(){
string ch;
int s=0, x;
cin >> ch;
x=ch.length();
 
 
for (int i=0;i<ch.length();i++){
    for (int j=0;j<i;j++){
        if (ch[i]==ch[j]){
            s++;
            break;
        }
    }
    
}
x=x-s;
 
if (x%2==0){
    cout << "CHAT WITH HER!";
}
else{
    cout << "IGNORE HIM!";
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