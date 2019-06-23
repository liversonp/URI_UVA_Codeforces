#include <bits/stdc++.h>

using namespace std;

int main(){
	vector <string> names;
	int n,cont=0,contr=0;
	string nome;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>nome;
		names.push_back(nome);
	}

	for(int i =0;i<n;i++){
		for(int j =0; j<i;j++){
			if(names[i] == names[j]){
				contr++;
			}
		}
		
		if(contr != 0){
			cout<<"YES"<<endl;	
		}

		else{
			cout<<"NO"<<endl;
		}

		contr = 0;
		
	}

	return 0;
}	