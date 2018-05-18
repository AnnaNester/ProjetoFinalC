#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include "colors.h"

typedef struct jogo
{
	char nome_jogo[100], desenvolvedor[100], plataforma[100], classi[3];
	int cod_j;
	int qtd_vend;
	float preco_vend;
}jogo;

void cadastro_jogo ()
{
	struct jogo g;
	char arq[20], quant[20], preco[20];
	srand(time(NULL));
	g.cod_j = rand()%9999;		//gera um número aleatório para o código do jogo
	sprintf(arq, "Jogos\\Cod. %d.txt", g.cod_j);
	FILE *jogos;	//declara o ponteiro para criação de txt
	jogos = fopen(arq, "w");		//abre o arquivo em txt
	if(jogos == NULL)	//verifica se ocorreu erro ao abrir o arquivo
	{
		system("cls");
		printf("Erro!\n\n");
		printf("Aguarde");
		Sleep(1000);
		printf(".");
		Sleep(1000);
		printf(".");
		Sleep(1000);
		printf(".");
		Sleep(500);
		system("cls");
	}
	else
	{
		printf("\n========================================================================================================================================================================\n\n");
		printf("\t\t\t\t\t\t\t          Informe os dados do jogo \n\n");
		printf("\t\t\t\t\t\t\t       Favor informe o nome do jogo: ");
		fflush(stdin); //limpa o buffer de teclado
		gets(g.nome_jogo); //lê o que foi digitado
		fflush(stdin);
		printf("\t\t\t\t\t\t\t       Favor informe a desenvolvedora do jogo: ");
		fflush(stdin);
		gets(g.desenvolvedor);
		fflush(stdin);
		printf("\t\t\t\t\t\t\t       Favor informe a plataforma do jogo: ");
		fflush(stdin);
		gets(g.plataforma);
		fflush(stdin);
		printf("\t\t\t\t\t\t\t       Favor informe a Classificação (ESRB): ");
		fflush(stdin);
		gets(g.classi);
		fflush(stdin);
		printf("\t\t\t\t\t\t\t       Favor informe a quantidade: ");
		scanf("%i", &g.qtd_vend);
		FILE *q_jogo;
		sprintf(quant, "Jogos\\Quant. Jogo - Cod. %d.txt", g.cod_j);
		q_jogo = fopen(quant, "w");
		if(q_jogo == NULL)	//verifica se ocorreu erro ao abrir o arquivo
		{
			system("cls");
			printf("Erro!\n\n");
			printf("Aguarde");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(500);
			system("cls");
		}
		printf("\t\t\t\t\t\t\t       Favor informe o valor de venda: R$");
		scanf("%f", &g.preco_vend);
		FILE *p_jogo;
		sprintf(preco, "Jogos\\Preco Jogo - Cod. %d.txt", g.cod_j);
		p_jogo = fopen(preco, "w");
		if(p_jogo == NULL)	//verifica se ocorreu erro ao abrir o arquivo
		{
			system("cls");
			printf("Erro!\n\n");
			printf("Aguarde");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(1000);
			printf(".");
			Sleep(500);
			system("cls");
		}
		printf("\n\n\n\n");
		system("pause");
		system("cls");
		printf("\n\t\t\t\t\t\t\t ||''''''''''''''''''''''''''''''''''''''''''''''||");
		printf("\n\t\t\t\t\t\t\t ||                                              ||");
		printf("\n\t\t\t\t\t\t\t ||  ##########################################  ||");
		printf("\n\t\t\t\t\t\t\t ||  ##########################################  ||");
		printf("\n\t\t\t\t\t\t\t ||  #######                             ######  ||");
		printf("\n\t\t\t\t\t\t\t ||  #######                             ######  ||");
		printf("\n\t\t\t\t\t\t\t ||  #######                             ######  ||");
		printf("\n\t\t\t\t\t\t\t ||  #######                             ######  ||");
		printf("\n\t\t\t\t\t\t\t ||  #######        JOGO CADASTRADO      ######  ||");
		printf("\n\t\t\t\t\t\t\t ||  #######          COM SUCESSO!       ######  ||");
		printf("\n\t\t\t\t\t\t\t ||  #######                             ######  ||");
		printf("\n\t\t\t\t\t\t\t ||  #######                             ######  ||");
		printf("\n\t\t\t\t\t\t\t ||  #######                             ######  ||");
		printf("\n\t\t\t\t\t\t\t ||  #######                             ######  ||");
		printf("\n\t\t\t\t\t\t\t ||  ##########################################  ||");
		printf("\n\t\t\t\t\t\t\t ||  ##########################################  ||");
		printf("\n\t\t\t\t\t\t\t ||  ########################################    ||");
		printf("\n\t\t\t\t\t\t\t ||                                              ||");
		printf("\n\t\t\t\t\t\t\t ||    nintendo GAMEBOY                          ||");
		printf("\n\t\t\t\t\t\t\t ||                                              ||");
		printf("\n\t\t\t\t\t\t\t ||                                              ||");
		printf("\n\t\t\t\t\t\t\t ||        ####                                  ||");
		printf("\n\t\t\t\t\t\t\t ||        ####                           aaaa   ||");
		printf("\n\t\t\t\t\t\t\t ||    ############               bbbb   aaaaaa  ||");
		printf("\n\t\t\t\t\t\t\t ||    ############              bbbbbb  aaaaaa  ||");
		printf("\n\t\t\t\t\t\t\t ||        ####                  bbbbbb   aaaa   ||");
		printf("\n\t\t\t\t\t\t\t ||        ####                   bbbb           ||");
		printf("\n\t\t\t\t\t\t\t ||                                              ||");
		printf("\n\t\t\t\t\t\t\t ||                                              ||");
		printf("\n\t\t\t\t\t\t\t ||                  ssss    ssss            #   ||");
		printf("\n\t\t\t\t\t\t\t ||                ssss    ssss           #  #   ||");
		printf("\n\t\t\t\t\t\t\t ||                                    #  #  #   ||");
		printf("\n\t\t\t\t\t\t\t ||                                    #  #  #   ||");
		printf("\n\t\t\t\t\t\t\t ||                                    #  #  #   ||");
		printf("\n\t\t\t\t\t\t\t ||                                    #  #  #   ||");
		printf("\n\t\t\t\t\t\t\t ||                                    #  #      ||");
		printf("\n\t\t\t\t\t\t\t ||                                    #         ||");
		printf("\n\t\t\t\t\t\t\t ||                                              ||");
		printf("\n\t\t\t\t\t\t\t ||##############################################||");
		printf("\n\n\n\n");
		getch();
		system("cls");
		fprintf(jogos, "Nome do jogo: %s", g.nome_jogo);			//fprintf - grava o texto em txt | "jogos" é o nome do arquivo, "g.nome_jogo" é a variável que será gravada
		fprintf(jogos, "\nDesenvolvedora: %s", g.desenvolvedor);
		fprintf(jogos, "\nPlataforma: %s", g.plataforma);
		fprintf(jogos, "\nClassificação (ESRB): %s", g.classi);
		fprintf(q_jogo, "%i", g.qtd_vend);
		fprintf(p_jogo, "%0.2f", g.preco_vend);
		fprintf(jogos, "\nCódigo: %i", g.cod_j);
		fclose(jogos); //fecha o arquivo
		fclose(q_jogo);
		fclose(p_jogo);
	}
	system("cls");
}

