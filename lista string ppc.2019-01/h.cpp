#include <bits/stdc++.h>

using namespace std;

int main(){
	vector <string> paf;
	vector <string> pas;
	int n,m,tam1,tam2;
	string quero,pa1,pa2;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>pa1>>pa2;

		paf.push_back(pa1);
		pas.push_back(pa2);

	}

	for(int i=0;i<n;i++){
		cin>>quero;
		for(int j=0;j<m;j++){
			if(quero.compare(paf[j]) == 0){
				tam1 = paf[j].size();
				tam2 = pas[j].size();
				if(i == n-1){
					if(tam1 > tam2){
						cout<<pas[j]<<endl;
					} 
					else{
						cout<<paf[j]<<endl;
						}
				} 
				else{
					if(tam1 > tam2){
						cout<<pas[j]<<" ";
					} 
					else{
						cout<<paf[j]<<" ";
					}	
				}
			}
		}	
	}
	return 0;
}

	