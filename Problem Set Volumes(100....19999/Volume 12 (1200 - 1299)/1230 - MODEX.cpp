/**
 *  author: mahfuzz
 *  created: 05.10.2019
**/

#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define pii pair<int, int>
#define pll pair<long long, long long>
//~ const double pi = 2*acos(0.0);
//~ const long long mod = 1000000007;
//~ const int maxn = 1000005;
typedef long long ll;

int modExpo(int n, int x, int m){
    if(x == 0)
        return 1;
    int ret = modExpo(n, x/2, m);
    ret = (ret * ret) % m;
    
    if(x % 2 == 1) ret = (ret * n) % m;
    return ret;
}


int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
       
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    //~ freopen("output.txt","w",stdout);
    #endif
    
    int t; cin >> t;
    while(t--){
        int x, y, z;
        cin >> x >> y >> z;
        cout << modExpo(x, y, z) << "\n";
        
    }
    int x; cin >> x;
    
    
    return 0;
}
