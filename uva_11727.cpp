#include "bits/stdc++.h"
using namespace std;

#define INP_FILE "/Users/mahfuz/inputs.txt"
int main(){
   //freopen(INP_FILE,"r",stdin);
    
    int t, cnt = 1;
    cin >> t;
    
    while (cnt <= t ){
        int a, b, c, salry[3];
        cin >> a >> b >> c;
        salry[0] = a;
        salry[1] = b;
        salry[2] = c;

        sort(salry, salry + 3);        

        cout << "Case "<< cnt << ": " << salry[1] << endl;
        cnt++;
    }
     
    return 0;
}
