#include <bits/stdc++.h>

using namespace std;

int main(){
	double matriz[12][12],sum=0,qtd=0;
	char o;
	cin>>o;
	for(int i=0;i<12;i++){
		for(int j=0;j<12;j++){
			cin>>matriz[i][j];
		}
	}

	if(o == 'S'){
		for(int i=0;i<12;i++){
			for(int j=0;j<12;j++){
				if(j+i >= 12 && i-j>=1 && i-j<11){
					sum += matriz[i][j];
				}
			}
		}
		printf("%.1lf\n", sum);
	}
	else{
		for(int i=0;i<12;i++){
			for(int j=0;j<12;j++){
				if(j+i>=12 && i-j>=1 && i-j<11){
					sum += matriz[i][j];
					qtd++;
				}
			}
		}
		printf("%.1lf\n", sum/qtd);
	}
	return 0;
}