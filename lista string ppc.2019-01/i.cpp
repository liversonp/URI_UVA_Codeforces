#include <bits/stdc++.h>

using namespace std;

int main(){
	int temp=0,tampalavra;
	string palavra;
	bool prova = false;

	getline(cin,palavra);
	tampalavra = palavra.size();

	if(palavra[0] >= 'a'){
		prova = true;
	}

	if(tampalavra == 1){
		prova = true;
	}

	for(int i=1; i<tampalavra;i++){

		
		if(palavra[i] < 'a'){
			prova = true;
		}

		else{
			prova = false;
			temp++;
		}

	}

	if(prova == true && temp == 0){
		for(int i =0;i<tampalavra;i++){
			if(palavra[i] < 'a'){
				printf("%c", tolower(palavra[i]));
			}
			else{
				printf("%c", toupper(palavra[i]));	
			}
		}
		cout<<"\n";
	}
	else{
		cout<<palavra<<endl;
	}
	return 0;
}