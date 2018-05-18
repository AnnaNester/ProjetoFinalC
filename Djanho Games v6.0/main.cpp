#include <stdio.h>  //funções básicas
#include <stdlib.h> //funções básicas
#include <math.h> //funções matemáticas
#include <conio.h> //funções básicas
#include <windows.h> //permite trabalhar com a janela do programa
#include <time.h> //permite trabalhar com tempo
#include <locale.h> //permite trabalhar com linguagem
#include <string.h> //permite trabalhar com strings
#include "cadastro_cliente.h" //inclui a biblioteca de cliente
#include "cadastro_jogo.h" //inclui a biblioteca de jogo
#include "colors.h"

int main() 
{
	int opcao;
	setlocale (LC_ALL, "PORTUGUESE");
	SetConsoleTitle ("Djanho Games"); //coloca um título no prompt
	keybd_event(VK_MENU  , 0x36, 0, 0);  //funções de evento de teclado, onde pode-se configurar para o programa "apertar" teclas
	keybd_event(VK_RETURN, 0x1C, 0, 0);
	keybd_event(VK_RETURN, 0x1C, KEYEVENTF_KEYUP, 0);
	keybd_event(VK_MENU  , 0x38, KEYEVENTF_KEYUP, 0);
	system("color 0c"); //define a cor do fundo de tela e das letras
	Sleep(100); //tempo para printar algo na tela
	printf("\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t  ############        #############   ###########    ######     ####  ####    ####    ###########\n");
	printf("\t\t\t\t  #############       #############  #############   #######    ####  ####    ####   #############\n");
	printf("\t\t\t\t  ####      ####          ####      ####       ####  #### ###   ####  ####    ####  ####       ####\n");
	printf("\t\t\t\t  ####       ####         ####      ####       ####  #### ###   ####  ####    ####  ####       ####\n");
	printf("\t\t\t\t  ####        ####        ####      ####       ####  #### ###   ####  ####    ####  ####       ####\n");
	printf("\t\t\t\t  ####        ####        ####      ####       ####  ####  ###  ####  ####    ####  ####       ####\n");
	printf("\t\t\t\t  ####        ####        ####      ###############  ####  ###  ####  ############  ####       ####\n");
	printf("\t\t\t\t  ####        ####        ####      ###############  ####  ###  ####  ############  ####       ####\n");
	printf("\t\t\t\t  ####        ####        ####      ####       ####  ####   ### ####  ####    ####  ####       ####\n");
	printf("\t\t\t\t  ####       ####  ####   ####      ####       ####  ####   ### ####  ####    ####  ####       ####\n");
	printf("\t\t\t\t  ####      ####   ####   ####      ####       ####  ####   ### ####  ####    ####  ####       ####\n");
	printf("\t\t\t\t  #############     #########       ####       ####  ####    #######  ####    ####   #############\n");
	printf("\t\t\t\t  ###########          ####         ####       ####  ####     ######  ####    ####    ###########\n");
	Sleep(700);
	printf("\n\n");
	printf("\t\t\t\t\t    #########     ##########   ####         ####  #############  ##########\n");
	printf("\t\t\t\t\t   ############  ############  ### ###   ### ###  ############  ############\n");
	printf("\t\t\t\t\t   ###      ###  ###      ###  ### ###   ### ###  ###           ###      ###\n");
	printf("\t\t\t\t\t   ###           ###      ###  ###  ### ###  ###  ##########    ###\n");
	printf("\t\t\t\t\t   ###  #######  ############  ###    ###    ###  ##########     ##########\n");
	printf("\t\t\t\t\t   ###  ### ###  ############  ###           ###  ###                    ###\n");
	printf("\t\t\t\t\t   ###      ###  ###      ###  ###           ###  ###           ###      ###\n");
	printf("\t\t\t\t\t   ############  ###      ###  ###           ###  ############  ############\n");
	printf("\t\t\t\t\t    ##########   ###      ###  ###           ###  #############  ##########\n\n\n");
	Sleep(500); //permite trabalhar com o tempo
	printf("loading.");
	Sleep(150);
	printf(".");
	Sleep(150);
	printf(".");
	Sleep(10);
	printf(".");
	Sleep(10);
	printf(".");
	Sleep(500);
	printf(".");
	Sleep(500);
	printf(".");
	Sleep(50);
	printf(".");
	Sleep(50);
	printf(".");
	Sleep(200);
	printf(".");
	Sleep(200);
	printf(".\nsuccessful");
	Sleep(2000);
	system("cls"); //limpa a tela
	system("color 0c"); //
	while(opcao != 6)
	{
		system("time/t"); //printa a hora na tela
		system("date/t"); //printa a data na tela
		printf("\n\n");
		printf("\n\t\t\t\t\t\t\t\t    |'''''''''''''''''''''''''''''|");
		printf("\n\t\t\t\t\t\t\t\t    ||     F L I P E R A M A     ||");
		printf("\n\t\t\t\t\t\t\t\t    ||___________________________||");
		printf("\n\t\t\t\t\t\t\t\t      ||                       ||");
		printf("\n\t\t\t\t\t\t\t\t      || 1 - Cadastrar Cliente ||");
		printf("\n\t\t\t\t\t\t\t\t      || 2 - Buscar Cliente    ||");
		printf("\n\t\t\t\t\t\t\t\t      || 3 - Cadastrar Jogo    ||");
		printf("\n\t\t\t\t\t\t\t\t      || 4 - Loja              ||");
		printf("\n\t\t\t\t\t\t\t\t      || 5 - Sobre a loja      ||");
		printf("\n\t\t\t\t\t\t\t\t      || 6 - Sair              ||");
		printf("\n\t\t\t\t\t\t\t\t      ||_______________________||");
		printf("\n\t\t\t\t\t\t\t\t     // @  @ @           @  @ @ \\\\");
		printf("\n\t\t\t\t\t\t\t\t    //  |   @ @   @ @    |   @ @ \\\\");
		printf("\n\t\t\t\t\t\t\t\t   ||-----------------------------||");
		printf("\n\t\t\t\t\t\t\t\t   ||                             ||");
		printf("\n\t\t\t\t\t\t\t\t   || |=|    (< . . . . . . .     ||");
		printf("\n\t\t\t\t\t\t\t\t   ||                             ||");
		printf("\n\t\t\t\t\t\t\t\t   ||        P A C - M A N        ||");
		printf("\n\t\t\t\t\t\t\t\t   ||                             ||");
		printf("\n\t\t\t\t\t\t\t\t   ||                             ||");
		printf("\n\t\t\t\t\t\t\t\t   ||                             ||");
		printf("\n\t\t\t\t\t\t\t\t   ||_____________________________||");
		printf("\n\t\t\t\t\t\t\t\t   ||=============================||");
		printf("\n\n\n\t\t\t\t\t\t\t                  Insira uma opção: "); 
		scanf("%i", &opcao);
		system("cls");
		if(opcao < 1 || opcao > 6)
		{
			printf("\n\n\t\t\t\t\t\tOpção inválida\n\n\n\n");
			system("pause");
			system("cls");
		}
		if(opcao >= 1 && opcao <= 6)
		{
			switch(opcao)
			{
				case 1:
				{
					cadastro_cliente(); //chama a função de cadastro
				} //finaliza case 1
				break;
				case 2:
				{
					busca_cliente(); //chama a função de buscar cliente
				} //finaliza case 2
				break;
				case 3:
					{
						cadastro_jogo(); //chama a função de cadastrar cliente
					} //finaliza case 3
				break;
				case 4:
					{
						loja(); //chama a função de loja
					} //finaliza case 4
				break;
				case 5:
					{
						system("time/t");
						system("date/t");
						printf("\n\n");
						printf("\n\t\t\t\t\t\t\t\t    |'''''''''''''''''''''''''''''|");
						printf("\n\t\t\t\t\t\t\t\t    ||     F L I P E R A M A     ||");
						printf("\n\t\t\t\t\t\t\t\t    ||___________________________||");
						printf("\n\t\t\t\t\t\t\t\t      ||                       ||");
						printf("\n\t\t\t\t\t\t\t\t      ||       S C O R E       ||");
						printf("\n\t\t\t\t\t\t\t\t      ||   PTS: 1716663 - ADR  ||");
						printf("\n\t\t\t\t\t\t\t\t      ||   PTS: 1715689 - RIC  ||");
						printf("\n\t\t\t\t\t\t\t\t      ||   PTS: 1704814 - ACN  ||");
						printf("\n\t\t\t\t\t\t\t\t      ||   PTS: 0000000 - PAL  ||");
						printf("\n\t\t\t\t\t\t\t\t      ||   PTS: 0000000 - THA  ||");
						printf("\n\t\t\t\t\t\t\t\t      ||_______________________||");
						printf("\n\t\t\t\t\t\t\t\t     // @  @ @           @  @ @ \\\\");
						printf("\n\t\t\t\t\t\t\t\t    //  |   @ @   @ @    |   @ @ \\\\");
						printf("\n\t\t\t\t\t\t\t\t   ||-----------------------------||");
						printf("\n\t\t\t\t\t\t\t\t   ||                             ||");
						printf("\n\t\t\t\t\t\t\t\t   || |=|    ^#^     ^#^          ||");
						printf("\n\t\t\t\t\t\t\t\t   ||            ^#^     ^#^      ||");
						printf("\n\t\t\t\t\t\t\t\t   ||    C A S T L E V A N I A    ||");
						printf("\n\t\t\t\t\t\t\t\t   ||                             ||");
						printf("\n\t\t\t\t\t\t\t\t   ||                             ||");
						printf("\n\t\t\t\t\t\t\t\t   ||                             ||");
						printf("\n\t\t\t\t\t\t\t\t   ||_____________________________||");
						printf("\n\t\t\t\t\t\t\t\t   ||=============================||");
						printf("\n\n\t\t\t\t\t\t\t\t       Trabalho de algoritmos II");
						printf("\n\t\t\t\t\t\t\t\t      Loja de jogos: Djanho Games");
						printf("\n\t\t\t\t\t\t\t                Criado por: Adriana Sato");
						printf("\n\t\t\t\t\t\t\t\t                    Anna Nester");
						printf("\n\t\t\t\t\t\t\t\t                    Ricardo Ferreira");
						printf("\n\n\t\t\t\t\t\t\t\t Professora: Malgarete Rodrigues da Costa \n\n\n");
						system("pause");
						system("cls");
					} //finaliza case 5
				break;
				case 6:
					{
						BRIGHT;
						FOREYELLOW;
						printf("\n\n\n\n");
						printf("\t\t    #########     ##########   ####         ####  #############         ##########   ###      ### #############  ###########    ###   \n");
						printf("\t\t   ############  ############  ### ###   ### ###  ############         ############  ###      ### ############   ############   ###   \n");
						printf("\t\t   ###      ###  ###      ###  ### ###   ### ###  ###                  ###      ###  ###      ### ###            ###      ###   ###   \n");
						printf("\t\t   ###           ###      ###  ###  ### ###  ###  ##########           ###      ###  ###      ### ##########     ############   ###   \n");
						printf("\t\t   ###  #######  ############  ###    ###    ###  ##########           ###      ###  ###      ### ##########     ###########    ###   \n");
						printf("\t\t   ###  ### ###  ############  ###           ###  ###                  ###      ###   ###    ###  ###            ###      ###   ###   \n");
						printf("\t\t   ###      ###  ###      ###  ###           ###  ###                  ###      ###   ###    ###  ###            ###      ###         \n");
						printf("\t\t   ############  ###      ###  ###           ###  ############         ############    ########   ############   ###      ###   ###   \n");
						printf("\t\t    ##########   ###      ###  ###           ###  #############         ##########      ######    #############  ###      ###   ### \n\n");
						
						printf("\n\t\t\t\t\t                                         7                                    ");
						printf("\n\t\t\t\t\t                                        15                                    ");
						printf("\n\t\t\t\t\t                                       88887                                  ");
						printf("\n\t\t\t\t\t   8807                              78888887                             7780");
						printf("\n\t\t\t\t\t    48888857                        5888888880                        74888887");
						printf("\n\t\t\t\t\t    7888888888827           78     7777 7 7 777     8            718888880888 ");
						printf("\n\t\t\t\t\t     88888888888888077     782    88          88    487     72088888888888888 ");
						printf("\n\t\t\t\t\t     780888888888888888847288    88887      78888    88774888888888888888880  ");
						printf("\n\t\t\t\t\t             7777148888888880   8888882    7888888   888888888042777          ");
						printf("\n\t\t\t\t\t                         7884 7888888888  8888888887 4887                     ");
						printf("\n\t\t\t\t\t                          888 7777777772  2777777777 888                      ");
						printf("\n\t\t\t\t\t         777772254088888888087                      788888888889411277777     ");
						printf("\n\t\t\t\t\t         888888888888888880888                     7888088888888888888888     ");
						printf("\n\t\t\t\t\t         78880888888847    888857       78       748880   77088888888888      ");
						printf("\n\t\t\t\t\t          788888927       788888885     887    488888887       72088888       ");
						printf("\n\t\t\t\t\t            27         7888872808887   88887  2888882788887         72        ");
						printf("\n\t\t\t\t\t                     588885   88857   880088   75888   988882                 ");
						printf("\n\t\t\t\t\t                  7888888    9887    48004088    7884   78888887              ");
						printf("\n\t\t\t\t\t                78888882    7888    5888900888    8887    28888887            ");
						printf("\n\t\t\t\t\t                  2888      8889     28880887     8888      8882              ");
						printf("\n\t\t\t\t\t                           88887       7887       78888                       ");
						printf("\n\t\t\t\t\t                           8888    88  7887  88    8888                       ");
						printf("\n\t\t\t\t\t                                  88   8888   88                              ");
						printf("\n\t\t\t\t\t                              77788    7882   78877                           ");
						printf("\n\t\t\t\t\t                          58888888887   88   78888888882                      ");
						printf("\n\t\t\t\t\t                            74                      47                        ");
					}
					break;
			} //finaliza o switch case
		} //finaliza o if
	} //finaliza o do while
	getch();
} //finaliza o int main
