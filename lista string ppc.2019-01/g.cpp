#include <bits/stdc++.h>

using namespace std;

int main(){
	vector <pair<char,int> > alfab;
	int tamanho,tampalavra;
	bool prova=false;
	string palavra;

	cin>>tamanho>>palavra;
	tampalavra = palavra.size();

	for(int i =0;i<26;i++){
		alfab.push_back(make_pair(i+'A',0));
	}

	for(int i =0;i<tampalavra;i++){
		for(int j=0;j<26;j++){
			if(toupper(palavra[i]) == alfab[j].first){
				alfab[j].second = 1;
			}
		}
	}

	for(int i =0;i<26;i++){
		if(alfab[i].second == 1){
			prova = true;
		}
		else{
			prova = false;
			break;
		}
	}

	if(prova == true){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}