#include <bits/stdc++.h>

using namespace std;

int main(){
	char a;
	vector <pair<int,int> > pares;
	int n,x,y,supercent[1010][4],lin=0,lados,supers=0,cont,l1,l2,l3,l4;
	cin>>n;

	for(int i=0; i<n;i++){
		cin>>x>>y;
		pares.push_back(make_pair(x,y));
	}

	for(int i=0;i<n;i++){
		lados =0;
		l1=0;
		l4=0;
		l3=0;
		l2=0;
		for(int j=0;j<n;j++){
				if(i!=j){

					if(pares[j].first < pares[i].first && pares[j].second == pares[i].second){
						lados++;
						l1++;
					}

					else if(pares[j].first > pares[i].first && pares[j].second == pares[i].second){
						lados++;
						l2++;
					}

					else if(pares[j].first == pares[i].first && pares[j].second < pares[i].second){
						lados++;
						l3++;
					}

					else if(pares[j].first == pares[i].first && pares[j].second > pares[i].second){
						lados++;
						l4++;
					}

				}
			}

			if(lados>=4 && l1 >=1 && l2 >=1 && l3 >=1 && l4 >=1){
				supercent[i][0] = 1;
				supercent[i][1] = 1;
				supercent[i][2] = 1;
				supercent[i][3] = 1;
			}

			else{
				supercent[i][0] = 0;
				supercent[i][1] = 0;
				supercent[i][2] = 0;
				supercent[i][3] = 0;
			}

		}

		for(int i =0;i<n;i++){
			for(int j=0;j<=3;j++){

				if(supercent[i][j] == 1){
					cont++;
				}

				if(cont == 4){
					supers++;
				}
			
		}
		cont = 0;
	}

	cout<<supers<<endl;
	return 0;
}