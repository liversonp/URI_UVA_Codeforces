#include <bits/stdc++.h>

using namespace std;

int main(){
	int tam;
	while(scanf("%d",&tam) != EOF){
		int matriz[80][80];

		for(int i=0;i<tam;i++){
			for(int j=0;j<tam;j++){
				if(i == j && j+i!= tam-1)
					matriz[i][j] = 1;
			
				else if(i+j == tam-1)
					matriz[i][j] = 2;

				else
					matriz[i][j] = 3;
			}
		}

		for(int i=0;i<tam;i++){
			for(int j=0;j<tam;j++){
				if(j==tam-1)
					cout<<matriz[i][j]<<endl;

				else
					cout<<matriz[i][j];
			}
		}
	}
	return 0;
}