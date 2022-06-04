#include <bits/stdc++.h>

using namespace std;


int main(){
	
	int n, size; cin >> n; char str[n][100];
	
	for(int i=0; i<n; i++){
		for(int j=0; j<100; j++){
			cin >> str[i][j];
		}
	}
	for(int i=0; i<n; i++){
		size = strlen(str[i]);
		if(size > 4){
			cout << str[i][0] << size - 2 
			<< str[i][size] << endl;
		}
		else
			cout << str[i];
	}
}
