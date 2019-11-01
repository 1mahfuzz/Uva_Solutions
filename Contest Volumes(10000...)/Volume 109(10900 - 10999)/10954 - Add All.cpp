/**
 *  author: mahfuzz
 *  created: 30.10.2019
**/
 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n;
    while(cin >> n && n > 0){
        priority_queue<int, vector<int>, greater<int>> pq;
        int cost = 0;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            pq.push(x);
        }
        while(pq.size() > 1){
            int t1, t2;
            t1 = pq.top(); pq.pop();
            t2 = pq.top(); pq.pop();
            
            pq.push(t1+t2);
            cost += t1+t2;
        }
        
        cout << cost << "\n";
    }
       
    return 0;
}
