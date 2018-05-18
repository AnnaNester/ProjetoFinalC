#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <string.h>
#include <time.h>

struct endereco
{
	char rua[500], bairro[500], cidade[500], cep[500];
	int n_casa;
};

typedef struct cliente
{
	struct endereco e;
	char nome[500], sexo[500], endereco[500], cpf[500], telefone[500];
	int idade;
}cliente;

void cadastro_cliente()
{
	char filename[500];
	struct cliente c;
	printf("========================================================================================================================================================================\n\n");
	printf("\n\n\n\t\t\t\t\t\t\t       Informe os dados do cliente \n\n");
	printf("\t\t\t\t\t\t\t          Nome: ");
	fflush(stdin);
	gets(c.nome);
	fflush(stdin);
	printf("\t\t\t\t\t\t\t          CPF: ");
	fflush(stdin);
	gets(c.cpf);
	fflush(stdin);
	sprintf(filename, "Cadastros\\CPF %s.txt", c.cpf);
	FILE *clientes;		//declara o ponteiro para criação de txt
	clientes = fopen(filename, "w");	//abre o arquivo em txt
	if (clientes == NULL)	//verifica se ocorreu erro ao abrir o arquivo
	{
		system("cls");
		printf("Erro!\n\n");
		printf("Aguarde");
		Sleep(300);
		printf(".");
		Sleep(300);
		printf(".");
		Sleep(300);
		printf(".");
		Sleep(50);
		system("cls");
	}
	printf("\t\t\t\t\t\t\t          Idade: ");
	scanf("%i", &c.idade);
	printf("\t\t\t\t\t\t\t          Sexo: ");
	fflush(stdin);
	gets(c.sexo);
	fflush(stdin);
	printf("\t\t\t\t\t\t\t          Telefone: ");
	fflush(stdin);
	gets(c.telefone);
	fflush(stdin);
	printf("\n========================================================================================================================================================================\n\n");
	printf("\n\n\n\t\t\t\t\t\t               Informe o endereço do cliente \n\n");
	printf("\t\t\t\t\t\t\t          Rua: ");
	fflush(stdin);
	gets(c.e.rua);
	fflush(stdin);
	printf("\t\t\t\t\t\t\t          Número: ");
	fflush(stdin);
	scanf("%i", &c.e.n_casa);
	fflush(stdin);
	printf("\t\t\t\t\t\t\t          Bairro: ");
	fflush(stdin);
	gets(c.e.bairro);
	fflush(stdin);
	printf("\t\t\t\t\t\t\t          Cidade: ");
	fflush(stdin);
	gets(c.e.cidade);
	fflush(stdin);
	printf("\t\t\t\t\t\t\t          CEP: ");
	fflush(stdin);
	gets(c.e.cep);
	fflush(stdin);
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
	printf("\n\t\t\t\t\t\t\t ||  #######     CLIENTE CADASTRADO      ######  ||");
	printf("\n\t\t\t\t\t\t\t ||  #######         COM SUCESSO!        ######  ||");
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
	fprintf(clientes, "Nome: %s", c.nome);			//fprintf - grava o texto em txt
	fprintf(clientes, "\nCPF: %s", c.cpf);
	fprintf(clientes, "\nIdade: %i", c.idade);
	fprintf(clientes, "\nSexo: %s", c.sexo);
	fprintf(clientes, "\nTelefone: %s", c.telefone);
	fprintf(clientes, "\nRua: %s", c.e.rua);
	fprintf(clientes, "\nNúmero: %i", c.e.n_casa);
	fprintf(clientes, "\nBairro: %s", c.e.bairro);
	fprintf(clientes, "\nCidade: %s", c.e.cidade);
	fprintf(clientes, "\nCEP: %s", c.e.cep);
	fclose (clientes); //fecha o arquivo
	system("pause");
	system("cls");
}

