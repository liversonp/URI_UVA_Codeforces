#include <bits/stdc++.h>

using namespace std;

int main(){
	string frase;
	int conta=0,metade,tam;
	cin>>frase;
	tam = frase.size();
	metade = tam/2;
	for(int i=0; i < tam;i++){
		if(frase[i] == 'a'){
			conta++;
		}
	}
	if(conta <= metade){
		while(conta <= metade){
			tam--;
			metade = tam/2;
		}
		cout<<tam<<endl;
	}
	else{
		cout<<tam<<endl;
	}
	
	return 0;
}