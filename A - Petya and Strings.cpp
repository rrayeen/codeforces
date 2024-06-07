#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int p,x,t=0;
    string ch,c;
    cin >>  ch;
    cin >> c;
    for (int i=0; i<ch.length();i++){
        p= static_cast<int>(ch[i]) ;
        x= static_cast<int>(c[i]) ;
        if (p>90){
            p=p-32;
        }
        if (x>90)
            {
                x=x-32;
            }
            
        
 
            if (p<x)
            {
                t=-1;
                
                break;
            }
            else
            {   
                if (p>x)
                {
                    t=1;
                    break;
                }
                
            }
            
            
        
        
    }
    cout << t;
 
 
 
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