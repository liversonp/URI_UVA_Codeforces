#include <bits/stdc++.h>

using namespace std;

int main(){
	int dia11,dia22,hr1,hr2,min1,min2,sec1,sec2,sect,mint,hrt,dt;
	char dia1[4],dia2[4],b1,b2,b3,b4;
	scanf("%s", dia1);
	cin>>dia11>>hr1>>b1>>min1>>b2>>sec1;
	scanf("%s", dia2);
	cin>>dia22>>hr2>>b3>>min2>>b4>>sec2;

	sect = sec2 - sec1;

	mint = min2 - min1;

	hrt = hr2 - hr1;

	dt = dia22 - dia11;

	if(hrt < 0){
		dt--;
		hrt += 24;	
	}

	if(mint < 0){
		hrt--;
		mint +=60;
	}
	
	if(sect < 0){
		mint--;
		sect += 60;
	}


	cout<<dt<<" dia(s)"<<endl;
	cout<<hrt<<" hora(s)"<<endl;
	cout<<mint<<" minuto(s)"<<endl;
	cout<<sect<<" segundo(s)"<<endl;

	return 0;
}