struct jogadores
{
    char nome[300];
};
void numjodadores()
{int numplayer,i=1;
char nome[10];
struct jogadores player[10];
    d:system("cls"); puts("Antes de come�armos digite o n�mero de jogadores");
    puts("Podem jogar um m�ximo de 2 pessoas");
    puts("");
    printf(">>");
    scanf("%i",&numplayer);
    system("cls");
    if(numplayer==1)
    {
        modoconhecimentogeral1();
    }
    else if(numplayer==2)
    {for(i=1;i<=numplayer;i++)
    {
        printf("Digite o nome do jogador n�mero %i :",i);
        fflush(stdin);
        gets(player[i].nome);}
        system("cls");

        modoconhecimentogeral2();
    }
    else
    {
        puts("s� podem jogar um m�ximo de 2 pessoas.");
        system("pause");
        system("cls");
        goto d;
    }


}
void modoconhecimentogeral1()
{int total=0;char nome[10];
    puts("Digite o seu nome :");
    fflush(stdin);
    gets(nome);
    puts("");
    puts("Este modo tem 30 n�veis");
    puts("");
    puts("A pontua��o m�xima � de 30 pontos, valendo cada pergunta 1 ponto.");
    puts("");
    puts("Carregue Enter quando estiver pronto para come�ar");
    system("PAUSE");
    system("cls");
    //1
    puts("1� N�vel");
    puts("---------------------------------------------------------------");
    puts("Que ator fez de pesonagem principal no filme ""A M�scara");
    puts(">>A) Eddie Murphy\n>>B) Jim Carrey\n>>C) Daniel Radcliffe\n>>D) Peter Greene ");
    if (toupper(getch())=='B')
			{puts("\n\nCorreto!!!");
			total=total+1;
			getch();
			}
    else
            {puts("\n\nErrado!!! A resposta certa � B) Jim Carrey");
            getch();
          goto f;
            }
            system("cls");
    //2
    puts("2� N�vel");
    puts("---------------------------------------------------------------");
    puts("Que oceano banha Portugal?");
    puts(">>A) Nenhum\n>>B) �ndico\n>>C) Atl�ntico\n>>D) Pacifico");
    if (toupper(getch())=='C')
			{puts("\n\nCorreto!!!");
			total=total+1;
			getch();
			}
    else
            {puts("\n\nErrado!!! A resposta certa � C) Atl�ntico.");
            getch();goto f;
            }
            system("cls");
    //3

    puts("3� N�vel");
    puts("---------------------------------------------------------------");
    puts("Que cantora faz parceria com Beyonc� na m�sica ""Beautiful Liar""?");
    puts(">>A) Rihanna\n>>B) Shakira\n>>C) Hayley Williams \n>>D) Adele");
    if (toupper(getch())=='B')
			{puts("\n\nCorreto!!!");
			total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa � B) Shakira");
		       getch();goto f;
		       }
		       system("cls");
    //4
    puts("4� N�vel");
    puts("---------------------------------------------------------------");
    puts("O que significa a sigla RPG?");
    puts(">>A) Role-Playing Game\n>>B) Ridiculou Photogenic Guy\n>>C) Ranged Photo Greet\n>>D) Ray Powered Gun");
    if (toupper(getch())=='A')
			{puts("\n\nCorreto!!!");
			total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa � A) Role-Playing Game ");
		       getch();goto f;
		       }
		       system("cls");
    //5
    puts("5� N�vel");
    puts("---------------------------------------------------------------");
    puts("A que cantora pertence a m�sica ""Bleeding Love""?");
    puts(">>A) Leona Lewis\n>>B) joss Stone\n>>C) Alicia Keys\n>>D) Rihanna");
    if (toupper(getch())=='A')
			{puts("\n\nCorreto!!!");
			total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa � A) Leona Lewis");
		       getch();goto f;
		       }
		       system("cls");
    //6
    puts("6� N�vel");
    puts("---------------------------------------------------------------");
    puts("Qual � a nacionalidade do futebolista Robin Van Persie?");
    puts(">>A)  Dinamarqu�s\n>>B) Sueco\n>>C) Alem�o\n>>D) Holand�s");
    if (toupper(getch())=='D')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa � D) Holand�s");
		       getch();goto f;
		       }
		       system("cls");
    //7
    puts("7� N�vel");
    puts("---------------------------------------------------------------");
    puts("A que banda pertence a m�sica ""All Together now""?");
    puts(">>A) Da Weasel\n>>B) The Beatles\n>>C) Coldaplay\n>>D) Queen");
    if (toupper(getch())=='B')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa � B) The Beatles");
		       getch();goto f;
		       }
		       system("cls");
    //8
    puts("8� N�vel");
    puts("---------------------------------------------------------------");
    puts("Quem � o vocalista da banda de hard rock ""Guns N' Roses""?");
    puts(">>A) Dizzy Rose\n>>B) Frank Ferrer\n>>C) Tracii Guns\n>>D) Axl Rose");
    if (toupper(getch())=='D')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa � D) Axl Rose");
		       getch();goto f;
		       }
		       system("cls");
    //9
    puts("9� N�vel");
    puts("---------------------------------------------------------------");
    puts("O Sistema Nervoso Central (SNC) � contitu�do por...");
    puts(">>A) Enc�falo e medula espinhal\n>>B) Dienc�falo e cerebelo\n>>C) C�rebro e neur�nios\n>>D) G�nglios e nervos");
    if (toupper(getch())=='A')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa � A) Enc�falo e medula espinhal");
		       getch();goto f;
		       }
		       system("cls");
    //10
    puts("10� N�vel");
    puts("---------------------------------------------------------------");
    puts("Como se chama a esposa de Barack Obama?");
    puts(">>A) Michelle Obama\n>>B) Madelyn Obama\n>>C) Marie Obama\n>>D) Joanne Obama");
    if (toupper(getch())=='A')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa � A) Michelle Obama");
		       getch();goto f;
		       }
		       system("cls");
    //11
    puts("11� N�vel");
    puts("---------------------------------------------------------------");
    puts("Qual � o nome do deus eg�pcio do Sol?");
    puts(">>A) R�\n>>B) An�bis\n>>C) Khnum\n>>D) �sis");
    if (toupper(getch())=='A')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa � A) R�");
		       getch();goto f;
		       }
		       system("cls");
    //12
    puts("12� N�vel");
    puts("---------------------------------------------------------------");
    puts("Quantas cores tem a Bandeira de Angola?");
    puts(">>A) 4\n>>B) 2\n>>C) 3\n>>D) 5");
    if (toupper(getch())=='C')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa � C) 3");
		       getch();goto f;
		       }
		       system("cls");
    //13
    puts("13� N�vel");
    puts("---------------------------------------------------------------");
    puts("Quem descobriu que o cora��o � um m�sculo que bombeia sangue para todo o corpo?");
    puts(">>A) Dr. Jivago\n>>B) Dr. William Harvey\n>>C) Dr. Sigmund Freud\n>>D) Dr. Nicholas");
    if (toupper(getch())=='B')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa � B) Dr. William Harvey");
		       getch();goto f;
		       }
		       system("cls");
    //14
    puts("14� N�vel");
    puts("---------------------------------------------------------------");
    puts("Que atleta venceu o pr�mio para melhor desportista do ano no Laurens 2012?");
    puts(">>A) Lionel Messi\n>>B) Kelly Slater\n>>C) Usain Bolt\n>>D) Novak Djokovic");
    if (toupper(getch())=='D')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa � D) Novak Djokovic");
		       getch();goto f;
		       }
		       system("cls");
    //15
    puts("15� N�vel");
    puts("---------------------------------------------------------------");
    puts("Qual o nome do personagem interpretada por Keanu Reeves na triologia Matrix ?");
    puts(">>A) Morpheus\n>>B) Agent Smith\n>>C) Cypher\n>>D) Neo");
    if (toupper(getch())=='D')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa � D) Neo");
		       getch();goto f;
		       }
		       system("cls");
    //16
    puts("16� N�vel");
    puts("---------------------------------------------------------------");
    puts("A que filme pertence a personagem Luke Skywalker?");
    puts(">>A) Alien\n>>B) Mission to Mars\n>>C) Star Trek\n>>D) Star Wars");
    if (toupper(getch())=='D')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa � D) Star Wars");
		       getch();goto f;
		       }
		       system("cls");
    //17
    puts("17� N�vel");
    puts("---------------------------------------------------------------");
    puts("Quem produziu o programa televisivo ""The Muppet Show""?");
    puts(">>A) Jim Henson\n>>B) Jim Cameron\n>>C) Tim Burton\n>>D) Jeff Dunham");
    if (toupper(getch())=='A')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa � A) Jim Henson");
		       getch();goto f;
		       }
		       system("cls");
    //18
    puts("18� N�vel");
    puts("---------------------------------------------------------------");
    puts("Diz-se do Per�odo de acasalamento dos animais:");
    puts(">>A) Athos, Porthos e Aramis\n>>B) Athos, Aramis e Henry\n>>C) Athos, Porthos e Baude\n>>D) Athos, Baude e Toulose");
    if (toupper(getch())=='A')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa � A) Athos, Porthos e Aramis");
		       getch();goto f;
		       }
		       system("cls");
    //19
    puts("19� N�vel");
    puts("---------------------------------------------------------------");
    puts("Que ator foi personagem principal no filme ""O Exterminador""?");
    puts(">>A) Arnold Schwarzenegger\n>>B) Vin Diesel\n>>C) Van Damme\n>>D) Sylvester Stallone");
    if (toupper(getch())=='A')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa � A) Arnold Schwarzenegger");
		       getch();goto f;
		       }
		       system("cls");
    //20
    puts("20� N�vel");
    puts("---------------------------------------------------------------");
    puts("Que ator contracenou com Julia Roberts em ""A Mexicann""?");
    puts(">>A) Eddie Murphy\n>>B) Morgan Freeman\n>>C) Brad Pitt\n>>D) Samuel L. Jackson");
    if (toupper(getch())=='C')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa � C) Brad Pitt");
		       getch();goto f;
		       }
		       system("cls");
    //21
    puts("21� N�vel");
    puts("---------------------------------------------------------------");
    puts("Qual � a capital da Isl�ndia?");
    puts(">>A) Reiquejavique\n>>B) Quebec\n>>C) Yanam\n>>D) Oslo");
    if (toupper(getch())=='A')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa � A) Reiquejavique");
		       getch();goto f;
		       }
		       system("cls");
    //22
    puts("22� N�vel");
    puts("---------------------------------------------------------------");
    puts("Jos� Serney foi presidente de que pa�s?");
    puts(">>A) M�xico\n>>B) Chile\n>>C) Portugal\n>>D) Brasil");
    if (toupper(getch())=='D')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa � D) Brasil");
		       getch();goto f;
		       }
		       system("cls");
    //23
    puts("23� N�vel");
    puts("---------------------------------------------------------------");
    puts("Quantas estrelas tem a insignia de um general?");
    puts(">>A) 3\n>>B) 2 \n>>C) 5 \n>>D) 4");
    if (toupper(getch())=='D')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa � D) 4");
		       getch();goto f;
		       }
    system("cls");
    //24
    puts("24� N�vel");
    puts("---------------------------------------------------------------");
    puts("A que cantora pertence a m�sica ""Blue Jeans""?");
    puts(">>A) Sky Ferreira\n>>B) Madonna\n>>C) Lana Del Rey\n>>D) Cher");
    if (toupper(getch())=='C')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa � C) Lana Del Rey");
		       getch();goto f;
		       }
		       system("cls");
    //25
    puts("25� N�vel");
    puts("---------------------------------------------------------------");
    puts("Quem realizou, em 1994, o filme ""Pulp Fiction""?");
    puts(">>A) Glauber Rocha\n>>B) Quentin Tarantino\n>>C) Martin Scorsese\n>>D) David Lynch");
    if (toupper(getch())=='B')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa � B) Quentin Tarantino");
		       getch();goto f;
		       }
		       system("cls");
    //26
    puts("26� N�vel");
    puts("---------------------------------------------------------------");
    puts("Que mar banha a C�rsega?");
    puts(">>A) Mar Morto\n>>B) Mar da Galil�ia\n>>C) Mar Vermelho\n>>D) Mar Mediterr�neo");
    if (toupper(getch())=='D')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa � D) Mar Mediterr�neo");
		       getch();goto f;
		       }
		       system("cls");
    //27
    puts("27� N�vel");
    puts("---------------------------------------------------------------");
    puts("Em que planeta se situa a maior montanha do nosso sistema solar?");
    puts(">>A) V�nus\n>>B) Terra\n>>C) J�piter\n>>D) Marte");
    if (toupper(getch())=='D')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa � D) Marte");
		       getch();goto f;
		       }
		       system("cls");
    //28
    puts("28� N�vel");
    puts("---------------------------------------------------------------");
    puts("Em que conntinente nasceu Freddy Mercury?");
    puts(">>A) Europa\n>>B) �sia\n>>C) Am�rica\n>>D) �frica");
    if (toupper(getch())=='A')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa � A) Europa");
		       getch();goto f;
		       }
    system("cls");
    //29
    puts("29� N�vel");
    puts("---------------------------------------------------------------");
    puts("No jogo ""League of Legends""o que � preciso para destruir a equipa advers�ria?");
    puts(">>A) O Nexus\n>>B) O focus\n>>C) O Dux\n>>D) O Maximus");
    if (toupper(getch())=='A')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa � A) O Nexus");
		       getch();goto f;
		       }
		       system("cls");
    //30
    puts("30� N�vel");
    puts("---------------------------------------------------------------");
    puts("Qual a nacionalidade do estilista Giorgi Armani?");
    puts(">>A) Alem�o\n>>B) Franc�s\n>>C) Italiano\n>>D) Espanhol");
    if (toupper(getch())=='C')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa � C) Italiano");
		       getch();goto f;
		       }
		       system("cls");

    FILE *score;
     f:score = fopen("score.txt","a+");
    fprintf(score,"%s %i",strupr(nome),total);
    fclose(score);
    printf("Fim do jogo!!!\n\n%s >> Pontua��o: %i\n",strupr(nome),total);
    getch();
    system("PAUSE");
    system("cls");

}


