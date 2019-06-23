#include <bits/stdc++.h>

using namespace std;

int main(){
	int tam, n1=1,n2=1,prova=0,prim=1,sec=1,pares=0,qtd1=1,qtd2=1;
	string n,s;

	getline(cin,n);
	getline(cin,s);

	

	tam = s.size();

	for(int i =2; i<tam;i+=2){

		if(s[i]  == s[i-2]){
			if(s[i] == '2'){
				n2++;
				qtd2 = n2;
			}
			else{
				n1++;
				qtd1=n1;
			}
		}
		else{
			if(qtd1+qtd2 > pares){
				prim = qtd1;
				sec = qtd2;
			}
			
			prova++;
			n1=1;
			n2=1;
		}
	}

	if(qtd1+qtd2 > pares){
		prim = qtd1;
		sec = qtd2;
		pares = qtd1+qtd2;
	}

	if(prim == sec && prova == tam-1){
		cout<<"2\n";
	}

	else{
		if(sec > prim){
			cout<<prim*2<<endl;
		}
		else{
			cout<<sec*2<<endl;
		}
	}

	return 0;
} 
