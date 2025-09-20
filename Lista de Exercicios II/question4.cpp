#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int aleatorio, n;

        aleatorio = rand() % 50 + 1;// numero sorteado

        do{//veriifca se o numero que digitou foi o certo
            printf("Insira um valor( de 1  a  50): ");
            scanf("%d",&n);

            if( n > aleatorio ){
                printf("Tente um numero menor\n");
            }else if( n < aleatorio){
                printf("Tente um numero maior\n");
            }

        }while( n != aleatorio );

        printf("Parabens o numero %d era o correto, voce acertou!",aleatorio);
    
    return 0;
}