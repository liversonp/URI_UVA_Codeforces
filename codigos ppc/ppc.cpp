#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	scanf("%d",&n);

	char str[10000] = "1";

	for(int i=1;i<n;i++){

		// fazer sequencia leia e fale
		/*
			1
			11
			21
			1211
			111221
			312211
			13112221
		*/
		int s = strlen(str);
		vector<char> n_str;

		char last_char = str[0];
		int qtd_last_char = 1;

		for(int i=1;i<=s;i++){
			if(last_char == str[i]){
				qtd_last_char++;
			} else {
				n_str.push_back(qtd_last_char+'0');
				n_str.push_back(last_char);
				qtd_last_char = 1;
			}
			last_char = str[i];
		}
		int nss = n_str.size();
		for(int i=0;i<nss;i++){
			str[i] = n_str[i];
		}
		str[nss] = '\0';
	}
	printf("%s\n", str);
	return 0;
}