void busca_cliente()
{
	struct cliente c;
	int b_op;
	char filename[500], nome[500], cpf[500], idade[500], sexo[500], telefone[500], rua[500], numero[500], bairro[500], cidade[500], cep[500];
	printf("\n========================================================================================================================================================================\n\n");
	printf("\n\n\n\t\t\t\t\t\t\t                Buscar Cliente \n\n");
	printf("\t\t\t\t\t\t          Informe o CPF do cliente que deseja buscar: ");
	scanf("%s", c.cpf);
	system("cls");
	sprintf(filename, "Cadastros\\CPF %s.txt", c.cpf);
	FILE *clientes;		//declara o ponteiro para criação de txt
	clientes = fopen(filename, "r");	//abre o arquivo em txt
	if(clientes == NULL)
	{
		system("cls");
		printf("\n\t\t\t\t\t\t\t ||''''''''''''''''''''''''''''''''''''''''''''''||");
		printf("\n\t\t\t\t\t\t\t ||                                              ||");
		printf("\n\t\t\t\t\t\t\t ||  ##########################################  ||");
		printf("\n\t\t\t\t\t\t\t ||  ##########################################  ||");
		printf("\n\t\t\t\t\t\t\t ||  #######                             ######  ||");
		printf("\n\t\t\t\t\t\t\t ||  #######                             ######  ||");
		printf("\n\t\t\t\t\t\t\t ||  #######                             ######  ||");
		printf("\n\t\t\t\t\t\t\t ||  #######                             ######  ||");
		printf("\n\t\t\t\t\t\t\t ||  #######          CADASTRO           ######  ||");
		printf("\n\t\t\t\t\t\t\t ||  #######        NÃO EXISTENTE!       ######  ||");
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
	}
	else
	{
		printf("\n========================================================================================================================================================================\n\n");
		printf("\n\n\n\t\t\t\t\t\t\t               Dados do cliente \n\n");
		fgets(nome, 500, clientes);
		printf("\t\t\t\t\t\t\t                %s", nome);
		fgets(cpf, 500, clientes);
		printf("\t\t\t\t\t\t\t                %s", cpf);
		fgets(idade, 500, clientes);
		printf("\t\t\t\t\t\t\t                %s", idade);
		fgets(sexo, 500, clientes);
		printf("\t\t\t\t\t\t\t                %s", sexo);
		fgets(telefone, 500, clientes);
		printf("\t\t\t\t\t\t\t                %s", telefone);
		fgets(rua, 500, clientes);
		printf("\t\t\t\t\t\t\t                %s", rua);
		fgets(numero, 500, clientes);
		printf("\t\t\t\t\t\t\t                %s", numero);
		fgets(bairro, 500, clientes);
		printf("\t\t\t\t\t\t\t                %s", bairro);
		fgets(cidade, 500, clientes);
		printf("\t\t\t\t\t\t\t                %s", cidade);
		fgets(cep, 500, clientes);
		printf("\t\t\t\t\t\t\t                %s", cep);
		printf("\n\n\n");
		fclose(clientes);
		system("pause");
		system("cls");
		while(b_op != 3)
		{
					printf("\n========================================================================================================================================================================\n\n");
					printf("\n\n\n\t\t\t\t\t\t\t                 Menu Busca de Cliente \n\n");
					printf("\n\t\t\t\t\t\t\t\t    |'''''''''''''''''''''''''''''|");
					printf("\n\t\t\t\t\t\t\t\t    ||     F L I P E R A M A     ||");
					printf("\n\t\t\t\t\t\t\t\t    ||___________________________||");
					printf("\n\t\t\t\t\t\t\t\t      ||                       ||");
					printf("\n\t\t\t\t\t\t\t\t      ||                       ||");
					printf("\n\t\t\t\t\t\t\t\t      || 1 - Alterar cadastro  ||");
					printf("\n\t\t\t\t\t\t\t\t      || 2 - Excluir           ||");
					printf("\n\t\t\t\t\t\t\t\t      || 3 - Sair              ||");
					printf("\n\t\t\t\t\t\t\t\t      ||                       ||");
					printf("\n\t\t\t\t\t\t\t\t      ||                       ||");
					printf("\n\t\t\t\t\t\t\t\t      ||_______________________||");
					printf("\n\t\t\t\t\t\t\t\t     // @  @ @           @  @ @ \\\\");
					printf("\n\t\t\t\t\t\t\t\t    //  |   @ @   @ @    |   @ @ \\\\");
					printf("\n\t\t\t\t\t\t\t\t   ||---------------------------  ||");
					printf("\n\t\t\t\t\t\t\t\t   ||                             ||");
					printf("\n\t\t\t\t\t\t\t\t   || |=|                         ||");
					printf("\n\t\t\t\t\t\t\t\t   ||          ===========        ||");
					printf("\n\t\t\t\t\t\t\t\t   ||          M O R T A L        ||");
					printf("\n\t\t\t\t\t\t\t\t   ||          K O M B A T        ||");
					printf("\n\t\t\t\t\t\t\t\t   ||          ===========        ||");
					printf("\n\t\t\t\t\t\t\t\t   ||                             ||");
					printf("\n\t\t\t\t\t\t\t\t   ||_____________________________||");
					printf("\n\t\t\t\t\t\t\t\t   ||=============================||");
					printf("\n\n\n\t\t\t\t\t\t\t                  Insira uma opção: ");
			scanf("%i", &b_op);
			switch(b_op)
			{
				case 1:
					{
						sprintf(filename, "Cadastros\\CPF %s.txt", c.cpf);
						FILE *clientes;		//declara o ponteiro para criação de txt
						clientes = fopen (filename, "w");	//abre o arquivo em txt
						if(clientes == NULL)
						{
							system("cls");
							printf("Erro!\n\n");
							printf("Aguarde");
							Sleep(300);
							printf(".");
							Sleep(300);
							printf(".");
							Sleep(300);
							printf(".");
							Sleep(50);
							system("cls");
						}
						else
						{
							system("cls");
							cadastro_cliente();
						}
					} //fim case 1
				break;
				case 2:
					{
						sprintf(filename, "Cadastros\\CPF %s.txt", c.cpf);
						FILE *clientes;		//declara o ponteiro para criação de txt
						clientes = fopen(filename, "w");	//abre o arquivo em txt
						if(clientes == NULL)
						{
							system("cls");
							printf("ERROR\n\n");
							printf("Aguarde");
							Sleep(300);
							printf(".");
							Sleep(300);
							printf(".");
							Sleep(300);
							printf(".");
							Sleep(50);
							system("cls");
						}
						else
						{
							system("cls");
							fclose(clientes);
							remove(filename);
							printf("\n\t\t\t\t\t\t\t ||''''''''''''''''''''''''''''''''''''''''''''''||");
							printf("\n\t\t\t\t\t\t\t ||                                              ||");
							printf("\n\t\t\t\t\t\t\t ||  ##########################################  ||");
							printf("\n\t\t\t\t\t\t\t ||  ##########################################  ||");
							printf("\n\t\t\t\t\t\t\t ||  #######                             ######  ||");
							printf("\n\t\t\t\t\t\t\t ||  #######                             ######  ||");
							printf("\n\t\t\t\t\t\t\t ||  #######                             ######  ||");
							printf("\n\t\t\t\t\t\t\t ||  #######                             ######  ||");
							printf("\n\t\t\t\t\t\t\t ||  #######       CLIENTE EXCLUÍDO      ######  ||");
							printf("\n\t\t\t\t\t\t\t ||  #######         COM SUCESSO!        ######  ||");
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
							system("pause");
							system("cls");
						}
					} //fim case 2
				break;
			} //fim switch
		} //fim while 1
	}
system("cls");
}
