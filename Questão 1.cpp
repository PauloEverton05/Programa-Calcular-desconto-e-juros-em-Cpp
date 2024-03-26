#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int condicaoPagamento;
	float valorInicial, valorFinal, parcela, desconto;
	
	printf("Digite o valor inicial do produto: ");
	scanf("%f", &valorInicial);
	
	printf("\n-----------------------------------------------------------------------\n"
	"Digite a condição de pagamento:\n"
	"1 - À vista em dinheiro ou PIX, recebe 10 por cento de desconto.\n"
	"2 - À vista no cartão de crédito, recebe 5 por cento de desconto.\n"
	"3 - Em duas vezes, preço normal de etiqueta sem juros.\n"
	"4 - Em três vezes, preço normal de etiqueta mais 10 por cento de juros.\n"
	"5 - Sair.\n\n");
	printf("Resposta:");
	scanf("%d", &condicaoPagamento);
	printf("-----------------------------------------------------------------------\n");
	
	if(condicaoPagamento==1){
		valorFinal = valorInicial - ((valorInicial*10)/100);
		printf("\nO valor ficou %.2f reais.", valorFinal);

	}else if(condicaoPagamento==2){
		valorFinal = valorInicial - ((valorInicial*5)/100);
		printf("\nO valor ficou %.2f reais.", valorFinal);
	}else if(condicaoPagamento==3){
		parcela = valorInicial/2;
		printf("\n2x de %.2f reais.", parcela);
	}else if(condicaoPagamento==4){
		parcela = valorInicial/3;
		desconto = (valorInicial*10)/100;
		printf("\n3 vezes de %.2f + %.2f reais de juros.", parcela, desconto);
	}else if(condicaoPagamento==5){
		printf("\nVocê escolheu sair.");
	}else{
		printf("Número Inválido!");
	}
	
	    
	
}
