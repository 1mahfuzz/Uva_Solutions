#include "bits/stdc++.h"
using namespace std;

#define INP_FILE "/Users/mahfuz/inputs.txt"
int main(){
   //freopen(INP_FILE,"r",stdin);
        
    int K, N, M, X, Y;
    string res;

    while(true){
        int cnt = 1;
        cin >> K >> N >> M;
        if ( K == 0 ){
            break;
        }
        while( cnt <= K){
            int X, Y;
            cin >> X >> Y;
            
            if ( N > X && M < Y){
                res = "NO";   
            }else if ( N < X && M < Y ){
                res = "NE";
            }else if ( N > X && M > Y ){
                res = "SO";
            }else if ( N < X && M > Y ){
                res = "SE";
            }else{
                res = "divisa";
            }
            cout << res << endl;
            cnt++; 
         }
    }
    return 0;
}
