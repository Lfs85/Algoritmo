#include <stdio.h>
#include <stdlib.h>

//VARIÁVEIS GLOBAIS

int totalPedidos; totalProdVendidos; /**Eder** variaveis globais que armazenam o total de pedidos FINALIZADOS e PRODUTOS VENDIDOS
                                        Obs: o valor do total será alterado toda a vez que uma compra é finalizada pelo
                                        cliente. Estas variaveis são globais para que todas as funções que a utilizam
                                        consigam modificar e consultar o seu valor*/


// FUNÇÕES/PROTÓTIPOS

void menuPrincipal(){
  int opcaoEscolhida;
  
  printf("+-------------------------------------------------------------+\n");
  printf("+                         Xtoque                              +\n");
  printf("+-------------------------------------------------------------+\n");
  printf("+  1-Cadastrar estoque     + 2-Registro de Pedidos do Cliente +\n");
  printf("+--------------------------+----------------------------------+\n");
  printf("+  3-Relatório de Estoque  + 4-Relatório Geral de Vendas      +\n");
  printf("+--------------------------+----------------------------------+\n");
  printf("+                          0-Sair                             +\n");
  printf("+-------------------------------------------------------------+\n");
  Printf("Digite uma opção:");
  
  scanf("%d",&opcaoEscolhida);
  
  switch(opcaoEscolhida){
    case 1: //cadEstoque();
    case 2: //regPedClientes();
    case 3: //relatorioEstoque();
    case 4: relatorioGeral();
    default: return 0;
  }  
  
  int main ()
	{
		printf("\n Relatório do Estoque");
		int relatorioEstoque[50][2];
		int i, j;
		for (i=0; i<50; i++) {
			for (j = 0; j < 2; j++) {
				scanf("\n %d", &relatorioEstoque[i][j]);
			}
		}
		system ("pause");
		return 0;
	}
  
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

//FUNÇÃO PRINCIPAL
int main(){
  menuPrincipal();
  
return 0;                             // quando retornar 0(zero) o programa fecha.
}
