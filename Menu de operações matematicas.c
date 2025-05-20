#include <stdio.h>
#include <stdlib.h>

int main(){
	int opcao;
	float n1,n2;
	
	do{
		printf ("=-=-=[MENU]=-=-=\n");// Menu de escolha das operações
		printf ("1 - Adicao\n");
		printf ("2 - Subtracao\n");
		printf ("3 - Multiplicacao\n");
		printf ("4 - Divisao\n");
		printf ("5 - Sair\n");
		scanf ("%d", &opcao);// Recebe a decisão do usuário
		getchar();
		
		system ("cls"); // Limpa a pagina
	
		switch (opcao){// Recebe a opção que o usuário escolheu
			case 1:
				printf ("Numero: ");
				scanf ("%f", &n1);// Recebe o número que será inserido na operação
				getchar();
			
				printf ("Numero: ");
				scanf ("%f", &n2);// Recebe o outro número que será inserido na operação
				getchar();
			
				printf ("%.f + %.f = %.f\n", n1,n2, n1+n2);// Operação basica de adição
			
				printf ("\n");// Pula uma linha
			
				printf ("1 - Continuar\n");
				printf ("2 - Sair\n");
				scanf ("%d", &opcao);// Recebe a opção se o usuário quer continuar ou encerrar o programa
				getchar();
			
				switch (opcao){// Função que, de acordo com a escolha do usuário, realizará a continuidade
						  // Ou o encerramento do programa
					case 1: // Continua o programa
						system("cls");
						continue;
						break;
					case 2: // Encerra o programa
						printf ("Programa encerrado!\n");
						return 0;
					default:// Caso o usuário digite algo além de 1 ou 2, a opção será considerada inválida
						printf ("Opcao invalida!\n");
						break;
				}// end switch aninhado
			case 2:
				printf ("Numero: ");
				scanf ("%f", &n1);
				getchar();
			
				printf ("Numero: ");
				scanf ("%f", &n2);
				getchar();
			
				printf ("%.f - %.f = %.f\n", n1,n2,n1-n2);
			
				printf ("\n");
			
				printf ("1 - Continuar\n");
				printf ("2 - Sair\n");
				scanf ("%d", &opcao);
				getchar();
			
				switch (opcao){
					case 1:
						system("cls");
						continue;
						break;
					case 2:
						printf ("Programa encerrado!\n");
						return 0;
						default:
						printf ("Opcao invalida!\n");
						break;
				}// end switch aninhado
			case 3:
				printf ("Numero: ");
				scanf ("%f", &n1);
				getchar();
			
				printf ("Numero: ");
				scanf ("%f", &n2);
				getchar();
			
				printf ("%.f x %.f = %.f\n", n1,n2,n1*n2);
		
				printf ("\n");
			
				printf ("1 - Continuar\n");
				printf ("2 - Sair\n");
				scanf ("%d", &opcao);
				getchar();
			
				switch (opcao){
					case 1:
						system("cls");
						continue;
						break;
					case 2:
						printf ("Programa encerrado!\n");
						return 0;
					default:
						printf ("Opcao invalida!\n");
						break;
				}// end switch aninhado
			case 4:
				printf ("Numero: ");
				scanf ("%f", &n1);
				getchar();
			
				printf ("Numero: ");
				scanf ("%f", &n2);
				getchar();
			
				printf ("%.f / %.f = %.2f\n", n1,n2,n1/n2);
			
				printf ("\n");
			
				printf ("1 - Continuar\n");
				printf ("2 - Sair\n");
				scanf ("%d", &opcao);
				getchar();
			
				switch (opcao){
					case 1:
						system("cls");
						continue;
						break;
					case 2:
						printf ("Programa encerrado!\n");
						return 0;
					default:
						printf ("Opcao invalida!\n");
						break;
				}// end switch aninhado
			case 5:
				printf ("Programa encerrado!\n");
				break;
			default:
				printf ("Erro: Opcao invalida!\n");
		}//end switch	
	}while(opcao!=5);
}//end main