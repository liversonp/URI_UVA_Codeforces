#include <bits/stdc++.h>

using namespace std;

int main(){
	int jogos,a=0,d=0;
	string games;
	cin>>jogos>>games;

	for(int i=0;i<jogos;i++){
		if(games[i] == 'A'){
			a++;
		}

		else if(games[i] == 'D'){
			d++;
		}
	}

	if(a > d){
		cout<<"Anton"<<endl;
	}

	else if(d > a){
		cout<<"Danik"<<endl;
	}

	else{
		cout<<"Friendship"<<endl;
	}
	return 0;
}	