#include <bits/stdc++.h>

using namespace std;

int main(){
	vector <pair<char,int> > alfab;
	char letra;
	
	for(int i =0;i<26;i++){
		alfab.push_back(make_pair(i+'a',i+1));
	}

	for(int i =0;i<26;i++){
		cout<<alfab[i].first<<" "<<alfab[i].second<<endl;
	}
	return 0;
}	