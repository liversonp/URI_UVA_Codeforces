#include <bits/stdc++.h>

using namespace std;

int main(){
	int idades,i=0,sum=0;
	double media;

	do{
		cin>>idades;
		if(idades >= 0){
			sum+=idades;
			i++;
		}
		else{
			break;
		}
	} while(idades >= 0);

	media = (double) sum/i;

	printf("%.2lf\n", media);

	return 0;
}