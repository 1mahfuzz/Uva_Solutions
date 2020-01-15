/**
 *  author: mahfuzz
 *  created: 15.01.2020
**/
 
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
typedef long long ll;

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n;
    while(cin >> n && n != 0){
        int e; cin >> e;
        vector<int> vec[210];
        int color[210] = {-1};
        for(int i = 0; i < e; i++){
            int u, v; cin >> u >> v;
            
            vec[u].push_back(v);
            vec[v].push_back(u);
            
        }
        
        stack<int> stak;
        int visited[210] = {0};
        bool flag = true;
        
        color[0] = 0;
        visited[0] = 1;
        stak.push(0); 
        while(!stak.empty()){
            int x = stak.top(); stak.pop();
            if(!flag)
                break;
                
            for(auto a : vec[x]){
                if(visited[a] && color[x] == color[a]){
                    flag = false;
                    break;
                }else if(!visited[a]){
                    visited[a] = 1;
                    if(color[x] == 1)
                        color[a] = 0;
                    else
                        color[a] = 1;
                    stak.push(a);
                }
            }
        }
        if(flag)
            cout << "BICOLORABLE.\n";
        else
            cout << "NOT BICOLORABLE.\n";
    }
    
        
    return 0;
}
