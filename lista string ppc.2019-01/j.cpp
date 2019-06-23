#include <bits/stdc++.h>

using namespace std;

int main(){
	stack <char> simb;
	int t,n,mud=0,tam;
	string frase;
	cin>>t;

	for(int i =0;i<t;i++){
		cin>>n;
		cin>>frase;
		tam = frase.size();
		for(int j=0; j<tam;j++){
			if(frase[0] == '>'){
				simb.push(frase[j]);
			}
			else{
				mud++;
			}
		}
	}

	cout<<mud<<endl;
	return 0;
}