#include <bits/stdc++.h>

using namespace std;

int main(){
	double s=1,v=1,j=1;
	for(int i=0;i<19;i++){
		s+= (double) (v+2)/pow(2,i+1);
		v+=2;
	}
	printf("%.2lf\n", s);
	return 0;
}