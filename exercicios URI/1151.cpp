#include <iostream>
 
using namespace std;
 
int main() {
    int N,prim,seg,prox, i;
    prim = 0;
    seg = 1;
    
    scanf("%d", &N);

    N = N-2;

    printf("%d %d ", prim, seg);

    for(i=0;i<N;i++){
        prox = prim+seg;
        prim = seg;
        seg = prox;    
        if(i == N-1){
            printf("%d\n", prox);
        }
        else{
            printf("%d ", prox);
        }
    }

    return 0;
}