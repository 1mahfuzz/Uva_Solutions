/**
 *  author: mahfuzz
 *  created: 14.05.2020
**/
 
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n, cnt = 0;
    while(cin >> n){
        if(cnt)
            cout << "\n";
            
        vector<string> vec;
        map<string, int> mp;
        
        string s;
        for(int i = 0; i < n; i++){
            cin >> s;
            vec.push_back(s);
        }
        
        for(int i = 0; i < n; i++){
            string name; cin >> name;
            int spent, k; cin >> spent >> k;
            
            mp[name] -= spent;
            int amount = (k != 0 ? spent / k : 0);
            
            mp[name] += (spent - amount * k);
            
            for(int _ = 0; _ < k; _++){
                    string people; cin >> people;
                mp[people] += amount;
                
            }
        }
        
        for(string a : vec)
            cout << a << " " << mp[a] << "\n";
        cnt++;
    }
    
        
    return 0;
}

