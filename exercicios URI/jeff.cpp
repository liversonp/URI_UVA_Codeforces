#include <stdio.h>
#include <stdlib.h>

int main()
{
    double matriz[12][12], soma , media;
    char p[2];
    int n,j,i;
    soma = 0;

    scanf("%d", &n);
    scanf("%s", p);

    for (j=0; j<12;j++){
        for(i=0;i<12;i++){
            scanf("%lf", &matriz[j][i]);
        }
    }

    if(p[0]=='S'){

        for(i=0;i<11; i++){
            soma= soma +matriz[i][n];
        }
        printf("%lf\n" , soma);
    }
    else if (p[0]=='M' ){
         for(i=0;i<11; i++){
            soma= soma +matriz[i][n];
    }
    media= soma/12;
     printf("%lf\n" , media);
    }
    return 0;
}