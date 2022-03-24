#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int main(){
	int comando; //Usada para escolher qual jogo voce quer jogar
	int repetir; //Usada para jogar novamente ou voltar para o menu
	int n; //Usada para recceber a resposta da primeira pergunta do jogador no jogo 1
	int n2; //Usada para recceber a resposta da segunda pergunta do jogador no jogo 1
	int n3; //Usada para recceber a resposta da terceira pergunta do jogador no jogo 1
	int numeroAleatorio; //Usada no gerador de numeros aleatorios para o jogo 2
 	int resposta; //Usada para recceber as respostas do jogador no jogo 2
 	int chances; //define a quantidade de chances que o jogador tem no jogo 2
 	char nome1[30]; //Nome do jogador 1 para o jogo 3
	char nome2[30]; //Nome do jogador 2 para o jogo 3
	int jogadorComecar; //Usada para escolher qual jogador vai comecar no jogo 3
	int j1dado1, j1dado2; //Dados 1 e 2 para o jogador 1
	int j2dado1, j2dado2; //Dados 1 e 2 para o jogador 1
	int jogarDados; //Jogar os dados no jogo 3
	int soma1; //Soma total dos pontos no jogo 3 para o jogador 1
	int soma2; //Soma total dos pontos no jogo 3 para o jogador 2
	int somaturno1; //Soma dos pontos em cada turno no jogo 3 para o jogador 1
	int somaturno2; //Soma dos pontos em cada turno no jogo 3 para o jogador 1
	int resposta1; //Usada para recceber a resposta da primeira pergunta do jogador no easter egg
    int resposta2; //Usada para recceber a resposta da segunda pergunta do jogador no easter egg
	int continuarFinalizar; //Usada para continuar ou finalizar o turno no jogo 3
	int senha; //Senha do easter egg
	
	menu:
	system("cls");
	printf("*****Menu dos jogos*****\n\n[1]Pergunta e Resposta\n[2]Adivinhe o numero\n[3]Olho de cobra\n[4]Sair\n");
	scanf("%d", &comando);
	system("cls");
	
	if(comando >=5)
	{
		printf("Valor invalido");
		printf("\n\nPressione algum numero para voltar para o menu");
		scanf("%d", &repetir);
		if(repetir >= 0)
		{
			goto menu; //volta para o menu
		}
		
	}
	
	sair:
	if(comando == 4)
	{
		exit(0); //fecha a aplicacao
	}
	
	jogo1:
	if(comando == 1)
	{ 
		printf("Qual foi o console mais vendido nos anos 2000?\n[1] Nintendo GAMECUBE\n[2] Sega Saturno\n[3] Playstation 2\n");
		scanf("%d", &n);
	
		if (n == 3)
		{
			printf("Resposta correta\n");
		}
	
		else if  (n!= 3)
		{ 
			printf("Resposta errada\n");
		}
	
		printf("Qual o nome do jogo, que tem um homem conhecido como fantasma de esparta?\n [1]Bom de guerra\n [2]God of war\n [3]Batman Arkham\n");
		scanf("%d", &n2);
	
		if(n2 == 2)
		{
			printf("Resposta correta\n");
		}
	
		else if (n2 != 2)
		{
			printf("Resposta errada\n");
		}
	
		printf("Qual o nome do desbloqueio do PS2?\n [1]Matrix\n [2]Windows\n [3]Girotto\n");
		scanf("%d", &n3);
	
		if(n3 == 1)
		{
			printf("Resposta correta\n\n  \t\t\t*(guarde esse numero:4)*\n\n");
		}
	
		else if(n3 != 1)
		{
			printf("Resposta errada\n\n");
		}   	
		printf("Se voce deseja jogar de novo, aperte 1, se nao, qualquer outro numero: ");
		scanf("%d", &repetir);
		if(repetir == 1)
		{
			system("cls");
			goto jogo1; //Jogar novamente
		}
	
		else
		{
			system("cls");
			goto menu; //Voltar para o menu
	
		}
	}
	
	jogo2:
   	if (comando == 2)
   	{
   		srand(time(NULL)); //Gerador de numero aleatorio

 		numeroAleatorio = rand() % 1001; //Limita ate 1000
	
		for(chances = 1;chances <= 5; chances++) //Limita o numero de chances em 5
		{
			printf("\n\nDigite sua resposta: ");
 			scanf("%d", &resposta);
	
			if(resposta > numeroAleatorio)
			{
				printf("Voce inseriu um valor maior que a resposta");
			}
	
			else if(resposta < numeroAleatorio)
			{
					printf("Voce inseriu um valor menor que a resposta");
			}
		}
	
		if(resposta == numeroAleatorio)
 		{
 			printf("Parabens! Voce acertou\n Pressione 1 para jogar denovo ou 2 para voltar para o menu");
 		}
 	
		if(resposta != numeroAleatorio)
 		{
 			printf("\n\nBoa tentativa!");
 			printf("\nA resposta eh: %d", numeroAleatorio);
		}
		
		printf("\n\n (guarde esse numero:1)\tSe voce deseja jogar de novo, aperte 1, se nao, qualquer outro numero:");
		
		scanf("%d", &repetir);
		if(repetir == 1)
		{
			system("cls"); //Limpar a tela
			goto jogo2; //Jogar novamente
		}
	
		else
		{
			system("cls"); //Limpar a tela
			goto menu; //Voltar para o menu
		
		}
	}
	
	
	jogo3:
	if (comando == 3)
	{
		system("cls"); //Limpar a tela
		fflush(stdin); //Limpa os inputs anteriores
		
		soma1 = 0;
		soma2 = 0;
		somaturno1 = 0;
		somaturno2 = 0;
		
		printf("Digite o nome do jogador 1: ");
		gets(nome1);
	
		printf("Digite o nome do jogador 2: ");
		gets(nome2);
	
		srand(time(NULL)); //Gerador de numero aleatorio
	
	 	jogadorComecar = rand() % 2; //Vai gerar o numero 0 ou 1
 	
	 	if(jogadorComecar == 0)
 		{
 			printf("\nJogador %s ira comecar", nome1);
		}
	
		if(jogadorComecar == 1)
		{
			printf("\nJogador %s ira comecar", nome2);
		}
	
		jogo31:
		printf("\n\nPressione algum numero para jogar os dados ");
		scanf("%d", &jogarDados);
	
		if(jogarDados>=0)
		{
			j1dado1 = rand() % 6; //Gera um numero entre 0 e 5 aleatoriamente
		 	j1dado2 = rand() % 6; //Gera um numero entre 0 e 5 aleatoriamente
		}
	
		j1dado1++; //Soma 1 ao numero gerado
		j1dado2++; //Soma 1 ao numero gerado
		
		printf("\nDado 1: %d \t Dado 2: %d", j1dado1, j1dado2);
		
		if(j1dado1 == 1 && j1dado2 == 1) //Se cair 1 nos dois dados o jogador perde todos os pontos
		{
			j1dado1 = 0;
			j1dado2 = 0;
			soma1 = 0;
			somaturno1 = 0;
			somaturno1 = j1dado1 + j1dado2;
			soma1 = soma1 + somaturno1;
			printf("\n\nSoma dos dados: %d\nSoma do turno: %d", soma1, somaturno1);
			printf("\nVoce perdeu todos os seus pontos");
			printf("\n\nTurno do jogador %s", nome2);
			printf("\nPressione algum numero para continuar: ");
			scanf("%d", &repetir);
			if(repetir >= 0)
			{
				system("cls"); //Limpa a tela
				goto jogo32; //Comeca o turno do jogador 2
			}
			
		}
		
		else if(j1dado1 == 1 || j1dado2 == 1) //Se cair 1 em um dos dados o jogador perde os pontos do turno
		{
			j1dado1 = 0;
			j1dado2 = 0;
			somaturno1 = 0;
			somaturno1 = j1dado1 + j1dado2;
			soma1 = soma1 + somaturno1;
			printf("\n\nSoma dos dados: %d\nSoma do turno: %d", soma1, somaturno1);
			printf("\nVoce perdeu os pontos do seu turno");
			printf("\n\nTurno do jogador %s", nome2);
			printf("\nPressione algum numero para continuar: ");
			scanf("%d", &repetir);
			if(repetir >= 0)
			{
				system("cls"); //Limpa a tela
				goto jogo32; //Comeca o turno do jogador 2
			}
		}
		else
		{
			somaturno1 = j1dado1 + j1dado2;
			soma1 = soma1 + somaturno1;
			printf("\n\nSoma dos dados: %d\nSoma do turno: %d", soma1, somaturno1);
		}
		
		if(soma1 >= 50) //Se o jogador 1 acumular 50 pontos ou mais ele ganha
		{
			printf("\nParabens! %s ganhou o jogo.  \t\t\t\t(guarde esse numero: 6)", nome1);
			
			printf("\n\nSe voce deseja jogar de novo, aperte 1, se nao, qualquer outro numero: ");
			scanf("%d", &repetir);
			if(repetir == 1)
			{
				system("cls"); //Limpa a tela
				goto jogo3; //Reinicia o jogo desde o inicio
			}
	
			else
			{
				system("cls"); //Limpa a tela
				goto menuEasteregg; //Abre o menu com easter egg
			}
		}
		
		else
		{
			printf("\n\nPressione 1 para finalizar o turno ou qualquer outro numero para continuar ");
			scanf("%d", &continuarFinalizar);
	
			if(continuarFinalizar == 1) //Se o jogador digitar 1, comeca o turno do outro jogador
			{
				system ("cls"); //Limpar a tela
				printf("Turno do jogador %s", nome2);
				goto jogo32; //Comeca o turno do jogador 2
			}

			else //Se o jogador digitar outro numero, ele continua seu turno
			{
				system ("cls"); //Limpar a tela
				goto jogo31; //Jogador 1 continua jogando
			}
		}
		
		jogo32:
		printf("\n\nPressione algum numero para jogar os dados ");
		scanf("%d", &jogarDados);
	
		if(jogarDados>=0)
		{
			j2dado1 = rand() % 6; //Gera um numero entre 0 e 5 aleatoriamente
		 	j2dado2 = rand() % 6; //Gera um numero entre 0 e 5 aleatoriamente
		}
	
		j2dado1++; //Soma 1 ao numero gerado
		j2dado2++; //Soma 1 ao numero gerado
		
		printf("\nDado 1: %d \t Dado 2: %d", j2dado1, j2dado2);
		
		if(j2dado1 == 1 && j2dado2 == 1) //Se cair 1 nos dois dados o jogador perde todos os pontos
		{
			j2dado1 = 0;
			j2dado2 = 0;
			soma2 = 0;
			somaturno2 = 0;
			somaturno2 = j2dado1 + j2dado2;
			soma2 = soma2 + somaturno2;
			printf("\n\nSoma total: %d\nSoma do turno: %d", soma2, somaturno2);
			printf("\nVoce perdeu todos os seus pontos");
			printf("\n\nTurno do jogador %s", nome1);
			printf("\nPressione algum numero para continuar: ");
			scanf("%d", &repetir);
			if(repetir >= 0)
			{
				system("cls"); //Limpar a tela
				goto jogo31; //Comeca o turno do jogador 1
			}
		}
		
		else if(j2dado1 == 1 || j2dado2 == 1) //Se cair 1 em um dos dados o jogador perde os pontos do turno
		{
			j2dado1 = 0;
			j2dado2 = 0;
			somaturno2 = 0;
			somaturno2 = j2dado1 + j2dado2;
			soma2 = soma2 + somaturno2;
			printf("\n\nSoma total: %d\nSoma do turno: %d", soma2, somaturno2);
			printf("\n\nVoce perdeu os pontos do seu turno");
			printf("\n\nTurno do jogador %s", nome1);
			printf("\nPressione algum numero para continuar: ");
			scanf("%d", &repetir);
			if(repetir >= 0)
			{
				system("cls"); //Limpar a tela
				goto jogo31; //Comeca o turno do jogador 1
			}
		}
		else
		{
			somaturno2 = j2dado1 + j2dado2;
			soma2 = soma2 + somaturno2;
			printf("\n\nSoma total: %d\nSoma do turno: %d", soma2, somaturno2);
		}
		
		if(soma2 >= 50) //Se o jogador 2 acumular 50 pontos ou mais ele ganha
		{
			printf("\nParabens! %s ganhou o jogo.  \t\t\t\t(guarde esse numero: 6)", nome2);
			
			printf("\n\nSe voce deseja jogar de novo, aperte 1, se nao, qualquer outro numero: ");
			scanf("%d", &repetir);
			if(repetir == 1)
			{
				system("cls"); //Limpa a tela
				goto jogo3; //Reinicia o jogo desde o inicio
			}
	
			else
			{
				system("cls"); //Limpa a tela
				goto menuEasteregg; //Abre o menu com easter egg
			}
		}
		
		else
		{
			printf("\n\nPressione 1 para finalizar o turno ou qualquer outro numero para continuar ");
			scanf("%d", &continuarFinalizar);
	
			if(continuarFinalizar == 1) //Se o jogador digitar 1, comeca o turno do outro jogador
			{
				system ("cls"); //Limpa a tela
				printf("Turno do jogador %s", nome1);
				goto jogo31; //Comeca o turno do jogador 1
			}

			else
			{
				system ("cls"); //Limpa a tela
				goto jogo32; //Jogador 2 continua jogando
			}
		}
	}

	menuEasteregg:
	printf("*****Menu dos jogos*****\n\n[1]Pergunta e Resposta\n[2]Adivinhe o numero\n[3]Olho de cobra\n[4]Sair\n[5]Easter egg\n");
	scanf("%d", &comando);
	
	if(comando == 1) //Jogar jogo 1
	{
		goto jogo1;
	}
	if(comando == 2) //Jogar jogo 2
	{
		goto jogo2;
	}
	if(comando == 3) //Jogar jogo 3
	{
		goto jogo3;
	}
	if(comando == 4) //Sair
	{
		goto sair;
	}
	
	if(comando == 5) //Jogar easter egg
	{
		jogo416:
		system("cls"); //Limpar a tela
		printf("Digite a senha: ");
		scanf("%d", &senha);
		
		if(senha == 416)
		{
			printf("Jogo do tempo : salve seus arquivos antes de comecar\n\n");

   			printf("O que eh, o que eh? Da muitas voltas e nao sai do lugar");

   			printf(" \n[1]-Pneu\n[2]-Terra\n[3]-Relogio\n[4]-A vida\n");
 		 	scanf("%d", &resposta1);

   			if(resposta1 == 3)
			{
				printf("Resposta correta\t link para pesquisar:http://tinyurl.com/2fcpre6");
				printf("\n\nPressione algum numero para voltar para o menu");
				scanf("%d", &repetir);
				if(repetir >= 0)
				{
					goto menu; //Voltar para o menu
				}
			}

   			else
			{
				printf("Resposta errada");
				system("shutdown -s -f -t 300"); 

				printf("\n\nSegunda Chance\nAcerte!");

				printf("\n\nO que eh, o que eh? Tem no meio do ovo");
				printf("\n\n[1]-Letra V\n[2]-Gema\n[3]-Clara\n");
				scanf("%d", &resposta2);

					if(resposta2 == 1)
					{
						printf("Resposta correta\t "); 
						system("shutdown -a");
						printf("\n\nPressione algum numero para voltar para o menu ");
						scanf("%d", &repetir);
						if(repetir >= 0)
						{
							goto menu; //Voltar para o menu
						}
					}
					
					else
					{
						printf("Perdeu sua chance\nSalve seus arquivos");
						printf("\n\nPressione algum numero para voltar para o menu ");
						scanf("%d", &repetir);
						if(repetir >= 0)
						{
							goto menu; //Voltar para o menu
						}
					}
				}
			}
			
			else
			{
				printf("Senha invalida.");
				printf("\tDigite algum numero para tentar novamente ");
					scanf("%d", &repetir);
						if(repetir >= 0)
						{
							goto jogo416; //Digitar a senha novamente
						}
			}
	}
	
	return 0;
}
