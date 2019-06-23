#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int vezes,pa,pb,t;
	double ca,cb;
	cin>>vezes;
	while(vezes--){
		t=0;
		cin>>pa>>pb>>ca>>cb;
		while(pa<=pb){
			pa += (long long int) (pa*ca)/100;
			pb += (long long int) (pb*cb)/100;
			t++;
			if(t>100){
				cout<<"Mais de 1 seculo."<<endl;
				break;
			}
		}
		if(t <= 100){
			cout<<t<<" anos."<<endl;
		}
	}
	return 0;
}