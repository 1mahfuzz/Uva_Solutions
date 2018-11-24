//
//  uva_272.cpp
//  
//
//  Created by Mahfuz Ahmed on 11/23/18.
//

#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define br std::cout << std::endl;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	#if 0
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout)
	#endif
    
    string s;
    int c=0;
    while(getline(cin,s)){
        for(int i=0;s[i];i++){
            if(s[i] == '"'){
                c+=1;
                if(c%2 == 1){
                    cout << "``";
                }else{
                    cout << "''";
                }
            }else{
                cout << s[i];
            }
        }
        br;
    }


	return 0;
}
