#include <bits/stdc++.h>
using namespace std;
void solve(){
    int s=0;
    int t[5][5];
    int i1,j1;
    for (int  i=0;i<5;i++){
        for (int j=0;j<5;j++){
            cin >> t[i][j];
        }
    }
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            if (t[i][j]==1){
                i1=i;
                j1=j;
                break;
                break;
            }
 
        
        }
    }
    while(i1!=2 || j1!=2){
        if (i1>2){
            i1--;
            s++;
        }
        else{
            if(i1<2){
                i1++;
                s++;
            }
        }
        if (j1>2){
            j1--;
            s++;
        }
        else{
            if(j1<2){
                j1++;
                s++;
            }
        }
 
    }
    
 
    cout << s ;
    
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