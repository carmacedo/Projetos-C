struct jogadores
{
    char nome[300];
};
void numjodadores()
{int numplayer,i=1;
char nome[10];
struct jogadores player[10];
    d:system("cls"); puts("Antes de começarmos digite o número de jogadores");
    puts("Podem jogar um máximo de 2 pessoas");
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
        printf("Digite o nome do jogador número %i :",i);
        fflush(stdin);
        gets(player[i].nome);}
        system("cls");

        modoconhecimentogeral2();
    }
    else
    {
        puts("só podem jogar um máximo de 2 pessoas.");
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
    puts("Este modo tem 30 níveis");
    puts("");
    puts("A pontuação máxima é de 30 pontos, valendo cada pergunta 1 ponto.");
    puts("");
    puts("Carregue Enter quando estiver pronto para começar");
    system("PAUSE");
    system("cls");
    //1
    puts("1º Nível");
    puts("---------------------------------------------------------------");
    puts("Que ator fez de pesonagem principal no filme ""A Máscara");
    puts(">>A) Eddie Murphy\n>>B) Jim Carrey\n>>C) Daniel Radcliffe\n>>D) Peter Greene ");
    if (toupper(getch())=='B')
			{puts("\n\nCorreto!!!");
			total=total+1;
			getch();
			}
    else
            {puts("\n\nErrado!!! A resposta certa é B) Jim Carrey");
            getch();
          goto f;
            }
            system("cls");
    //2
    puts("2º Nível");
    puts("---------------------------------------------------------------");
    puts("Que oceano banha Portugal?");
    puts(">>A) Nenhum\n>>B) Índico\n>>C) Atlântico\n>>D) Pacifico");
    if (toupper(getch())=='C')
			{puts("\n\nCorreto!!!");
			total=total+1;
			getch();
			}
    else
            {puts("\n\nErrado!!! A resposta certa é C) Atlântico.");
            getch();goto f;
            }
            system("cls");
    //3

    puts("3º Nível");
    puts("---------------------------------------------------------------");
    puts("Que cantora faz parceria com Beyoncé na música ""Beautiful Liar""?");
    puts(">>A) Rihanna\n>>B) Shakira\n>>C) Hayley Williams \n>>D) Adele");
    if (toupper(getch())=='B')
			{puts("\n\nCorreto!!!");
			total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa é B) Shakira");
		       getch();goto f;
		       }
		       system("cls");
    //4
    puts("4º Nível");
    puts("---------------------------------------------------------------");
    puts("O que significa a sigla RPG?");
    puts(">>A) Role-Playing Game\n>>B) Ridiculou Photogenic Guy\n>>C) Ranged Photo Greet\n>>D) Ray Powered Gun");
    if (toupper(getch())=='A')
			{puts("\n\nCorreto!!!");
			total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa é A) Role-Playing Game ");
		       getch();goto f;
		       }
		       system("cls");
    //5
    puts("5º Nível");
    puts("---------------------------------------------------------------");
    puts("A que cantora pertence a música ""Bleeding Love""?");
    puts(">>A) Leona Lewis\n>>B) joss Stone\n>>C) Alicia Keys\n>>D) Rihanna");
    if (toupper(getch())=='A')
			{puts("\n\nCorreto!!!");
			total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa é A) Leona Lewis");
		       getch();goto f;
		       }
		       system("cls");
    //6
    puts("6º Nível");
    puts("---------------------------------------------------------------");
    puts("Qual é a nacionalidade do futebolista Robin Van Persie?");
    puts(">>A)  Dinamarquês\n>>B) Sueco\n>>C) Alemão\n>>D) Holandês");
    if (toupper(getch())=='D')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa é D) Holandês");
		       getch();goto f;
		       }
		       system("cls");
    //7
    puts("7º Nível");
    puts("---------------------------------------------------------------");
    puts("A que banda pertence a música ""All Together now""?");
    puts(">>A) Da Weasel\n>>B) The Beatles\n>>C) Coldaplay\n>>D) Queen");
    if (toupper(getch())=='B')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa é B) The Beatles");
		       getch();goto f;
		       }
		       system("cls");
    //8
    puts("8º Nível");
    puts("---------------------------------------------------------------");
    puts("Quem é o vocalista da banda de hard rock ""Guns N' Roses""?");
    puts(">>A) Dizzy Rose\n>>B) Frank Ferrer\n>>C) Tracii Guns\n>>D) Axl Rose");
    if (toupper(getch())=='D')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa é D) Axl Rose");
		       getch();goto f;
		       }
		       system("cls");
    //9
    puts("9º Nível");
    puts("---------------------------------------------------------------");
    puts("O Sistema Nervoso Central (SNC) é contituído por...");
    puts(">>A) Encéfalo e medula espinhal\n>>B) Diencéfalo e cerebelo\n>>C) Cérebro e neurónios\n>>D) Gânglios e nervos");
    if (toupper(getch())=='A')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa é A) Encéfalo e medula espinhal");
		       getch();goto f;
		       }
		       system("cls");
    //10
    puts("10º Nível");
    puts("---------------------------------------------------------------");
    puts("Como se chama a esposa de Barack Obama?");
    puts(">>A) Michelle Obama\n>>B) Madelyn Obama\n>>C) Marie Obama\n>>D) Joanne Obama");
    if (toupper(getch())=='A')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa é A) Michelle Obama");
		       getch();goto f;
		       }
		       system("cls");
    //11
    puts("11º Nível");
    puts("---------------------------------------------------------------");
    puts("Qual é o nome do deus egípcio do Sol?");
    puts(">>A) Rá\n>>B) Anúbis\n>>C) Khnum\n>>D) Ìsis");
    if (toupper(getch())=='A')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa é A) Rá");
		       getch();goto f;
		       }
		       system("cls");
    //12
    puts("12º Nível");
    puts("---------------------------------------------------------------");
    puts("Quantas cores tem a Bandeira de Angola?");
    puts(">>A) 4\n>>B) 2\n>>C) 3\n>>D) 5");
    if (toupper(getch())=='C')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa é C) 3");
		       getch();goto f;
		       }
		       system("cls");
    //13
    puts("13º Nível");
    puts("---------------------------------------------------------------");
    puts("Quem descobriu que o coração é um músculo que bombeia sangue para todo o corpo?");
    puts(">>A) Dr. Jivago\n>>B) Dr. William Harvey\n>>C) Dr. Sigmund Freud\n>>D) Dr. Nicholas");
    if (toupper(getch())=='B')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa é B) Dr. William Harvey");
		       getch();goto f;
		       }
		       system("cls");
    //14
    puts("14º Nível");
    puts("---------------------------------------------------------------");
    puts("Que atleta venceu o prémio para melhor desportista do ano no Laurens 2012?");
    puts(">>A) Lionel Messi\n>>B) Kelly Slater\n>>C) Usain Bolt\n>>D) Novak Djokovic");
    if (toupper(getch())=='D')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa é D) Novak Djokovic");
		       getch();goto f;
		       }
		       system("cls");
    //15
    puts("15º Nível");
    puts("---------------------------------------------------------------");
    puts("Qual o nome do personagem interpretada por Keanu Reeves na triologia Matrix ?");
    puts(">>A) Morpheus\n>>B) Agent Smith\n>>C) Cypher\n>>D) Neo");
    if (toupper(getch())=='D')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa é D) Neo");
		       getch();goto f;
		       }
		       system("cls");
    //16
    puts("16º Nível");
    puts("---------------------------------------------------------------");
    puts("A que filme pertence a personagem Luke Skywalker?");
    puts(">>A) Alien\n>>B) Mission to Mars\n>>C) Star Trek\n>>D) Star Wars");
    if (toupper(getch())=='D')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa é D) Star Wars");
		       getch();goto f;
		       }
		       system("cls");
    //17
    puts("17º Nível");
    puts("---------------------------------------------------------------");
    puts("Quem produziu o programa televisivo ""The Muppet Show""?");
    puts(">>A) Jim Henson\n>>B) Jim Cameron\n>>C) Tim Burton\n>>D) Jeff Dunham");
    if (toupper(getch())=='A')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa é A) Jim Henson");
		       getch();goto f;
		       }
		       system("cls");
    //18
    puts("18º Nível");
    puts("---------------------------------------------------------------");
    puts("Diz-se do Período de acasalamento dos animais:");
    puts(">>A) Athos, Porthos e Aramis\n>>B) Athos, Aramis e Henry\n>>C) Athos, Porthos e Baude\n>>D) Athos, Baude e Toulose");
    if (toupper(getch())=='A')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa é A) Athos, Porthos e Aramis");
		       getch();goto f;
		       }
		       system("cls");
    //19
    puts("19º Nível");
    puts("---------------------------------------------------------------");
    puts("Que ator foi personagem principal no filme ""O Exterminador""?");
    puts(">>A) Arnold Schwarzenegger\n>>B) Vin Diesel\n>>C) Van Damme\n>>D) Sylvester Stallone");
    if (toupper(getch())=='A')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa é A) Arnold Schwarzenegger");
		       getch();goto f;
		       }
		       system("cls");
    //20
    puts("20º Nível");
    puts("---------------------------------------------------------------");
    puts("Que ator contracenou com Julia Roberts em ""A Mexicann""?");
    puts(">>A) Eddie Murphy\n>>B) Morgan Freeman\n>>C) Brad Pitt\n>>D) Samuel L. Jackson");
    if (toupper(getch())=='C')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa é C) Brad Pitt");
		       getch();goto f;
		       }
		       system("cls");
    //21
    puts("21º Nível");
    puts("---------------------------------------------------------------");
    puts("Qual é a capital da Islândia?");
    puts(">>A) Reiquejavique\n>>B) Quebec\n>>C) Yanam\n>>D) Oslo");
    if (toupper(getch())=='A')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa é A) Reiquejavique");
		       getch();goto f;
		       }
		       system("cls");
    //22
    puts("22º Nível");
    puts("---------------------------------------------------------------");
    puts("José Serney foi presidente de que país?");
    puts(">>A) México\n>>B) Chile\n>>C) Portugal\n>>D) Brasil");
    if (toupper(getch())=='D')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa é D) Brasil");
		       getch();goto f;
		       }
		       system("cls");
    //23
    puts("23º Nível");
    puts("---------------------------------------------------------------");
    puts("Quantas estrelas tem a insignia de um general?");
    puts(">>A) 3\n>>B) 2 \n>>C) 5 \n>>D) 4");
    if (toupper(getch())=='D')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa é D) 4");
		       getch();goto f;
		       }
    system("cls");
    //24
    puts("24º Nível");
    puts("---------------------------------------------------------------");
    puts("A que cantora pertence a música ""Blue Jeans""?");
    puts(">>A) Sky Ferreira\n>>B) Madonna\n>>C) Lana Del Rey\n>>D) Cher");
    if (toupper(getch())=='C')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa é C) Lana Del Rey");
		       getch();goto f;
		       }
		       system("cls");
    //25
    puts("25º Nível");
    puts("---------------------------------------------------------------");
    puts("Quem realizou, em 1994, o filme ""Pulp Fiction""?");
    puts(">>A) Glauber Rocha\n>>B) Quentin Tarantino\n>>C) Martin Scorsese\n>>D) David Lynch");
    if (toupper(getch())=='B')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa é B) Quentin Tarantino");
		       getch();goto f;
		       }
		       system("cls");
    //26
    puts("26º Nível");
    puts("---------------------------------------------------------------");
    puts("Que mar banha a Córsega?");
    puts(">>A) Mar Morto\n>>B) Mar da Galiléia\n>>C) Mar Vermelho\n>>D) Mar Mediterrâneo");
    if (toupper(getch())=='D')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa é D) Mar Mediterrâneo");
		       getch();goto f;
		       }
		       system("cls");
    //27
    puts("27º Nível");
    puts("---------------------------------------------------------------");
    puts("Em que planeta se situa a maior montanha do nosso sistema solar?");
    puts(">>A) Vénus\n>>B) Terra\n>>C) Júpiter\n>>D) Marte");
    if (toupper(getch())=='D')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa é D) Marte");
		       getch();goto f;
		       }
		       system("cls");
    //28
    puts("28º Nível");
    puts("---------------------------------------------------------------");
    puts("Em que conntinente nasceu Freddy Mercury?");
    puts(">>A) Europa\n>>B) Ásia\n>>C) América\n>>D) África");
    if (toupper(getch())=='A')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa é A) Europa");
		       getch();goto f;
		       }
    system("cls");
    //29
    puts("29º Nível");
    puts("---------------------------------------------------------------");
    puts("No jogo ""League of Legends""o que é preciso para destruir a equipa adversária?");
    puts(">>A) O Nexus\n>>B) O focus\n>>C) O Dux\n>>D) O Maximus");
    if (toupper(getch())=='A')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa é A) O Nexus");
		       getch();goto f;
		       }
		       system("cls");
    //30
    puts("30º Nível");
    puts("---------------------------------------------------------------");
    puts("Qual a nacionalidade do estilista Giorgi Armani?");
    puts(">>A) Alemão\n>>B) Francês\n>>C) Italiano\n>>D) Espanhol");
    if (toupper(getch())=='C')
			{puts("\n\nCorreto!!!");total=total+1;
			getch();
			}
		else
		       {puts("\n\nErrado!!! A resposta certa é C) Italiano");
		       getch();goto f;
		       }
		       system("cls");

    FILE *score;
     f:score = fopen("score.txt","a+");
    fprintf(score,"%s %i",strupr(nome),total);
    fclose(score);
    printf("Fim do jogo!!!\n\n%s >> Pontuação: %i\n",strupr(nome),total);
    getch();
    system("PAUSE");
    system("cls");

}


