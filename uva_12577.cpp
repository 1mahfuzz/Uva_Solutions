//
//  uva_12577.cpp
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
	freopen("output.txt","w",stdout)
	#endif
    lli n=1;
    string s;
    while(cin >> s){
        if(s == "*") return 0;
        if(s == "Hajj") cout << "Case " << n << ": " << "Hajj-e-Akbar\n";
        if(s == "Umrah") cout << "Case " << n << ": " << "Hajj-e-Asghar\n";
        n++;
    }


	return 0;
}
