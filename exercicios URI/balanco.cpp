#include <bits/stdc++.h>

using namespace std;

int main(){

    stack <char> expressao;
    int i=0,erro=0;
    char par[1010];
    while(scanf("%s", par)!=EOF){
        i=0;
        erro=0;
        while(par[i] != '\0'){
            if(par[i]=='('){
                expressao.push(par[i]);

            }
            else if(par[i]==')'){
                if(!expressao.empty()){
                    expressao.pop();
                }
             
                else{
                    erro=1;
                }
            }
            i++;
        }

        if(!expressao.empty() || erro==1){
           cout<<"incorrect"<<endl;
        }

        else{
         cout<<"correct"<<endl;
        }
        
        while(!expressao.empty()){
            expressao.pop();
        }
        
    }
    return 0;
}