void modoconhecimentogeral2()
{

    int total1=0, total2=0;
struct jogadores player[10];
    puts("Este modo tem 15 níveis");
    puts("A pontuação máxima é de 15 pontos, valendo cada nível 1 ponto.\n\nCarregue Enter quando estiver pronto para começar");
    system("PAUSE");
    system("cls");
    //1-1
    puts("Jogador 1 - nível 1");
    puts("---------------------------------------------------------------");
    puts("Que ator fez de pesonagem principal no filme ""A Máscara");
    printf(">>A) Eddie Murphy\n>>B) Jim Carrey\n>>C) Daniel Radcliffe\n>>D) Peter Greene");
    if (toupper(getch())=='B')
			{printf("\n\nCorreto!!!");total1=total1+1;
			getch();
			}
    else
            {printf("\n\nErrado!!! A resposta certa é B) Jim Carrey");
            getch();

            }
            system("cls");
    //2-1
    puts("Jogador 2 - nível 1");
    puts("---------------------------------------------------------------");
    puts("Que acontece se os músculos forem esforçados exageradamente?");
    printf(">>A) Distenção\n>>B) Fadiga\n>>C) Fractura\n>>D) Desdratação");
    if (toupper(getch())=='A')
			{printf("\n\nCorreto!!!");total2=total2+1;
			getch();
			}
    else
            {printf("\n\nErrado!!! A resposta certa é A) Distenção.");
            getch();
            }
            system("cls");
    //1-2

    puts("jogador 1 - nível 2");
    puts("---------------------------------------------------------------");
    puts("Quantos dias tem um dia bissexto?");
    printf(">>A) 365\n>>B) 364\n>>C) 366\n>>D) 333");
    if (toupper(getch())=='C')
			{printf("\n\nCorreto!!!");total1=total1+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa é C) 366");
		       getch();
		       }
		       system("cls");
    //2-2
    puts("jogador 2 - nível 2");
    puts("---------------------------------------------------------------");
    puts("Em que zona do rosto humano se situa o orgão do olfato?");
    printf(">>A) Bochechas\n>>B) Nariz\n>>C) Orelhas\n>>D) Língua");
    if (toupper(getch())=='B')
			{printf("\n\nCorreto!!!");total2=total2+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa é B) Nariz");
		       getch();
		       }
		       system("cls");
    //1-3
    puts("jogador 1 - nível 3");
    puts("---------------------------------------------------------------");
    puts("Em que ano o homem pisou pela primeira vez a superfície da lua?");
    printf(">>A) 1969\n>>B) 2000\n>>C) 1978\n>>D) 1957");
    if (toupper(getch())=='A')
			{printf("\n\nCorreto!!!");
			total1=total1+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa é A) 1969");
		       getch();
		       }
		       system("cls");
    //2-3
    puts("jogador 2 - nível 3");
    puts("---------------------------------------------------------------");
    puts("Quem realizou o filme de 2009 ""Sacanas Sem Lei""?");
    printf(">>A) Steven Spielberg\n>>B) David Fincher\n>>C) Quentin Tarantino\n>>D) Brad Bird");
    if (toupper(getch())=='C')
			{printf("\n\nCorreto!!!");total2=total2+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa é C) Quentin Tarantino");
		       getch();
		       }
		       system("cls");
    //1-4
    puts("jogador 1 - nível 4");
    puts("---------------------------------------------------------------");
    puts("O que significa S.O.P.A.?");
    printf(">>A) Stop Online Piracy Act\n>>B) Super Online Piracy Act\n>>C) Stop Offline Piracy Act\n>>D) Super Online Poke Art");
    if (toupper(getch())=='A')
			{printf("\n\nCorreto!!!");total1=total1+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa é A) Stop Online Piracy Act");
		       getch();
		       }
		       system("cls");
    //2-4
    puts("jogador 2 - nível 4");
    puts("---------------------------------------------------------------");
    puts("Que atriz interpretou a personagem Alice no filme ""Resident Evil""?");
    printf(">>A) Claire Danes\n>>B) Jennifer Love Hewitt\n>>C) Michelle Rodriguez\n>>D) Milla Jovovich");
    if (toupper(getch())=='D')
			{printf("\n\nCorreto!!!");total2=total2+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa é D) Milla Jovovich");
		       getch();
		       }
		       system("cls");
    //1-5
    puts("jogador 1 - nível 5");
    puts("---------------------------------------------------------------");
    puts("Em informática, o que significa GPU?");
    printf(">>A) Graphics Processing Unit\n>>B) Grand Power Unit\n>>C) Grand Pin User\n>>D) Graphical Power Unit");
    if (toupper(getch())=='A')
			{printf("\n\nCorreto!!!");total1=total1+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa é A) Graphics Processing Unit");
		       getch();
		       }
		       system("cls");
    //2-5
    puts("jogador 2 - nível 5");
    puts("---------------------------------------------------------------");
    puts("Quem foi eleito presidente dos franceses em 1981?");
    printf(">>A) Jacques Chirac\n>>B) Georges Pompidou\n>>C) François Mitterrand\n>>D) Charles de Gaulle");
    if (toupper(getch())=='C')
			{printf("\n\nCorreto!!!");total2=total2+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa é C) François Mitterrand");
		       getch();
		       }
		       system("cls");
    //1-6
    puts("jogador 1 - nível 6");
    puts("---------------------------------------------------------------");
    puts("A que banda pertence o álbum ""Moving Pictures""de 1981");
    printf(">>A) Deep Purple\n>>B) Rush\n>>C) Saxon\n>>D) Metallica");
    if (toupper(getch())=='B')
			{printf("\n\nCorreto!!!");total1=total1+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa é B) Rush");
		       getch();
		       }
		       system("cls");
    //2-6
    puts("jogador 2 - nível 6");
    puts("---------------------------------------------------------------");
    puts("Em que ano foi formada a banda ""Bon Jovi""?");
    printf(">>A) 1979\n>>B) 1973\n>>C) 1983\n>>D) 1985");
    if (toupper(getch())=='C')
			{printf("\n\nCorreto!!!");total2=total2+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa é C) 1983");
		       getch();
		       }
		       system("cls");
    //1-7
    puts("jogador 1 - nível 7");
    puts("---------------------------------------------------------------");
    puts("Que ator interpretou a personagem Ryan Atwood na série televisiva ""The O.C:""?");
    printf(">>A) Adam Brody\n>>B) Seth Cohen\n>>C) Benjamin McKenzie\n>>D) Benjamin Mac");
    if (toupper(getch())=='C')
			{printf("\n\nCorreto!!!");total1=total1+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa é C) Benjamin McKenzie");
		       getch();
		       }
		       system("cls");
    //2-7
    puts("jogador 2 - nível 7");
    puts("---------------------------------------------------------------");
    puts("Quem inventou a garrafa térmica?");
    printf(">>A) James Dewar\n>>B) James Watt\n>>C) Aristóteles\n>>D) Thomas Edison");
    if (toupper(getch())=='A')
			{printf("\n\nCorreto!!!");total2=total2+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa é A) James Dewar");
		       getch();}
		       system("cls");
    //1-8
    puts("jogador 1 - nível 8");
    puts("---------------------------------------------------------------");
    puts("O Super Mário é a mascote de que empresa?");
    printf(">>A) Microsoft\n>>B) Apple\n>>C) Nintendo\n>>D) Sony");
    if (toupper(getch())=='C')
			{printf("\n\nCorreto!!!");total1=total1+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa é C) Nintendo");
		       getch();
		       }
		       system("cls");
    //2-8
    puts("jogador 2 - nível 8");
    puts("---------------------------------------------------------------");
    puts("Qual destes não faz fronteira com o brasil?");
    printf(">>A) Paraguai\n>>B) Bolívia\n>>C) Chile\n>>D) Peru");
    if (toupper(getch())=='C')
			{printf("\n\nCorreto!!!");total2=total2+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa é C) Chile");
		       getch();
		       }
		       system("cls");
    //1-9
    puts("jogador 1 - nível 9");
    puts("---------------------------------------------------------------");
    puts("No corpo dos animais, que tecidos permitem a excução de movimentos?");
    printf(">>A) Lã\n>>B) Músculos\n>>C) Pele\n>>D) Seda");
    if (toupper(getch())=='B')
			{printf("\n\nCorreto!!!");total1=total1+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa é B) Músculos");
		       getch();
		       }
		       system("cls");
    //2-9
    puts("jogador 2 - nível 9");
    puts("---------------------------------------------------------------");
    puts("Quem foi o personagem de Shakespeare que proferiu a frase ""Ser ou não ser eis a questão""?");
    printf(">>A) Rei Lear\n>>B) Lancelot\n>>C) Hamlet\n>>D) Othelo");
    if (toupper(getch())=='C')
			{printf("\n\nCorreto!!!");total2=total2+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa é C) Hamlet");
		       getch();
		       }
		       system("cls");
    //1-10
    puts("jogador 1 - nível 10");
    puts("---------------------------------------------------------------");
    puts("Em física, qual o nome científico da famosa ""Partícula De Deus""?");
    printf(">>A) Boido Higgs\n>>B) Meudeus\n>>C) Bóson de Higgs\n>>D) Neutrino");
    if (toupper(getch())=='A')
			{printf("\n\nCorreto!!!");total1=total1+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa é A) Boido Higgs");
		       getch();
		       }
		       system("cls");
    //2-10
    puts("jogador 2 - nível 10");
    puts("---------------------------------------------------------------");
    puts("Em que país se situa o autódromo de Le Mans?");
    printf(">>A) Chipre\n>>B) França\n>>C) Canadá\n>>D) Itália");
    if (toupper(getch())=='B')
			{printf("\n\nCorreto!!!");total2=total2+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa é B) França");
		       getch();
		       }
		       system("cls");
    //1-11
    puts("jogador 1 - nível 11");
    puts("---------------------------------------------------------------");
    puts("Em informática, o que significa IP?");
    printf(">>A) Interface Protocol\n>>B) Internet Portal\n>>C) Internet Portable\n>>D) Internet Protocol");
    if (toupper(getch())=='D')
			{printf("\n\nCorreto!!!");total1=total1+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa é D) Internet Protocol");
		       getch();
		       }
		       system("cls");
    //2-11
    puts("jogador 2 - nível 11");
    puts("---------------------------------------------------------------");
    puts("Em qual dos seguintes não participou a atriz Marilyn Monroe?");
    printf(">>A) Quanto mais Quente Melhor\n>>B) O Pecado Mora ao Lado\n>>C) JFK\n>>D) Bus Stop");
    if (toupper(getch())=='C')
			{printf("\n\nCorreto!!!");total2=total2+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa é C) JFK");
		       getch();
		       }
		       system("cls");
    //1-12
    puts("jogador 1 - nível 12");
    puts("---------------------------------------------------------------");
    puts("Como se chamava o primeiro foguetão europeu?");
    printf(">>A) Spot\n>>B) Ariane\n>>C) Po Sat\n>>D) Apollo");
    if (toupper(getch())=='B')
			{printf("\n\nCorreto!!!");total1=total1+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa é B) Ariane");
		       getch();
		       }
		       system("cls");
    //2-12
    puts("jogador 2 - nível 12");
    puts("---------------------------------------------------------------");
    puts("Qual é a capital de Liechtenstein");
    printf(">>A) Vaduz\n>>B) Chisinau\n>>C) Zagreb\n>>D) Lira");
    if (toupper(getch())=='A')
			{printf("\n\nCorreto!!!");total2=total2+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa é A) Vaduz");
		       getch();
		       }
		       system("cls");
    //1-13
    puts("jogador 1 - nível 13");
    puts("---------------------------------------------------------------");
    puts("Qual destas músicas pertence aos Metallica?");
    printf(">>A) Highway to hell\n>>B) Black in black\n>>C) Smoke on the water\n>>D) Seek and destroy");
    if (toupper(getch())=='D')
			{printf("\n\nCorreto!!!");total1=total1+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa é D) Seek and destroy");
		       getch();
		       }
		       system("cls");
    //2-13
    puts("jogador 2 - nível 13");
    puts("---------------------------------------------------------------");
    puts("Em que ano foi lançado o primeiro filme da saga ""Star Wars""?");
    printf(">>A) 1987\n>>B) 1972\n>>C) 1981\n>>D) 1977");
    if (toupper(getch())=='D')
			{printf("\n\nCorreto!!!");total2=total2+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa é D) 1977");
		       getch();
		       }
		       system("cls");
    //1-14
    puts("jogador 1 - nível 14");
    puts("---------------------------------------------------------------");
    puts("Quais são os nomes da dupla LMFAO?");
    printf(">>A) Justin & Yellow\n>>B) Redfoo & SkyBlu\n>>C) Afro & Sexy\n>>D) Steven & Zac");
    if (toupper(getch())=='B')
			{printf("\n\nCorreto!!!");total1=total1+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa é B) Redfoo & SkyBlu");
		       getch();
		       }
		       system("cls");
    //2-14
    puts("jogador 2 - nível 14");
    puts("---------------------------------------------------------------");
    puts("Dos seguintes aparelhos qual tem como finalidade medir a temperatura?");
    printf(">>A) Circuito\n>>B) Tiratura\n>>C) Tesoura\n>>D) Termômetro");
    if (toupper(getch())=='D')
			{printf("\n\nCorreto!!!");total2=total2+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa é D) Termômetro");
		       getch();
		       }
    system("cls");
    //1-15
    puts("jogador 1 - nível 15");
    puts("---------------------------------------------------------------");
    puts("Que liquido corre no aparelho circulatório de quase todos os animais?");
    printf(">>A) Sangue\n>>B) Mercúrio\n>>C) Vinho\n>>D) Álcool");
    if (toupper(getch())=='A')
			{printf("\n\nCorreto!!!");total1=total1+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa é A) Sangue");
		       getch();
		       }
		       system("cls");
    //2-15
    puts("jogador 2 - nível 15");
    puts("---------------------------------------------------------------");
    puts("Em que ano faleceu Steve Jobs");
    printf(">>A) 1996\n>>B) 2004\n>>C) 2008\n>>D) 2011");
    if (toupper(getch())=='D')
			{printf("\n\nCorreto!!!");total2=total2+1;
			getch();
			}
		else
		       {printf("\n\nErrado!!! A resposta certa é D) 2011");
		       getch();
		       }
		       system("cls");
    printf("Fim do jogo!!!\n\n %s >> Pontuação: %i\n\n %s >> Pontuação: %i\n",strupr(player[1].nome),total1,strupr(player[2].nome),total2);
    getch();
    system("cls");


}



void pontuacoes()
{char nome[50];
int total;

    puts("__________Pontuações____________");
    FILE *verscore=fopen("score.txt","r");
    while(fscanf(verscore,"%s %i",&nome,&total)!=EOF)

        printf("%s >> %i\n",strupr(nome),total);
system("PAUSE");

fclose(verscore);
}

void instrucoes()
{
   puts("Insturções");
   puts("----------------");
   puts("Para jogar");
   puts("----------------");
   puts("No menu inicial escolha a 1ª opção para jogar.");
   puts("Apenas podem jogar 2 pessoas no máximo.\n\nDigite o número de jogadores que vão jogar seguindo do nome desejado para o jogo.\n\nDentro do jogo respeito o tempo e a vez para submeter a sua resposta.\n\nSelecione apenas a tecla do teclado com a letra da opção desejada.\n\nQualquer outra tecla submetida para além das teclas 'A', 'B', 'C' e 'D' \n\nserá considerada como resposta inválida");
system("pause")
;
}