void modoconhecimentogeral2()
{

    int total1=0, total2=0;
struct jogadores player[10];
    puts("Este modo tem 15 n�veis");
    puts("A pontua��o m�xima � de 15 pontos, valendo cada n�vel 1 ponto.\n\nCarregue Enter quando estiver pronto para come�ar");
    system("PAUSE");
    system("cls");
    //1-1
    puts("Jogador 1 - n�vel 1");
    puts("---------------------------------------------------------------");
    puts("Que ator fez de pesonagem principal no filme ""A M�scara");
    printf(">>A) Eddie Murphy\n>>B) Jim Carrey\n>>C) Daniel Radcliffe\n>>D) Peter Greene");
    if (toupper(getch())=='B')
			{printf("\n\nCorreto!!!");total1=total1+1;
			getch();
			}
    else
            {printf("\n\nErrado!!! A resposta certa � B) Jim Carrey");
            getch();

            }
            system("cls");
    //2-1
    puts("Jogador 2 - n�vel 1");
    puts("---------------------------------------------------------------");
    puts("Que acontece se os m�sculos forem esfor�ados exageradamente?");
    printf(">>A) Disten��o\n>>B) Fadiga\n>>C) Fractura\n>>D) Desdrata��o");
    if (toupper(getch())=='A')
			{printf("\n\nCorreto!!!");total2=total2+1;
			getch();
			}
    else
            {printf("\n\nErrado!!! A resposta certa � A) Disten��o.");
            getch();
            }
            system("cls");
    //1-2

    puts("jogador 1 - n�vel 2");
    puts("---------------------------------------------------------------");
    puts("Quantos dias tem um dia bissexto?");
    printf(">>A) 365\n>>B) 364\n>>C) 366\n>>D) 333");
    if (toupper(getch())=='C')
			{printf("\n\nCorreto!!!");total1=total1+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa � C) 366");
		       getch();
		       }
		       system("cls");
    //2-2
    puts("jogador 2 - n�vel 2");
    puts("---------------------------------------------------------------");
    puts("Em que zona do rosto humano se situa o org�o do olfato?");
    printf(">>A) Bochechas\n>>B) Nariz\n>>C) Orelhas\n>>D) L�ngua");
    if (toupper(getch())=='B')
			{printf("\n\nCorreto!!!");total2=total2+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa � B) Nariz");
		       getch();
		       }
		       system("cls");
    //1-3
    puts("jogador 1 - n�vel 3");
    puts("---------------------------------------------------------------");
    puts("Em que ano o homem pisou pela primeira vez a superf�cie da lua?");
    printf(">>A) 1969\n>>B) 2000\n>>C) 1978\n>>D) 1957");
    if (toupper(getch())=='A')
			{printf("\n\nCorreto!!!");
			total1=total1+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa � A) 1969");
		       getch();
		       }
		       system("cls");
    //2-3
    puts("jogador 2 - n�vel 3");
    puts("---------------------------------------------------------------");
    puts("Quem realizou o filme de 2009 ""Sacanas Sem Lei""?");
    printf(">>A) Steven Spielberg\n>>B) David Fincher\n>>C) Quentin Tarantino\n>>D) Brad Bird");
    if (toupper(getch())=='C')
			{printf("\n\nCorreto!!!");total2=total2+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa � C) Quentin Tarantino");
		       getch();
		       }
		       system("cls");
    //1-4
    puts("jogador 1 - n�vel 4");
    puts("---------------------------------------------------------------");
    puts("O que significa S.O.P.A.?");
    printf(">>A) Stop Online Piracy Act\n>>B) Super Online Piracy Act\n>>C) Stop Offline Piracy Act\n>>D) Super Online Poke Art");
    if (toupper(getch())=='A')
			{printf("\n\nCorreto!!!");total1=total1+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa � A) Stop Online Piracy Act");
		       getch();
		       }
		       system("cls");
    //2-4
    puts("jogador 2 - n�vel 4");
    puts("---------------------------------------------------------------");
    puts("Que atriz interpretou a personagem Alice no filme ""Resident Evil""?");
    printf(">>A) Claire Danes\n>>B) Jennifer Love Hewitt\n>>C) Michelle Rodriguez\n>>D) Milla Jovovich");
    if (toupper(getch())=='D')
			{printf("\n\nCorreto!!!");total2=total2+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa � D) Milla Jovovich");
		       getch();
		       }
		       system("cls");
    //1-5
    puts("jogador 1 - n�vel 5");
    puts("---------------------------------------------------------------");
    puts("Em inform�tica, o que significa GPU?");
    printf(">>A) Graphics Processing Unit\n>>B) Grand Power Unit\n>>C) Grand Pin User\n>>D) Graphical Power Unit");
    if (toupper(getch())=='A')
			{printf("\n\nCorreto!!!");total1=total1+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa � A) Graphics Processing Unit");
		       getch();
		       }
		       system("cls");
    //2-5
    puts("jogador 2 - n�vel 5");
    puts("---------------------------------------------------------------");
    puts("Quem foi eleito presidente dos franceses em 1981?");
    printf(">>A) Jacques Chirac\n>>B) Georges Pompidou\n>>C) Fran�ois Mitterrand\n>>D) Charles de Gaulle");
    if (toupper(getch())=='C')
			{printf("\n\nCorreto!!!");total2=total2+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa � C) Fran�ois Mitterrand");
		       getch();
		       }
		       system("cls");
    //1-6
    puts("jogador 1 - n�vel 6");
    puts("---------------------------------------------------------------");
    puts("A que banda pertence o �lbum ""Moving Pictures""de 1981");
    printf(">>A) Deep Purple\n>>B) Rush\n>>C) Saxon\n>>D) Metallica");
    if (toupper(getch())=='B')
			{printf("\n\nCorreto!!!");total1=total1+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa � B) Rush");
		       getch();
		       }
		       system("cls");
    //2-6
    puts("jogador 2 - n�vel 6");
    puts("---------------------------------------------------------------");
    puts("Em que ano foi formada a banda ""Bon Jovi""?");
    printf(">>A) 1979\n>>B) 1973\n>>C) 1983\n>>D) 1985");
    if (toupper(getch())=='C')
			{printf("\n\nCorreto!!!");total2=total2+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa � C) 1983");
		       getch();
		       }
		       system("cls");
    //1-7
    puts("jogador 1 - n�vel 7");
    puts("---------------------------------------------------------------");
    puts("Que ator interpretou a personagem Ryan Atwood na s�rie televisiva ""The O.C:""?");
    printf(">>A) Adam Brody\n>>B) Seth Cohen\n>>C) Benjamin McKenzie\n>>D) Benjamin Mac");
    if (toupper(getch())=='C')
			{printf("\n\nCorreto!!!");total1=total1+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa � C) Benjamin McKenzie");
		       getch();
		       }
		       system("cls");
    //2-7
    puts("jogador 2 - n�vel 7");
    puts("---------------------------------------------------------------");
    puts("Quem inventou a garrafa t�rmica?");
    printf(">>A) James Dewar\n>>B) James Watt\n>>C) Arist�teles\n>>D) Thomas Edison");
    if (toupper(getch())=='A')
			{printf("\n\nCorreto!!!");total2=total2+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa � A) James Dewar");
		       getch();}
		       system("cls");
    //1-8
    puts("jogador 1 - n�vel 8");
    puts("---------------------------------------------------------------");
    puts("O Super M�rio � a mascote de que empresa?");
    printf(">>A) Microsoft\n>>B) Apple\n>>C) Nintendo\n>>D) Sony");
    if (toupper(getch())=='C')
			{printf("\n\nCorreto!!!");total1=total1+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa � C) Nintendo");
		       getch();
		       }
		       system("cls");
    //2-8
    puts("jogador 2 - n�vel 8");
    puts("---------------------------------------------------------------");
    puts("Qual destes n�o faz fronteira com o brasil?");
    printf(">>A) Paraguai\n>>B) Bol�via\n>>C) Chile\n>>D) Peru");
    if (toupper(getch())=='C')
			{printf("\n\nCorreto!!!");total2=total2+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa � C) Chile");
		       getch();
		       }
		       system("cls");
    //1-9
    puts("jogador 1 - n�vel 9");
    puts("---------------------------------------------------------------");
    puts("No corpo dos animais, que tecidos permitem a excu��o de movimentos?");
    printf(">>A) L�\n>>B) M�sculos\n>>C) Pele\n>>D) Seda");
    if (toupper(getch())=='B')
			{printf("\n\nCorreto!!!");total1=total1+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa � B) M�sculos");
		       getch();
		       }
		       system("cls");
    //2-9
    puts("jogador 2 - n�vel 9");
    puts("---------------------------------------------------------------");
    puts("Quem foi o personagem de Shakespeare que proferiu a frase ""Ser ou n�o ser eis a quest�o""?");
    printf(">>A) Rei Lear\n>>B) Lancelot\n>>C) Hamlet\n>>D) Othelo");
    if (toupper(getch())=='C')
			{printf("\n\nCorreto!!!");total2=total2+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa � C) Hamlet");
		       getch();
		       }
		       system("cls");
    //1-10
    puts("jogador 1 - n�vel 10");
    puts("---------------------------------------------------------------");
    puts("Em f�sica, qual o nome cient�fico da famosa ""Part�cula De Deus""?");
    printf(">>A) Boido Higgs\n>>B) Meudeus\n>>C) B�son de Higgs\n>>D) Neutrino");
    if (toupper(getch())=='A')
			{printf("\n\nCorreto!!!");total1=total1+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa � A) Boido Higgs");
		       getch();
		       }
		       system("cls");
    //2-10
    puts("jogador 2 - n�vel 10");
    puts("---------------------------------------------------------------");
    puts("Em que pa�s se situa o aut�dromo de Le Mans?");
    printf(">>A) Chipre\n>>B) Fran�a\n>>C) Canad�\n>>D) It�lia");
    if (toupper(getch())=='B')
			{printf("\n\nCorreto!!!");total2=total2+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa � B) Fran�a");
		       getch();
		       }
		       system("cls");
    //1-11
    puts("jogador 1 - n�vel 11");
    puts("---------------------------------------------------------------");
    puts("Em inform�tica, o que significa IP?");
    printf(">>A) Interface Protocol\n>>B) Internet Portal\n>>C) Internet Portable\n>>D) Internet Protocol");
    if (toupper(getch())=='D')
			{printf("\n\nCorreto!!!");total1=total1+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa � D) Internet Protocol");
		       getch();
		       }
		       system("cls");
    //2-11
    puts("jogador 2 - n�vel 11");
    puts("---------------------------------------------------------------");
    puts("Em qual dos seguintes n�o participou a atriz Marilyn Monroe?");
    printf(">>A) Quanto mais Quente Melhor\n>>B) O Pecado Mora ao Lado\n>>C) JFK\n>>D) Bus Stop");
    if (toupper(getch())=='C')
			{printf("\n\nCorreto!!!");total2=total2+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa � C) JFK");
		       getch();
		       }
		       system("cls");
    //1-12
    puts("jogador 1 - n�vel 12");
    puts("---------------------------------------------------------------");
    puts("Como se chamava o primeiro foguet�o europeu?");
    printf(">>A) Spot\n>>B) Ariane\n>>C) Po Sat\n>>D) Apollo");
    if (toupper(getch())=='B')
			{printf("\n\nCorreto!!!");total1=total1+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa � B) Ariane");
		       getch();
		       }
		       system("cls");
    //2-12
    puts("jogador 2 - n�vel 12");
    puts("---------------------------------------------------------------");
    puts("Qual � a capital de Liechtenstein");
    printf(">>A) Vaduz\n>>B) Chisinau\n>>C) Zagreb\n>>D) Lira");
    if (toupper(getch())=='A')
			{printf("\n\nCorreto!!!");total2=total2+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa � A) Vaduz");
		       getch();
		       }
		       system("cls");
    //1-13
    puts("jogador 1 - n�vel 13");
    puts("---------------------------------------------------------------");
    puts("Qual destas m�sicas pertence aos Metallica?");
    printf(">>A) Highway to hell\n>>B) Black in black\n>>C) Smoke on the water\n>>D) Seek and destroy");
    if (toupper(getch())=='D')
			{printf("\n\nCorreto!!!");total1=total1+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa � D) Seek and destroy");
		       getch();
		       }
		       system("cls");
    //2-13
    puts("jogador 2 - n�vel 13");
    puts("---------------------------------------------------------------");
    puts("Em que ano foi lan�ado o primeiro filme da saga ""Star Wars""?");
    printf(">>A) 1987\n>>B) 1972\n>>C) 1981\n>>D) 1977");
    if (toupper(getch())=='D')
			{printf("\n\nCorreto!!!");total2=total2+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa � D) 1977");
		       getch();
		       }
		       system("cls");
    //1-14
    puts("jogador 1 - n�vel 14");
    puts("---------------------------------------------------------------");
    puts("Quais s�o os nomes da dupla LMFAO?");
    printf(">>A) Justin & Yellow\n>>B) Redfoo & SkyBlu\n>>C) Afro & Sexy\n>>D) Steven & Zac");
    if (toupper(getch())=='B')
			{printf("\n\nCorreto!!!");total1=total1+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa � B) Redfoo & SkyBlu");
		       getch();
		       }
		       system("cls");
    //2-14
    puts("jogador 2 - n�vel 14");
    puts("---------------------------------------------------------------");
    puts("Dos seguintes aparelhos qual tem como finalidade medir a temperatura?");
    printf(">>A) Circuito\n>>B) Tiratura\n>>C) Tesoura\n>>D) Term�metro");
    if (toupper(getch())=='D')
			{printf("\n\nCorreto!!!");total2=total2+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa � D) Term�metro");
		       getch();
		       }
    system("cls");
    //1-15
    puts("jogador 1 - n�vel 15");
    puts("---------------------------------------------------------------");
    puts("Que liquido corre no aparelho circulat�rio de quase todos os animais?");
    printf(">>A) Sangue\n>>B) Merc�rio\n>>C) Vinho\n>>D) �lcool");
    if (toupper(getch())=='A')
			{printf("\n\nCorreto!!!");total1=total1+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa � A) Sangue");
		       getch();
		       }
		       system("cls");
    //2-15
    puts("jogador 2 - n�vel 15");
    puts("---------------------------------------------------------------");
    puts("Em que ano faleceu Steve Jobs");
    printf(">>A) 1996\n>>B) 2004\n>>C) 2008\n>>D) 2011");
    if (toupper(getch())=='D')
			{printf("\n\nCorreto!!!");total2=total2+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa � D) 2011");
		       getch();
		       }
		       system("cls");
    printf("Fim do jogo!!!\n\n %s >> Pontua��o: %i\n\n %s >> Pontua��o: %i\n",strupr(player[1].nome),total1,strupr(player[2].nome),total2);
    getch();
    system("cls");


}



void pontuacoes()
{char nome[50];
int total;

    puts("__________Pontua��es____________");
    FILE *verscore=fopen("score.txt","r");
    while(fscanf(verscore,"%s %i",&nome,&total)!=EOF)

        printf("%s >> %i\n",strupr(nome),total);
system("PAUSE");

fclose(verscore);
}

void instrucoes()
{
   puts("Instur��es");
   puts("----------------");
   puts("Para jogar");
   puts("----------------");
   puts("No menu inicial escolha a 1� op��o para jogar.");
   puts("Apenas podem jogar 2 pessoas no m�ximo.\n\nDigite o n�mero de jogadores que v�o jogar seguindo do nome desejado para o jogo.\n\nDentro do jogo respeito o tempo e a vez para submeter a sua resposta.\n\nSelecione apenas a tecla do teclado com a letra da op��o desejada.\n\nQualquer outra tecla submetida para al�m das teclas 'A', 'B', 'C' e 'D' \n\nser� considerada como resposta inv�lida");
system("pause")
;
}
