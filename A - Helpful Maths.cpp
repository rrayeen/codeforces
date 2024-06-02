#include <bits/stdc++.h>
using namespace std ;
 
 
int occ(string ch , char c){
    int s=0;
for (int i=0;i<ch.length();i++){
    if (ch[i]==c){
        s++;
    }
}
return s;
}
 
void solve(){
string ch,ch1 ;
int c1,c2,c3;
cin >> ch;
c1=occ(ch,'1');
c2=occ(ch,'2');
c3=occ(ch,'3');
while (c1!=0|| c2!=0 || c3!=0){
    if (c1!=0){
        ch1=ch1+"1+";
        c1--;
    }
    else{
    if (c2!=0){
        ch1=ch1+"2+";
        c2--;
    }
    else{
    if (c3!=0){
        ch1=ch1+"3+";
        c3--;
    }}}
}
ch1=ch1.substr(0,ch1.length()-1);
cout<< ch1;
}
 
 
 
int main(){
    #ifndef ONLINE_JUDGE
    freopen("Input.txt","r",stdin);
    freopen("Output.txt","w",stdout);
    #endif
 
    int t=1;
    //cin >> t;
    while(t--) solve();
 
return 0;
}