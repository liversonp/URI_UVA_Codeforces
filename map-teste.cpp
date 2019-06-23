#include <bits/stdc++.h>

using namespace std;

map<char, int> histogram(const string& s){
	map<char, int> h;
	for(auto c : s){
		++h[c];
	}

	return h;
}

int main(){
	int tam, n1=1,n2=1,prova=0;
	char prim,sec;
	string n,s;

	getline(cin,n);
	getline(cin,s);

	

	tam = s.size();

	sort(s.begin(),s.end());
	
	auto a = histogram(s);

	auto um = a['1'];
	auto dois = a['2'];

	cout<<um<<" "<<dois<<endl;

	return 0;
} 
