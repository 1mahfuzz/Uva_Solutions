/**
 * 	author: MahfuzAhmed
 * 	created: 10.08.2019 
**/

#include <bits/stdc++.h>
using namespace std;

const int MXN = 600;

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    
    string s, t;
    
    while(cin >> s){
        cin >> t;
        
        reverse(s.begin(), s.end());
        reverse(t.begin(), t.end());
        
        int a[MXN];
        memset(a, 0, sizeof(a));
        
        for(int i=0; i<s.length(); i++){
            for(int j= 0; j<t.length();j++){
                a[i + j] += (s[i] - '0') * (t[j] - '0');
            }
        }
        
        for(int i=0; i<MXN-1;i++){
            a[i+1] += a[i]/10;
            a[i] %= 10;
        }
        
        int i = MXN-1;
        while(i > 0 && a[i] == 0) i--;
        
        for(;i >= 0; i--){
            cout << a[i];
        }
        
        cout << "\n";
        
    }
    
    
    return 0;
}
