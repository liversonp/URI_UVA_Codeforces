#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, matriz[100][100],metade;
	do{
		cin>>n;
		if(n == 0){
			break;
		}
		metade = (n+1)/2;
		cout << metade<<endl;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i==0 || i==n-1 || j==0 || j==n-1){
					matriz[i][j] = 1;
				}
				else{
					if(i < metade-1 || j<=metade-1){
						matriz[i][j] = matriz[i-1][j-1]+1;
					}
					else if(i > metade-1 && j<=metade-1){
						matriz[i][j] = matriz[i][j-1];
					}
					else if(i <=metade-1 && j>metade-1){
						matriz[i][j] = matriz[i][j-1];
					}
					else if(i>= metade-1 && j>=metade-1){
						matriz[i][j] = matriz[i-(metade-1)][j-(metade-1)];
					}
					else if(i == metade && j!= metade){
						matriz[i][j] = matriz[i][j-(metade-1)];
					}
					else if(i != metade && j== metade){
						matriz[i][j] = matriz[i-(metade-1)][j];
					}
					else{
						matriz[i][j] = matriz[i-1][j-1]+1;
					}
				}

			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(j == n-1){
					cout<<matriz[i][j]<<endl;
				}
				else
					cout<<matriz[i][j]<<" ";
			}
		}


	} while(n!= 0);

	return 0;
}