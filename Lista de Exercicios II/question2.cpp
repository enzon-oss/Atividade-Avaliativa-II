#include<stdio.h>

int main(){
    
    int n, i, soma = 0;

        printf("Insira um numero e descubra quanto vale a soma dos quadrados do natural insira um valor pra N");
        scanf("%d",&n);
    
            for( i = 1 ; i <= n ; i++ ){
                
                    soma += i * i; 

            }
        printf("a soma dos quadrados dos numeros naturais e %d", soma);

    return 0;
}