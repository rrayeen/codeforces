#include <bits/stdc++.h>
using namespace std ;
 
 
int main(){
int n;
string ch;
 
 
cin >> n;
for (int i=0;i<n;i++){
    cin >> ch;
    if (ch.length()>10){
        cout << ch[0] << ch.length()-2 << ch[ch.length()-1] <<endl ;
    }
    else {
        cout << ch << endl;
    }
}
 
 
}