float venda (float preco_j, int quantidade)
{
	float subt; // subt - subtotal da venda
	subt = (float) preco_j * quantidade;
}


//fazer funções da loja

void loja()
{
	struct jogo g;
	int j_op, op_loja, op_ven, resp, qtde_etq, qtd_rep, quantidade=0, vend;
	float subtotal=0, total=0, price; 
	char arq[20], quant[20], preco[20], nome[100], desen[100], plat[100], classi[100], cod[100], q[100], p[100];
	system("time/t");
	system("date/t");
	printf("\n\n");
	printf("\n\t\t\t\t\t\t\t\t    |'''''''''''''''''''''''''''''|");
	printf("\n\t\t\t\t\t\t\t\t    ||          L O J A          ||");
	printf("\n\t\t\t\t\t\t\t\t    ||___________________________||");
	printf("\n\t\t\t\t\t\t\t\t      ||                       ||");
	printf("\n\t\t\t\t\t\t\t\t      ||                       ||");
	printf("\n\t\t\t\t\t\t\t\t      || 1 - Venda             ||");
	printf("\n\t\t\t\t\t\t\t\t      || 2 - Repor Estoque     ||");
	printf("\n\t\t\t\t\t\t\t\t      || 3 - Sair              ||");
	printf("\n\t\t\t\t\t\t\t\t      ||                       ||");
	printf("\n\t\t\t\t\t\t\t\t      ||                       ||");
	printf("\n\t\t\t\t\t\t\t\t      ||_______________________||");
	printf("\n\t\t\t\t\t\t\t\t     // @  @ @           @  @ @ \\\\");
	printf("\n\t\t\t\t\t\t\t\t    //  |   @ @   @ @    |   @ @ \\\\");
	printf("\n\t\t\t\t\t\t\t\t   ||---------------------------  ||");
	printf("\n\t\t\t\t\t\t\t\t   ||                             ||");
	printf("\n\t\t\t\t\t\t\t\t   || |=|                         ||");
	printf("\n\t\t\t\t\t\t\t\t   ||         =============       ||");
	printf("\n\t\t\t\t\t\t\t\t   ||          S T R E E T        ||");
	printf("\n\t\t\t\t\t\t\t\t   ||         F I G H T E R       ||");
	printf("\n\t\t\t\t\t\t\t\t   ||         =============       ||");
	printf("\n\t\t\t\t\t\t\t\t   ||                             ||");
	printf("\n\t\t\t\t\t\t\t\t   ||_____________________________||");
	printf("\n\t\t\t\t\t\t\t\t   ||=============================||");
	printf("\n\n\t\t\t\t\t\t\t\t                Opção: ");
	scanf("%i", &op_loja);
	system("cls");
	switch (op_loja)
	{
		case 1:
			{
				while (resp !=2)
				{
					printf("========================================================================================================================================================================\n\n");
					printf("\n\t\t\t\t\t\t\t                   LOJA - VENDA \n\n");
					printf("\n\t\t\t\t\t\t\t  Informe o código do jogo que deseja buscar: ");
					scanf("%i", &g.cod_j);
					sprintf(arq, "Jogos\\Cod. %d.txt", g.cod_j);
					FILE *jogos;
					jogos = fopen(arq, "r");
					if(jogos == NULL)
					{
						system("cls");
						printf("Código inválido!\n\n");
						system("pause");
						system("cls");
				 	}
					else
					{
						system("cls");
						printf("========================================================================================================================================================================\n\n");
						printf("\n\t\t\t\t\t\t\t                   LOJA - VENDA \n\n");
						printf("\n\t\t\t\t\t\t\t                 Informações do Jogo \n\n");
						fgets(nome, 100, jogos);
						printf("\t\t\t\t\t\t\t                 %s", nome);
						fgets(desen, 100, jogos);
						printf("\t\t\t\t\t\t\t                 %s", desen);
						fgets(plat, 100, jogos);
						printf("\t\t\t\t\t\t\t                 %s", plat);
						fgets(classi, 100, jogos);
						printf("\t\t\t\t\t\t\t                 %s", classi);
						sprintf(quant, "Jogos\\Quant. Jogo - Cod. %d.txt", g.cod_j);
						FILE *q_jogo;
						q_jogo = fopen(quant, "r");
						fgets(q, 100, q_jogo);
						printf("\t\t\t\t\t\t\t                 Quantidade para venda: %s", q);
						sprintf(preco, "Jogos\\Preco Jogo - Cod. %d.txt", g.cod_j);
						FILE *p_jogo;
						p_jogo = fopen(preco, "r");
						fgets (p, 100, p_jogo);
						price = atof(p); //função atof transforma string em float
						printf("\n\t\t\t\t\t\t\t                 Valor de venda: R$%s", p);
						printf("\n\n\n");
						printf("\n\n\t\t\t\t\t\t\t               Informe a quantidade desejada: ");
						scanf("%i", &quantidade);
						subtotal = venda (price, quantidade);
						fclose(q_jogo);
						fclose(p_jogo);
						sprintf(quant, "Jogos\\Quant. Jogo - Cod. %d.txt", g.cod_j);
						q_jogo = fopen(quant, "w");
						fgets(q, 100, q_jogo);
						qtde_etq = atoi (q); //função atoi transforma string em inteiro
						vend = qtde_etq - quantidade;
						fprintf(q_jogo, "%i", vend);
						fclose(q_jogo);
						system("cls");
						printf("========================================================================================================================================================================\n\n");
						printf("\n\t\t\t\t\t\t\t                   LOJA - VENDA \n\n");
						printf("\n\t\t\t\t\t\t\t          O valor do produto é de: R$ %0.2f\n", subtotal);
						printf("\n\n\t\t\t\t\t\t\t          Deseja comprar mais algum produto? \n\n\t\t\t\t\t\t\t            1 - Sim \n\t\t\t\t\t\t\t            2 - Não");
						printf("\n\n\t\t\t\t\t\t\t            Opção: ");
						scanf("%i", &resp);
						total = total + subtotal;
						printf("\n\t\t\t\t\t\t\t            O subtotal é de"); 
						FOREGREEN;
						printf (" R$ %0.2f\n", total);
						getch();
						system("color 0c");
						system("cls");
					}
				}
				printf("========================================================================================================================================================================\n\n");
				printf("\n\t\t\t\t\t\t\t                   LOJA - VENDA \n\n");
				printf("\n\n");
				FOREGREEN; //cor verde da biblioteca colors
				printf("\n\t\t\t\t\t\t\t\t     Valor total a pagar: R$%0.2f\n\n\n\n\n\n\n\n", total);
				BRIGHT; //estilo de cor "brilhante" da biblioteca colors
				FOREYELLOW; //cor amarela da biblioteca colors
				printf("\n                    7144177                                                                                                                5525254           ");
				printf("\n                79888880888807                                                                                                         127504440985222       ");
				printf("\n             70888889090888888887                                                                                                    7888945555449888827     ");
				printf("\n            0880000904082  78008887                                                                                                7742750451549277750087    ");
				printf("\n           8880090900088    8808888                                                                                               787   72445522    7544087  ");
				printf("\n          880994000080884  588807                                                                                                         7454        79488  ");
				printf("\n         080444090080808888882                                                                                                    78887   745540887   74499  ");
				printf("\n        78044404090080888847                                                                                                     208887   745508887   745422 ");
				printf("\n        4844444940909081       8887   8887   8887   8887   8887   8887   8887   8887   8887   8887   8887   8887   8887   8887  78807    725524477   7245598 ");
				printf("\n        4844444444940982       8887   8887   8887   8887   8887   8887   8887   8887   8887   8887   8887   8887   8887   8887  78547   204515257   20445558 ");
				printf("\n         8444444444449488857                                                                                                    7045440445515155440445525240 ");
				printf("\n         184444444444444008882                                                                                                  7855555455251515545455151550 ");
				printf("\n          80544444444444494908897                                                                                               7041555552515555515251555140 ");
				printf("\n           005555544454545555154889                                                                                             7844494455544000455554444440 ");
				printf("\n            2845151525152122222545                                                                                              78007 2045447 7 7445407 2008 ");
				printf("\n              244122222222222542                                                                                                7827   71048    704027   748 ");
				printf("\n                 772222222777                                                                                                    2       777     777       2 ");
				printf("\n\n\n\n");
				total = 0;
				getch();
				system("color 0c"); //muda a cor do sistema
				system("cls");
			}
			break;
		case 2:
			{
				printf("========================================================================================================================================================================\n\n");
				printf("\n\t\t\t\t\t\t\t            LOJA - REPOSIÇÃO DE ESTOQUE \n\n");
				printf("\n\t\t\t\t\t\t\t       Informe o código do jogo que deseja buscar: ");
				scanf("%i", &g.cod_j);
				sprintf(arq, "Jogos\\Cod. %d.txt", g.cod_j);
				FILE *jogos;
				jogos = fopen(arq, "r");
				if(jogos == NULL)
				{
					system("cls");
					printf("Código inválido!\n\n");
					system("pause");
					system("cls");
				}
				else
				{
					system("cls");
					printf("========================================================================================================================================================================\n\n");
			    	printf("\n\t\t\t\t\t\t\t            LOJA - REPOSIÇÃO DE ESTOQUE \n\n");
					printf("\n\t\t\t\t\t\t\t      Informações do Jogo \n\n");
					fgets(nome, 100, jogos);
					printf("\n\t\t\t\t\t\t\t      %s", nome);
					sprintf(quant, "Jogos\\Quant. Jogo - Cod. %d.txt", g.cod_j);
					FILE *q_jogo;
					q_jogo = fopen(quant, "r");
					fgets(q, 100, q_jogo);
					printf("\t\t\t\t\t\t\t      Estoque atual: %s\n\n", q);
					fclose(q_jogo);
					sprintf(quant, "Jogos\\Quant. Jogo - Cod. %d.txt", g.cod_j);
					q_jogo = fopen(quant, "w");
					fgets(q, 100, q_jogo);
					qtde_etq = atoi (q);
					printf("\n\t\t\t\t\t\t\t      Informe a quantidade de jogos para reposição: ");
					scanf("%i", &qtd_rep);
					qtde_etq = qtde_etq + qtd_rep;
					printf("\n\t\t\t\t\t\t\t      A quantidade atual é de %i\n", qtde_etq);
					fprintf(q_jogo, "%i", qtde_etq);
					system("pause");
					system("cls");
					fclose(q_jogo);
					fclose(jogos);
				}			
			}
		break;
	}
}
