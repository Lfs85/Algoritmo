#include <stdio.h>
#include <stdlib.h>

//VARIÁVEIS GLOBAIS

int totalPedidos; totalProdVendidos; /**Eder** variaveis globais que armazenam o total de pedidos FINALIZADOS e PRODUTOS VENDIDOS
                                        Obs: o valor do total será alterado toda a vez que uma compra é finalizada pelo
                                        cliente. Estas variaveis são globais para que todas as funções que a utilizam
                                        consigam modificar e consultar o seu valor*/


// FUNÇÕES/PROTÓTIPOS

void menuPrincipal(){

}

void relatorioGeral(){
  int opcaoEscolhida;
  
  printf("Total de PEDIDOS FINALIZADOS: %d \n",totalPedidos);
  printf("Total de PRODUTOS VENDIDOS: %d \n ",totalProdVendidos);
  
  printf("Digite 1 para voltar ao MENU PRINCIPAL ou 0 para SAIR");
  scanf("%d",&opcaoEscolhida);
  
  if(opcaoEscolhida == 1){
      menuPrincipal();  
  }else{
    return 0;  
  }
  
}


int main(){
  
  
return 0;                             // quando retornar 0(zero) o programa fecha.
}
