#include <bits/stdc++.h>

using namespace std;

int main(){
	int coluna;
	double matriz[12][12], sum=0;
	char operacao;
	cin>>coluna>>operacao;

	for(int i=0;i<12;i++){
		for(int j=0;j<12;j++){
			cin>>matriz[i][j];
		}
	}

	if(operacao == 'S'){
		for(int i=0;i<12;i++){
			sum += matriz[i][coluna];
		}
		printf("%.1lf\n", sum);
	}
	else{
		for(int i=0;i<12;i++){
			sum += matriz[i][coluna];
		}
		printf("%.1lf\n", sum/12);
	}

	return 0;
}